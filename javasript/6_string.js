let str_1 = "   Saurav Verma   ";
let str_2 = "my name is";

console.log(`the length of string is : ${str_1.length}`);
console.log(`Upper case : ${str_1.toUpperCase()}`);
console.log(`Lower case : ${str_1.toLowerCase()}`);
console.log(`Remove white space(start,end) : ${str_1.trim()}`);
console.log(`Return part of string : ${str_2.slice(1, 7)}`);
let res = str_1 + str_2;{
    console.log(`Join strings : ${res}`);
}
console.log(`Join strings : ${str_2.concat(str_1)}`);
console.log(`Replace : ${str_1.replace("erma", "ERMA")}`);
console.log(`Find value of index : ${str_1.charAt(5)}`);