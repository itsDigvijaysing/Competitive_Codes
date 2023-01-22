// Finding the Leap year is js.

var a = 2022;
debugger;
if (a % 4 == 0) {
  if (a % 100 == 0) {
    if (a % 400 == 0) {
      console.log("It's Leap Year");
    } else {
      console.log("It's Not Leap Year");
    }
  } else {
    console.log("It's Leap Year");
  }
} else {
  console.log("It's Not Leap Year");
}
