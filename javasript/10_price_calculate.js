let rates = [250, 645, 300, 900, 50]; // price
console.log(`befor cut 10% deccount : ${rates}`);

for (let i = 0; i < 5; i++) {
    rates[i] = rates[i] - rates[i] * 10 / 100; // price after cut 10% off
}

console.log(`after cout 10% diccount : ${rates}`);