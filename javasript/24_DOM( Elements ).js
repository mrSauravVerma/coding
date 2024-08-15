let newEl = document.createElement("div"); // create the NEW DIV
newEl.innerText = "this is new div";
console.dir(newEl);
newEl.style.backgroundColor = "red"; // use STYLE with out CSS

let body = document.querySelector("body");
body.prepend(newEl); 
// body.append(newEl); 
// body.after(newEl); 
// body.before(newEl); 