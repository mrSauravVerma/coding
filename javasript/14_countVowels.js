console.log(`count vowels help of function `);

function countVowels(str) {
    let i = 0;
    for (const char of str) {
        if (char === "a" || char === "e" || char === "i" || char === "o" || char === "u") {
            i++;
            console.log(`vowel ${i} : ${char}`);
        }
    }
}

let string = prompt("Enter the any string : ");
console.log(`string : ${string}`);
countVowels(string);

/////////////////////////////////////////////////////////

console.log(`count vowels help of ARROW function `);

const countvowels = (str) => {
    let i = 0;
    for (const char of str) {
        if (char === "a" || char === "e" || char === "i" || char === "o" || char === "u") {
            i++;
            console.log(`vowel ${i} : ${char}`);
        }
    }
}

let String = prompt("Enter the any string : ");
console.log(`string : ${String}`);
countvowels(String);
