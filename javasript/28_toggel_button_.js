let newBtn = document.createElement("button");
newBtn.innerText = "click me!";
let body = document.querySelector("body");
body.append(newBtn);

let event = newBtn.onclick = () => {
    let body = document.querySelector("body");
    if (body.style.backgroundColor === "white"){
        body.style.backgroundColor = "black";
    }
    else{
        body.style.backgroundColor = "white";
    }
}
