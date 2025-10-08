var arr = [12,56,23,87,34,97,2,6,92,46];

var odd = 0;
var even = 0;

for(i=0 ; i<arr.length ; i++){
    if(arr[i] %2==0){
        even = even +1;
    }
    else{
        odd = odd+1;
    }
}

console.log("odd =",odd);
console.log("even =",even);