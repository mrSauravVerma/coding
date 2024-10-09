
console.log("line 1 normal ");

setTimeout(Fun = () => {  // exequte after 5 second
    console.log(`line 2 : setTimeout print after 5 sec`);
}, 5000);

setInterval(() => {  //  repet again & again 4 sec
    console.log("line 3 : setInterval print after 4 sec");
}, 4000);


console.log("line 4 : normal line program complete");