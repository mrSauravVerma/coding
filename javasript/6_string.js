let str_1 = "   Saurav Verma   ";
let str_2 = "my name is";

console.log(str_1.length);
console.log(`upper case ${str_1.toUpperCase()}`);
console.log(`lower case ${str_1.toLowerCase()}`);
console.log(`remove white space(start,end) ${str_1.trim()}`);
console.log(`return part of string ${str_1.slice(2, 6)}`);
let res = str_1 + str_2;{
    console.log(`join strings ${res}`);
}
console.log(`join strings ${str_2.concat(str_1)}`);
console.log(`replace ${str_1.replace("erma", "ERMA")}`);
console.log(`find value of index : ${str_1.charAt(5)}`);