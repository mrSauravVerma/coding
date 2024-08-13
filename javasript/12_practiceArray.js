let companies = ["bloombreg", "Microsoft", "Uber", "Googal", "IBM", "Netflex"];
console.log(`companies without change : ${companies}`);

console.log(`Delet first companie `);
companies.shift();
console.log(companies);

console.log(`Add Ola companie `);
companies.splice(1, 1, "Ola");
console.log(companies);

console.log(`Add Amazone in end companie `);
companies.push("Amazone");
console.log(companies);