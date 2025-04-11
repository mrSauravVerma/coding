//   for loop
console.log("for loop");
for (let i = 1; i < 5; i++) {
    console.log("value of i :", i);
}

//   while loop
console.log("while loop");
let count = 1;
while (count < 5) {
    console.log("value of count :", count);
    count++;
}

//  do while loop
console.log("while loop");
let i = 0;
do {
    console.log("value of i :", i);
    i++;
} while (i < 5);

//   for of loop      use for vairables
console.log("  for of loop");
let str = "saurav";
let index = 0;
for (let i of str) {
    console.log(`Index of string [${index}] : ${i}`);
    index++;
}

//   for in loop      use for objects and array
console.log("for in loop");
let bioData = {
    name: "saurav",
    rollNumber: 23,
    allPass: true
}
for (let key in bioData) {
    console.log("key : ", key, "      value : ", bioData[key]);
}

