var s1=80;
var s2=70;
var s3=90;
var s4=85;
var s5=95;

var t=s1+s2+s3+s4+s5;
var per=(t/500)*100;

if(per>=90){
    console.log("Grade A");
}
else if(per>=80&&per<90){
    console.log("Grade B");
}
else if(per>=70&&per<80){
    console.log("Grade C");
}
else if(per>=60&&per<70){
    console.log("Grade D");
}
else{
    console.log("Fail");
}
