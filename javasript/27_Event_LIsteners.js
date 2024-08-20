let para = document.querySelector("#ID");

para.addEventListener("click",() => {
    console.log(`this is click event with EventListener-1`);
});

para.addEventListener("click",() => {
    console.log(`this is click event with EventListener-2`);
});

let evt3 = () => {
    console.log(`this is click event with EventListener-3`);
}
para.addEventListener("click",evt3);

para.addEventListener("dblclick",() => {
    console.log(`this is click event with EventListener-4`);
});

////////////////////    Remove Event   ///////////////////

para.removeEventListener("click",evt3);