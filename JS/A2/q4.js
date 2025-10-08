var arr = [12,56,23,87,34,97,2,6,93,46];

var sum =0;
var max=arr[0];

for(i=0 ; i<arr.length ; i++){
    if(max < arr[i]){
        max=arr[i];
    }
}

console.log("The max in array is" ,max);