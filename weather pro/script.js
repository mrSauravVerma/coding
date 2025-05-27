let currentWeatherURL = "https://api.openweathermap.org/data/2.5/weather?units=metric&q=";
let forecastWeatherURL = "https://api.openweathermap.org/data/2.5/forecast?units=metric&q=";
let apiKey = "8e9b8ae1b4e404c6fa759657ff494dec";

const searchInput = document.getElementById("search-city");
const searchButton = document.getElementById("get-weather");
const weatherInfo = document.querySelector(".main-weather .info h1");
const weatherDescription = document.querySelector(".main-weather .info p");
const details = document.querySelector(".main-weather .details");
const weatherIcon = document.querySelector(".main-weather .icon img");
const weekDays = document.querySelectorAll(".weekly-forecast .day");

async function fetchWeather(city) {
    try {
        // Current weather
        const currentRes = await fetch(`${currentWeatherURL}${city}&appid=${apiKey}`);
        if (!currentRes.ok) throw new Error("City not found");
        const currentData = await currentRes.json();

        // Current weather UI update
        weatherInfo.textContent = `${currentData.main.temp}°C`;
        weatherDescription.textContent = currentData.weather[0].description;
        details.innerHTML = `
            <p>Feels Like: ${currentData.main.feels_like}°C</p>
            <p>Humidity: ${currentData.main.humidity}%</p>
            <p>Wind Speed: ${currentData.wind.speed} m/s</p>
            <p>Visibility: ${currentData.visibility / 1000} km</p>
        `;
        let currentIcon = currentData.weather[0].icon;
        weatherIcon.src = `https://openweathermap.org/img/wn/${currentIcon}@2x.png`;

        // Forecast weather
        const forecastRes = await fetch(`${forecastWeatherURL}${city}&appid=${apiKey}`);
        const forecastData = await forecastRes.json();

        // Filter next 5 days 12:00 PM records
        let nextFiveDays = forecastData.list.filter(item => item.dt_txt.includes("12:00:00")).slice(0, 5);

        weekDays.forEach((dayDiv, index) => {
            if (nextFiveDays[index]) {
            const forecast = nextFiveDays[index];
            const date = new Date(forecast.dt_txt);
            const dayName = date.toLocaleDateString('en-US', { weekday: 'short', month: 'short', day: 'numeric' });

            const icon = forecast.weather[0].icon;
            const desc = forecast.weather[0].description;
            const tempMax = Math.round(forecast.main.temp_max);
            const tempMin = Math.round(forecast.main.temp_min);

            dayDiv.style.display = ""; // show
            dayDiv.querySelector("h3").textContent = dayName;
            dayDiv.querySelector("img").src = `https://openweathermap.org/img/wn/${icon}@2x.png`;
            dayDiv.querySelector("img").alt = desc;
            dayDiv.querySelector("p").textContent = `High: ${tempMax}° Low: ${tempMin}°`;
            } else {
            dayDiv.style.display = "none"; // hide last 2 days div
            }
        });

    } catch (error) {
        alert(error.message);
    }
}

searchButton.addEventListener("click", () => {
    const city = searchInput.value.trim();
    if (city) {
        fetchWeather(city);
    } else {
        alert("Please enter a city name");
    }
});