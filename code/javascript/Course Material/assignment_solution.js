/*
// Values & Variables Assignment Solutions
let country = 'India';
let continent = 'Asia';
let population = '1400 millions';

console.log(country+'\n'+continent+'\n'+population);


// Data Types Assignment Solution
let isIsland = false;
let language;

console.log(isIsland+'\n'+population+'\n'+country+'\n'+language);


// let,const & var Assignment Solutions
language = 'Hindi';
const myCountry = 'India';
// We always need to define value to const & we can't change it later on


//Basic Operators
let population = 1400000000;
population = population/2;
population += 1;
console.log('Modified Population '+population);
let description = 'India is in Asia, & its 1000 million people speak Hindi';
if( population*2 > 33000000){
    console.log(description);
}


// String & Template Literals Assignment Solution
let country = 'India';
let description = `${country} is in Asia, & its 1000 million people speak Hindi`;
console.log(description);


// Taking Decisions: If/else Statement Assignment Solution

const countryPopulation = 1400000000;
if(countryPopulation>33000000){
    console.log(`India Population is above Average`);
}else{
    console.log(`India Population is ${33000000-countryPopulation} below average`);
}

// Type Conversion & Coercion Assignment Solution
// String + No. = It will concatenate as string but String - no. = it will perform as normal operation
console.log('9'-'5'); // Output: 4
console.log('19'-'13'+'17'); // Output: 617
console.log('19'-'13'+17); // Output: 23 because '19'-'13' get converted to int
console.log('123'<57); // Output: false
console.log(5+6+'4'+9-4-2); // Output: 1143


// Equality Operators Assignment Solutions
let numNeighbours = prompt('How many neighbour countries does your country have?');
if(Number(numNeighbours) === 1){
    console.log('1 Country on Border');
}else if (Number(numNeighbours) > 1){
    console.log('More than 1 Border Country');
}else{
    console.log('No Border Country');
}


// Logical Operators Assignment Solutions
let countryLanguages = prompt(`Do you Speak English in your Country (true/false)`);
let countryPopulation = prompt(`What is the Population of your Country`);
let countryType = prompt(`Is your Country an island (true/false)`);

console.log(countryLanguages, countryPopulation, countryType);
if (countryLanguages == 'true' && Number(countryPopulation)>50000000 && countryType == 'false') {
    console.log("Sarah's all requirment of Country are satisfied");
} else {
    console.log("Sarah should look for other country");
}


// The Switch Statement Assignment Solutions
let language = prompt('Which Language do you Speak ?');
switch(language){
    case 'chinese':
    case 'mandarin': 
        console.log('Most No. of Native Speakers');
        break;
    case 'spanish': 
        console.log('2nd place in number of native speakers');
        break;
    case 'english': 
        console.log('3rd place in number of native speakers');
        break;
    case 'hindi': 
        console.log('4th place in number of native speakers');
        break;
    default: 
        console.log('Great language too :D');
        break;
}

// The Conditional (Ternary) Operator Assignment Solutions
let countryPopulation = prompt(`Your Country Population in millions ?`);
console.log(`Your Country population is ${countryPopulation>33 ? 'above' : 'below' } average`);
*/