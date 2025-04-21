let arr=[23,453,232,56,34,787];
let i=0;
for(const price of arr){
    arr[i]=price-(price*(10/100));
    console.log(`the real price : ${price}`);
    console.log(`price after calculate discount : ${arr[i]}`);
    i++;
}
// let arr = [23, 453, 232, 56, 34, 787];
// let i = 0;
// for (const price of arr) {
//     arr[i] = price - price * 0.10;
//     console.log(`price after calculate discount : ${arr[i]}`);
//     i++;
// }
