let a = 4, b = 3;

const multiFun = (a, b) => {
    c = a * b;
    console.log(`${a} * ${b} = ${c}`);
    return 0;
}

multiFun(a, b);

const addFun = (a, b) => (a + b);  // retrun value with out RETURN keyword 

console.log(`${a} + ${b} = ${addFun(a, b)}`);