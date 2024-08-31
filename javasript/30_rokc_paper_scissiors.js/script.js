let rock = document.querySelector("#rock");
let paper = document.querySelector("#paper");
let scissior = document.querySelector("#scissior");
let msg = document.querySelector(".Msg");
let you_s = document.querySelector("#you-s");
let computer_s = document.querySelector("#compter-s");

let you_value;
let comp_value;
let winner;
let y = 0;
let c = 0;

const showMsg = () => {
    if (winner === "you") {
        msg.innerText = "winner is you";
        y++;
        you_s.innerText = y;
    }
    else if (winner === "draw") {
        msg.innerText = "match is draw";
    }
    else {
        msg.innerText = "winner is computer";
        c++;
        computer_s.innerText = c;
    }
}

const check_winner = () => {
    console.log("c_v = ", comp_value);
    console.log("y_v = ", you_value);

    if (you_value == comp_value) {
        winner = "draw";
    }
    else if (you_value === "r" && comp_value === "c" || you_value === "r" && comp_value === "p") {
        if (comp_value === "c") {
            winner = "you";
        }
        else {
            winner = "computer";
        }
    }
    else if (you_value === "p" && comp_value === "r" || you_value === "p" && comp_value === "c") {
        if (comp_value === "r") {
            winner = "you";
        }
        else {
            winner = "computer";
        }
    }
    else if (you_value === "c" && comp_value === "p" || you_value === "c" && comp_value === "r") {
        if (comp_value === "p") {
            winner = "you";
        }
        else {
            winner = "computer";
        }
    }
    console.log("winner = ", winner);
    showMsg();
}


const Comp_value = () => {
    let c_v = Math.floor(Math.random() * 3);
    if (c_v == 0) {
        comp_value = "r";
    }
    if (c_v == 1) {
        comp_value = "c";
    }
    if (c_v == 2) {
        comp_value = "p";
    }
    check_winner();
}
const r = () => {
    you_value = "r";
    Comp_value();
}
const p = () => {
    you_value = "p";
    Comp_value();
}
const s = () => {
    you_value = "s";
    Comp_value();
}


rock.addEventListener("click", r);
paper.addEventListener("click", p);
scissior.addEventListener("click", s);
