
// // --------------------------------------q-1--------------------------------------
// let students = [
//   { name: "A", marks: 70 },
//   { name: "B", marks: 55 },
//   { name: "C", marks: 80 }
// ];

// let displayStudents = students.map(function (student) {
//   return student.name + "marks" + student.marks;
// });
// console.log(displayStudents);


// let above60 = students.filter(function (student) {
//   return student.marks > 60;
// });
// console.log(above60);


// let totalMarks = students.reduce(function (sum, student) {
//   return sum + student.marks;
// }, 0);
// console.log("Total Marks:", totalMarks);


// let newStudent = { name: "D", marks: 65 };
// let updatedStudents = [...students, newStudent];
// console.log("Updated Student List:");
// console.log(updatedStudents);


// // --------------------------------------------------q-2-----------------------------------

// let product = [
//     {name:" X ", price:550},
//     {name:" Y ", price:350},
//     {name:" Z ", price:150}
// ];

// let displayproducts= product.map(function(product){
//     return product.name + " price  " + product.price;
// });
// console.log(displayproducts);

// let above500 = product.filter(function(product){
//     return product.price>500;
// })

// console.log(above500);

// let cart = product.reduce(function(sum, product){
//     return sum + product.price;
// },0);
// console.log("total marks ",cart);

// let newproduct = [{name: "ZZ", price:650}];
// let newarray = [...product , newproduct];
// console.log("updated cart ", newarray);

// // 
// -------------------------------------q-3---------------------------------------

// let employee = {
//   name: "Q",
//   age: 25,
//   address: {
//     city: "Mumbai",
//     pincode: 400001
//   },
//   skills: ["JavaScript", "HTML"]
// };
// console.log(employee.address.city);   
// console.log(employee.skills[0]);      

// employee.skills = [...employee.skills, "CSS", "React"];
// console.log(employee.skills);

// employee.age = 26;
// console.log(employee.age);
// let { name, age } = employee;

// console.log(name);
// console.log(employee);

// // --------------------------------------q-4----------------------------

// let num =[2,456,324,455,7651,221,1,7,9,8];

// let even = num.filter(function(num){
//     return num%2==0;
// })
// console.log(even);

// let odd = num.filter(function(num){
//     return num%2!=0;

// })
// console.log(odd);

// let total = num.reduce(function(sum, num){
//     return sum + num;
// });
// console.log(total);

// let square = num.map(num => num*num);
// console.log(square);

// -------------------------q-5-------------------------------------

    let Students=[ 
        {name:"R" , marks:56 },
        {name:"Y" , marks:99 },
        {name:"U" , marks:77 },
        {name:"I" , marks:86 }
    ];

    let studentwithresult = Students.map(function(Students){
        return Students.marks>40;
        }
    );

console.log("passed",studentwithresult);


let totalMarks = Students.reduce((sum, Students) => {
  return sum + Students.marks;
}, 0);

let classAverage = totalMarks / Students.length;

console.log("Class Average:", classAverage);