let mainFun = (fun, n) => {
    for (let i = 0; i < n; i++) {
        fun();
    }

    return function returnFun() {
        console.log("this is the return function");
    }
}

const arguFun = () => {
    console.log("this is argument function");
}

const main = mainFun(arguFun, 5);
main();
console.log(`value of main varibale : ${main}`);