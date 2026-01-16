// Primitive Datatye

/*
Type of Primitive Call by value
1- String
2- Number
3-Boolean
4- Null
5-undefined
6- symbol
7- bigint
*/

const StudentName = "Ali"
const StudentId = 3
const IsStudent = true
const IsVerified = null
const Courses = undefined;
const Id = Symbol("123")
const Idanother = Symbol("123")

// console.log(Id);
// console.log(Idanother);

// console.log(Id == Idanother);

function greet(){
    console.log("Hello");
}

let StudentData = ["ali", "1" , "raza" ]
// console.log(StudentData);
// console.log(StudentData[1]);

let obj ={
    ali:1,
    raza:"oli",
    muxo:4.4
}

console.log(obj);

console.log(obj);


/*
Non - Primitive Call by Reference
1-Array
2-Object
3-Functions
*/