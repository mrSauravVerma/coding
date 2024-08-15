let div = document.querySelector("div");
console.log(div);
let id = div.getAttribute("id");
console.log(id);

///////////////////////////////////////////

let para = document.querySelector("p");
console.log(para);  // print paragraph
let attr = para.getAttribute("saurav");
console.log(attr);  // print paragraph Attribute VALUE

para.setAttribute("saurav", "newvalue"); // set NEW VALUE of Para Attribute

let printValue = para.getAttribute("saurav");
console.log(printValue);  // print paragraph NEW VALUE