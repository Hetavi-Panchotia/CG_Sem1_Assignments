// var q1 = [10,20,30,40,50]
// q1.splice(2,1)
// console.log(q1)


// var q2 = [1,2,3,4,5]
// console.log(q2.slice(1,4))


// var q3 = [1,[2,3],[4,[5,6]]]
// console.log(q3.flat().flat().flat())


// var q4 = ["apple" , "banana" , "cherry"]
// console.log(q4.length)


// var q5 = ['apple' , 'banana']
// q5.push('grape')
// console.log(q5)


// var q6 = [100,200,300]
// q6.shift()
// console.log(q6)


// var q7 = [1,2,3]
// q6.splice(0,0,'start')
// console.log(q6)


// var q8 = [5,6,7,8]
// q8.pop()
// console.log(q8)


// var q9 = [10,20,30,40,50]
// var exists = true;
// for (i of q9){
//     if(i==50){
//         exists=true;
//         break
//     }
//     else{
//         exists=false;
//     }
// }
// if(exists=true) console.log("exists")


// var q10 = ['apple', 'banana' , 'cherry' , 'date']
// var c=0;
// for (i of q10){
//     if (i =="cherry"){
//         break
//     }
//     else{c++}
// }
// console.log(c)


// var q11 = [1,2,3,4]
// var newarr=[];
// for (i=0 ; i<q11.length ; i++){
//     var sliced = q11.slice(i,i+1)
//     newarr.push(sliced[0])
// }
// console.log(newarr)


// var q12 = [10,20,30,40]
// console.log(q12.reverse())


// var q13_1 = [1,2]
// var q13_2 = [3,4,5]
// console.log(q13_1.concat(q13_2))


var q14 = [0,0,0,0]
for(i =0 ; i<q14.length ; i++){
    // q14.slice(i,i+1)
    q14.slice(i,i+1,7)
}
console.log(q14)