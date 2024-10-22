// Rest Operator Collects multiple elements into a single array or object.
// rest is the opposite of spread

let test = (msg, ...nums) => {
    console.log(`msg is : ${msg}`);
    console.log(`sum of numbers: ${nums.reduce((sum, el) => sum + el)}`);
}

test("this is rest program", 1, 2, 3, 4, 5, 6, 7);