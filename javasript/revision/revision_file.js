let right_pick = "avtar";
let end = false;
while (!end) {
    let you_guess = prompt("Guess the movie name");
    if (you_guess === right_pick) {
        alert("Yes you are right");
        end = true;
    }
    else {
        prompt("No, you are wrong, please try again");
    }
}