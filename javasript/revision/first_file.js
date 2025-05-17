// let arr=[[12],[34],[56],[78]];
// console.log(`2D array : ${arr}`);
// for(i=0 ; i<arr.length-1 ; i++){
//     console.log(`arr ${i+1} : `);  // arr[1] is : 
//     for(j=0 ; j<2 ; j++){
//         console.log(arr[i][j]);   // 12 
//     }
// }
// let arr = [[1, 2], [3, 4], [5, 6], [7, 8], [9, 10]];
// let index = 0; 
// let a = 0;
// for (i of arr) {
//     console.log(`index ${index} value is : ${i}`)
//     let b = 0;
//     for (j of arr[index]) {
//         console.log(`arr[${a},${b}] value is ${j}`);
//         b++;
//     }
//     index++;
//     a++;
// }
let name = "saurav";
var age = 23;
const addres = "bsr";
console.log(`name is : ${name}`);
console.log(`name is : ${age}`);
console.log(`name is : ${addres}`);

let array = [1, 2, 3, 4, 5, 6];
let index = 0;
for (let i = 0; i <= array.length - 1; i++) {
    console.log(`value of i in index[${index}] : ${array[i]}`);
    index++;
}