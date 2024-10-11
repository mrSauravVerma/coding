let marks = [34, 56, 47, 78, 9, 97, 96, 47, 56, 43];

let result = marks.filter(val => {
    if (val > 70) {   // return only above 70 marks values
        console.log(`markes = ${val}`);
    }
})