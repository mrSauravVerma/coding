let Arr = [5, 10, 15, 20, 25];
let fun = Arr.forEach((val) => {   // forEach mathod dose not return anything
    console.log(val * val);
});

/////////////////////////////////////////////////
/////////////////   with map   //////////////////
/////////////////////////////////////////////////
console.log("with map mathod")
let arr = [2, 4, 6, 8, 10];

let Fun = arr.map(val => {  // // map mathod return same size of array
    return val * val;
});
