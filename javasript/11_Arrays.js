let vari = ["a", "b", "c", "d", "e"];
vari.push("new", "2_new");
console.log(`push method : ${vari}`);

let rValue = vari.pop();
console.log(`deleted char : ${rValue}`);
console.log(`pop method : ${vari}`);

let num = [1, 2, 3, 4, 5];
console.log(num);
console.log("toString convert Array data in string :", num.toString());

console.log(`concate mathod : ${vari.concat(num)}`);

num.unshift("NEW_2", "new");       // similar to push but he INSERT element in START
console.log(`unshift mathod : ${num}`);

num.shift();   // similar to pop but he DELET element in START
console.log(`shift mathod ${num}`);

console.log(`slice method : ${num.slice(2, 5)}`);  // .slice(startIDX,endIDX);

num.splice(3, 1, "hii", "hello");  //  .splice(startIDX, deletCOUNT, addELEMENT);
console.log(`splice method : ${num}`); 