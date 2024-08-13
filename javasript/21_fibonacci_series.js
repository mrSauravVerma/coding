//   1,1,2,3,5,8,13,21,34,55..................

let first = 0, second = 1, result = 1;
for (let i = 0; i < 15; i++) {
    console.log(result);
    
    result = first + second;
    first = second;
    second = result;
}