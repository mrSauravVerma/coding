// wap to fine the average marks of student

let nums = [89, 90, 79, 90, 89]
let marks = 0;

for (let i = 0; i < 5; i++) {
    // marks =marks + nums[i];
    marks += nums[i];  
}

result = marks / 6;
console.log(`average marks of student : ${result}`);