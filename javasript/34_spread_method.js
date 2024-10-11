// Spread Operator Expands an array or object into individual elements.

const arr1 = [1, 2, 3, 4, 5, 6, 7, 8, 9];
const arr2 = [10, 20, 30, 40, ...arr1];
const sumOfArr = [...arr1, ...arr2]
console.log(`arr2 values ${arr2}`);
console.log(`sumOfArr values ${sumOfArr}`);

let test = (msg, args1, args2, args3, args4) => {
    console.log(`msg is : ${msg}`);
    console.log(`arguments is: ${args1}`);
    console.log(`arguments is: ${args2}`);
    console.log(`arguments is: ${args3}`);
    console.log(`arguments is: ${args4}`);
}

test("this is spread program", ...arr2);