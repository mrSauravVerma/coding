
// different different values of this keyword in arrow & normal function.

let person = {
    name: "saurav",
    age: 19,
    height: 5.4,
    banda: true,
    normalFun: function () {
        console.log(`value of this keyword in simple function.`);
        console.log(this);
    },
    arrowFun: () => {
        console.log(`value of this kryword in arrow function.`);
        console.log(this);
    }
}

person.normalFun();
person.arrowFun();