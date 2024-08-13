let marks = prompt("enter number of student : ");

if (marks >= 90 && marks <= 100) {
    console.log("grade A");
}
else if (marks >= 80 && marks <= 89) {
    console.log("grade B");
}
else if (marks >= 70 && marks <= 79) {
    console.log("grade C");
}
else if (marks >= 60 && marks <= 69) {
    console.log("grade D");
}
else if (marks < 60 && marks >= 0) {
    console.log("grade E");
}
else {
    console.log("you enter uncorrect numbers.");
}