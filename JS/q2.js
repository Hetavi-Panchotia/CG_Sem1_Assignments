var unit = 17; 
var bill = 0;

if (unit <= 100) {
  bill = unit * 5;
} 
else if (unit <= 300) {
  bill = (100 * 5) + ((unit - 100) * 7);
} 
else {
  bill = (100 * 5) + (200 * 7) + ((unit - 300) * 10);
}

console.log("Total  Bill " + bill);