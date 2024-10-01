let saurav = {
    name: "saurav verma",
    sec: 2,
    fun: function myfunction() {
        console.log(`my name is ${this.name}`);
    }
}

saurav.fun();   // function caling

console.log(saurav);   // print object

const value = saurav.name;  // access obj element
console.log(value);

const value2 = saurav["name"];  // access obj element 2nd 
console.log(value2);

const nestObj = {
    names: {
        first: "saurav",
        second: "gaurav",
        threed: "robin"
    },

    roll_num: {
        first: 14,
        second: 45,
        threed: 34
    }
}
console.log(nestObj.names.second);

const arrObj = [  /////////   obj in the array
    names = {
        first: "saurav",
        second: "gaurav",
        threed: "robin"
    },

    roll_num = {
        first: 14,
        second: 45,
        threed: 34
    }
]
console.log(arrObj[1].first);