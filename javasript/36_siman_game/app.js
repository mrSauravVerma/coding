const btn = document.querySelectorAll(".btn");
btn[0].style.backgroundColor = "red";
btn[1].style.backgroundColor = "yellow";
btn[2].style.backgroundColor = "green";
btn[3].style.backgroundColor = "blue";

const fun = () => {
    btn[0].style.backgroundColor = "white";
    setTimeout(() => {
        btn[0].style.backgroundColor = "red";
    }, 100);
}

btn[0].addEventListener("click", fun);