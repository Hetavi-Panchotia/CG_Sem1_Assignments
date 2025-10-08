var arr = [-1,0,4,0,-3,-4,87,3,67,0];

var n=0;
var p=0;
var z=0;

for(i=0 ; i<arr.length ; i++){
    if(arr[i]>0){
        p=p+1;
    }
    else if(arr[i]<0){
        n=n+1;
    }
    else{
        z=z+1;
    }
}

console.log("Negative =",n)
console.log("Positive =",p)
console.log("Zero =",z)