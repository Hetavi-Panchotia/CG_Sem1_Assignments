var arr = [12,56,23,87,34,97,2,6,93,46];

var sum =0;
var min = arr[0];

for(i=0 ; i<arr.length ; i++){
    if(min > arr[i]){
        min=arr[i];
    }
}

console.log("The min in array is" ,min);