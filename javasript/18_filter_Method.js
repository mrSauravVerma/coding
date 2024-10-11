let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
// filter mathod return filterd values

let odd = arr.filter(val => {
    if (val % 2 != 0) {
        return val;
    }
});

console.log(odd);