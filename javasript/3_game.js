let num = prompt("guess any number(0-10) : ");
let gameNum = 7;
if(num >= 0 && num <=10){
    if(gameNum == num){
        console.log("you select the correct number.")
    }
    else{
        console.log("you loss plese try agine.")
    }
}
else{
    console.log("you select uncorret number.")
}
