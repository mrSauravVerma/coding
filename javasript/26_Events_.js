let para = document.querySelector("#ID");
console.dir(para);

// let onclick = para.onclick = () => {
//     let i=0; ///////////
//     i++;  //////////
//     console.log(i);  ////////
//     console.log(`numbers of clicks `);
// }

// let ondblclick = para.ondblclick = () => {
//     console.log("numbers of doubel clicks");
// }

let onMouseOver = para.onmouseover = (evt) => {  // EVT is the OBAJECT
    console.log("numbers of hover");

    console.log(evt);
    console.log(`targate :${evt.target}`);
    console.log(`type : ${evt.type}`);
    console.log(`clint x : ${evt.clientX}`);
    console.log(`clint y : ${evt.clientY}`);
}

/* ------>  many events(mouse, keyboard, input etc..) in javaScript  <------ */


