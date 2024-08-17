// QUSTION 1
let newBtn = document.createElement("button");
newBtn.innerText = "click me!";
newBtn.style.backgroundColor = "red";
newBtn.style.color = "white";
let body = document.querySelector("body");
body.prepend(newBtn);

////////////////////////////////////////////////

// QUSTION 2
let para = document.querySelector("p");
para.classList.add("newCls");
let newCls = document.querySelector(".newCls");
newCls.style.backgroundColor = "red";