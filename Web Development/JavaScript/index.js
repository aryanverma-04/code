//! JAVASCRIPT CONSOLE API
// console.log("Jai Hanuman");
// alert("Jai shri ram"); We doesn't generally use alert in modern javascript
// document.write("Hii")

// console.warn("dont touch");
// console.error("this is an error");

// console.clear() to clear terminal

// console.assert(2==(4-2)); // to run a condition


//! Javascript Variables..
// variables are the containers to store data values
/*
var num1 = 12;
var num2 = 14;
console.log(num1+num2);
*/

//! Data types are like to be same in Javascript

// var str1 = "aryan";
// var str2 = 'verma';

// console.log(str1+str2);
// console.log(str1+num2);

// var marks = {
//     aryan: 12,
//     verma: 78
// }

// console.log(marks);

//! By default The value of a variable is: undefined

// var bobo;
// console.log(bobo);

//! Null value is also there in JAVASCRIPT
// var aa = null;
// console.log(aa);

//!____________________________________________________________________________________________________________________

// //! Reference Datatypes in Javascript

// var arr = [1, 2, 3, 4, 5 , "aryan", 'a'];
// console.log(arr);

// //! Operator can be used in Javascript 

// // Function in javascript

// function avg(a, b){
//     c = (a+b)/2;
//     return c;
// }
// c = avg(2, 10);
// console.log(c);


//! Similarly loops and conditional statements can be used in JAVASCRIPT

// var arr= [1, 2,3 ,4,5 ];

// for(var i = 0; i < arr.length; i++){
//     console.log(arr[i]);
// }

// arr.forEach(function(element){
//     console.log(element);
// })

//! Instead of var use ----->>> Let, as let scope is inside curly braces
//!                                  and as per modern javascript let is used.

// Const is used to declare a constant

//! similary do while, while loop can also be used:
                                                    // and even we can use it with array functions


//! Fucntions of array: 

// .push(): to insert at last
// .pop(): to remove an element from last

// .shift(): to remove an element from first position

// .toString(): to convert array to String
// .sort(): to sort an array


//! String methods in jAvAsCrIpT

// index, Slicing can be done

//! Date methods in Javacript

// let mydate = new Date();
// console.log(mydate); // GEt time full year can be used 
// console.log(mydate.getFullYear());

//! DOM MANIPULATION In javascript

// Dom maniplation: DOCUMENT OBJECT MODEL

// Dom in HTML are used to get the document'
// We can click or as we all change the Sytle of the particular element after the 
// particular click, or suppose after a particular actoin like when a document is fetched 


// let elem = document.getElementById('button');
// console.log(elem);

// let elemclass = document.getElementsByClassName('container');
// console.log(elemclass);
// elemclass[0].style.background = 'magenta';

// elemclass[0].classList.add('bg-primary');

// by using remove, We can remove the element class
// console.log(elemclass[0].innerHTML);
// console.log(elemclass[0].innerText);

// tn = document.getElementsByTagName('button');
// console.log(tn);

// // We can even add child into the document
// createdelement = document.createElement('p');
// createdelement.innerText = "This is the new paragraph";
// tn[0].appendChild(createdelement);

// // We can even replace child
// createdelement2 = document.createElement('b');
// createdelement2.innerText = "this is the bold text";
// tn[0].replaceChild(createdelement2, createdelement );

// remove child
// removeChild('createdelement2');
// removeChild(createdelement2 );

// Selecting using Query

// sel = document.querySelector('.button');
// console.log(sel);

// querySelectorALL to select all, above selected only one

//!----------------------------------------------------------------------------------------

//! Events in Javascript

//! Events example incudes like someone click on a button or someone hover over a paragaph

// function clicked(){
//     console.log("the button was clicked");
// }

// window.onload() = function(){
//     // let elemclass = document.getElementsByClassName('container');

//     // elemclass[0].style.background = 'magenta';

//     console.log("the page is reloaded");    
// }

new.addEventListener('click', function(){
    console.log("Hua na ab Behanchod");
})

