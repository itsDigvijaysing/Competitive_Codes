/*
let js = 'amazing';
if(js=='amazing') alert("JS is Fun!");
console.log(40+25+10);


// We can write code withoug semicolon
let firstName = 'Digvijaysing';
let PI = 3.14;
let foodWasGreat = false;
console.log(typeof foodWasGreat);
foodWasGreat = 'No';
console.log(typeof foodWasGreat);

let year;
console.log(year,typeof year);

//type of null is object it's bug in JS but it was kept for legacy reasons...
year = null;
console.log(year,typeof year);


// We can also define like this but it will define it as property on global level & its very bad practice so make sure to give it a proper variable type like: let, var, const.
withoutVariableType = 'Hello World';
console.log(withoutVariableType);


const agePerson1 = 10;
const agePerson2 = 20;
let ageDifference = agePerson2 - agePerson1;
console.log('fake Age',ageDifference**2);

ageDifference++;
ageDifference--;
ageDifference += 10;
ageDifference **= 2;
console.log(ageDifference);
console.log(ageDifference>100);


const ageA = 20;
const ageB = 10;
const averageAge = (ageA + ageB) /2;
console.log(averageAge);


const name = 'Digvijaysing';
// Template Literals String
const myName = `My Name is ${name} & I'm ${80-57} years old Engineer!`;
console.log(myName);
console.log(`Normal String...`);
console.log('String with \n\ Multiple \n\ Lines');
console.log(`String with 
Multiple 
Lines`);


const birthYear = 1972;

//if we define let for description then we receive error because we are accessing it outside the block but if we define var we can access it outside if else block.

if(2023-birthYear >= 60){
    var description = `You can Retire Safely`;
}else{
    var description = `You can retire after ${60-(2023-birthYear)} years`;
}
console.log(description);


// Type Conversion 
const inputYear = '1991';
console.log(Number(inputYear));

// Type Coercion
// Coercion refers to the process of automatic or implicit conversion of values from one data type to another. This includes conversion from Number to String, String to Number, Boolean to Number etc
console.log('9'-'5'); // Output: 4
console.log('19'-'13'+'17'); // Output: 617 because Int + String means Concatenation.
console.log('19'-'13'+17); // Output: 23 because '19'-'13' get converted to int
console.log('123'<57); // Output: false
console.log(5+6+'4'+9-4-2); // Output: 1143


// falsy values 

console.log(Boolean(0));
console.log(Boolean(''));
console.log(Boolean('abc'));
console.log(Boolean());
*/
// We can use falsy values in coditional statement
let money = 0;
//console.log(Boolean(money));
if(money){
    console.log('Wow, You Have Money');
}else{
    console.log('You should Earn Money');
}