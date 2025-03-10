let apiUrl = "https://api.openweathermap.org/data/2.5/weather?units=metric&q=";
let apiKey = "8e9b8ae1b4e404c6fa759657ff494dec";

const searchInput = document.getElementById("search-city");
const searchButton = document.getElementById("get-weather");
const weatherInfo = document.querySelector(".main-weather .info h1");
const weatherDescription = document.querySelector(".main-weather .info p");
const details = document.querySelector(".main-weather .details");
const weatherIcon = document.querySelector(".main-weather .icon img");

async function fetchWeather(city) {
    try {
        const response = await fetch(`${apiUrl}${city}&appid=${apiKey}`);
        if (!response.ok) {
            throw new Error("City not found");
        }
        const data = await response.json();
        
        // Update UI with fetched weather data
        weatherInfo.textContent = `${data.main.temp}°C`;
        weatherDescription.textContent = data.weather[0].description;
        details.innerHTML = `
            <p>Feels Like: ${data.main.feels_like}°C</p>
            <p>Humidity: ${data.main.humidity}%</p>
            <p>Wind Speed: ${data.wind.speed} m/s</p>
            <p>Visibility: ${data.visibility / 1000} km</p>
        `;

        // Update Weather Icon based on conditions
        let iconCode = data.weather[0].icon;
        weatherIcon.src = `https://openweathermap.org/img/wn/${iconCode}@2x.png`;
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
