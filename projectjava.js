// let todo = [];
// let req = prompt("Enter Your Request")
// while(true){
//     if(req=="quit"){
//         console.log("todo quit");
//         break;
//     }
//     if(req=="list"){
//         console.log("__________");
//         for(let i=0;i<=todo.length;i++){
//             console.log(i,todo[i]);
//         }
//         console.log("__________");
//     }else if(req=="add"){
//         let task = prompt("Enter Your Task Please")
//         todo.push(task)
//         console.log("task added");
        
//     }else if(req=="delete"){
//         let idx =prompt("Enter Your Index Number")
//         todo.splice(idx,1)
//         console.log("task deleted");
        
//     }else{console.log("wrong request");
//     }
//     req = prompt("Enter Your Next Request")
// }



// let arr=[2,5,10,4,2,7,1,9]
// let largest= 0;
// for(let i=0;i<=arr.length;i++){
//     if(largest<arr[i]){
//         largest=arr[i];
//     }
// }
// console.log(largest);

//object literals
// const student = {
//     name:"sameer",
//     age:20,
//     Marks:70,
//     subject:["math","biology"]
// }
// let prop =age
// console.log(prop);

//object literals all key is change string ex null let const all string in object
// const obj ={
//     null:"e",
//     let:"d",
//     const:"c"
// }
// console.log(obj);

// const student = {
//         name:"sameer",
//         age:20,
//         Marks:70,
//         subject:["math","biology"]
//     }
// student.subject = ["CO","CF"]//change value of key
// student.gender = "male"//add value of object
// delete student.gender;//delete key in objects
// console.log(student);


//nested object
// const student ={
//     sameer:{
//         grage:"A",
//         Marks:70,
//         City:"Dhanaura"
//     },
//     sajid:{
//         grage:"A+",
//         Marks:75,
//         City:"Dhanaura"
//     },
//     zaid:{
//         grage:"B",
//         Marks:65,
//         City:"Dhanaura"
//     }
// }
// console.log(student.sameer.City = "phanderi");

// const student =[//array in objcect
//         {
//             grage:"A",
//             Marks:70,
//             City:"Dhanaura"
//         },
//         {
//             grage:"A+",
//             Marks:75,
//             City:"Dhanaura"
//         },
//         {
//             grage:"B",
//             Marks:65,
//             City:"Dhanaura"
//         }
// ]
//     console.log(student.Marks);

//math object
//properties
//Math.PI value 3.14
//Math.E value 2.71

//Math methods
//math.abs 
//math.pow(a,b) power multiply Ex 5*3 Re 15
//math.floor(n) near small values Ex 5.5 Re 5
//math.ceil(n) near largest values Ex 5.5 Re 6
//Math.random() 0,1 only 1 ko chorka sab value dega
// console.log(   Math.random())
// let number  = Math.floor(Math.random()*5)+20; ye only 20 se 25 tak hi value ko print karega
// console.log(number);

// let number = Math.floor(Math.random()*5)+2;
// console.log(number);

// let car = 
//     {
//         name:"bugati",
//         model:2024,
//         color:"blue"
//     }

// console.log(car.name);

// let personal = {
//     name:"samer",
//     age:20,
//     city:"phanderi",
// }
// console.log(personal.country = "india");
// console.log(personal.city="delhi");
// console.log(personal);

// function table(a){
//     for(let i=1;i<=10;i++){
//         console.log(i*a);
        
//     }
// }
// table(76)

//return keyword
// function sum(a,b){
//     return a+b; //return ke baad koi code exicute nahi hoti  
//     console.log("hello "); //not exicute value
    
// }
// let sim = sum(sum(4,3),5)
// console.log(sim);

// function sumto1(a){
//     let sum = 0;
//     for(let i=1;i<=a;i++){
//         sum+=i
        
//     }
//     return sum;
// }
// console.log(sumto1(4));

// let str = ["hi","helo","bye","how"];
// function concat(str){
//     let result;//not acces to result outside for function
//     for(let i=0;i<str.length;i++){
//         result += str[i]
//     }
//     return result
// }
// //not acces to result outside for function
// //Ex no error detect for already variable define
// // let result = 2 //globle scope varible all file acces this varible
// console.log(concat(str));

//block scope not acces variable on work let const
// {
//     let result;//block scope variable 
// }
// console.log(result);//not acces variable result 


//lexical scope
// function outerFunc(){
//     let x=6;
//     let y=7;
//     function innerFunc(){//not acces outside this function lexical scope
//         let a=10;
//         console.log(x);//acces outer function variable in innerfunc
        
//     }
//     console.log(a);//not acces innerfunc outer fuction
//     innerFunc()//bahar ki cheeze to ham andar use kar 
//     //sakte hai lekin andar ki cheeze bahar ham use nahi
//     // kar sakte lexical scope andar ki taraf exicute kar bahar ki taraf nahi
// }

// let greet = "hello"//global scope
// function oterGreet(){
//     let greet ="namaste"//function scope
//     console.log(greet);
//     function innerGreet(){
//         console.log(greet);//lexical scope
        
//     }
//     innerGreet()//lexical scope in function
// }
// console.log(greet)//global scope
// oterGreet()//funciton scope


//function without name call for variable
// let hello = function(){
//     console.log("hello");
// }
// hello()//call for variable name with()
// //change value 
// hello=function(){
//     console.log("namaste");//change function value for variable name 
// }
// hello()

//higher order function
// function multiGreet(func,count){
//     for(let i=1;i<=count;i++){
//         func()//call function 
//     }
// }
// let grret = function(){
//     console.log("hello"); 
// }
// multiGreet(grret,10)//exicute variable

// function oddorEvenFactory(request){
//     if(request=="odd"){
//         let odd = function(n){
//             console.log(i(n%2==0));
//         }
//         return odd;
//     }else if(request=="even"){
//         let even = function(n){
//             console.log(n%2==0);
//         }
//         return even;
//     }else{
//         console.log("warong request");
//     }
// }
// let request = "odd";

// let odd = function(n){
//  console.log(!(n%2==0));
//  }
// odd(5)
// let even = function(n){
//                 console.log((n%2==0));
//             }
//      even(4)       

// const calculator ={
//     num:55,
//     add:function(a,b){
//         return a+b;
//     },
//     sub:function(a,b){
//         return a-b;
//     },
//    multy:function(a,b){
//         return a*b;
//     },
//     divide:function(a,b){
//         return a+b;
//     }
// };
// console.log(calculator.add(4,5));
// const calculator = {
//     add(a,b){
//         return a+b;
//     },
//     sub(a,b){
//         return a-b
//     }
// }
// console.log(calculator.sub(4,8));

// let arr = [8,5,4,1]
// let num = 5;
// function getElements(arr,num){
//     for(let i=0;i<arr.length;i++){
//         if(arr[i]>num){
//             console.log(arr[i]);
            
//         }
//     }
// }
// getElements(arr,num)
// let start = 100;
// let end = 200;
// function generateRandom(start, end) {
//     let diff = end -start;
//     return Math.floor(Math.random() * diff) + start;}
//     console.log(diff);
// const student = {
//     name:"sameer",
//     age:20,
//     eng:95,
//     math:93,
//     phy:97,
//     getAvg(){
//         console.log(this);
//         let avg = (this.eng+this.math+this.phy);
//         console.log(`${this.name} got avg you marks`);
//     }
// }   
// console.log(this.name)

// const person = {
//     name: "Alice",
//     greet: function() {
//       console.log(this.name);//object me ham 2 tarah se value acces kar sakte hai 
//       //person.name (2)this keyword se this.name
//     }
//   };
  
//   person.greet(); // Output: Hello, my name is Alice

// console.log("hello");

// try{// if else similar method 
//     console.log(a);//jab hame shak ho error aane ka to try and catch use karte hai
// }catch{console.log("a is defined");}//isse error ka pta chalta or code aage run hone lagta hai bich me nahi rukta hai 
// console.log("hello2");
// console.log("hello2");
// const greet =(name) => {
//     console.log(`Hello, ${name}!`);
//   };
  
//   greet("Alice"); // Output: Hello, Alice!

//   let stu = (name)=>{//arrow function se function keyword ki jarurat nahi padti hai
//     console.log(`${name}`);//
    
//   }
//   stu("samer")
// let func = (a,b)=>(//() and value ex a+b return keyword bypass
//     a+b//return keyword ko by karne ke liey => arrow method and () jaruri hai 
// )
// console.log(func(4,5));
//shorhand method =>()
// const mul = (a,b)=> a*b
// console.log(mul(7,8));
// let exa = a => //single argument me () optional hote hai
// lekin khali arguments me compalsory hote hai

// //setTimeOut function
// console.log("hello");
// setTimeout(()=>{
//     console.log("sameer");
// },4000);//time only mili secound me leta hai ye function
// console.log("malik");//timeout function ki wajah se code rukta nahi hai

// let id = console.log("hello");
// setInterval(()=>{//setInterval function 2 second print hoga fir 2 secound ke bad print hoga 
//     console.log("sameer");
// },2000)
// clearInterval(id)////stop karne ke liye terminal me ye likhna padta hai
//or variable name yani id 
// let intervalId = setInterval(() => {
//     console.log("Interval is running");
// }, 1000);

// // After 5 seconds, clear the interval
// setTimeout(() => {
//     clearInterval(intervalId);
// }, 5000);//stop interval after 5 sec
//this function with arrow function
// const student ={
//     name:"sameer",
//     marks:52,
//     prop:this,//globle scope puri file me kahi bhi acces karo
//     getName:function(){
//         console.log(this);
//         return this.name//ye this student ko present kar rha hai 
//     },
//     getMarks:()=>{
//         console.log(this);//perent' scope --> window
//         return this.marks//ye ab lexical scope me aa gya ye perent ko present krata hai 
//     }
// }
// console.log(student.getMarks(this.name));
//normal function ke this hota hai uska object jese student tha 
//or arrow function ke liye this use hota hai perents call ke liye yani lexical scope 
// jese ham outerfunction ko to normal object manege or innerfunction ko ham lexical scope
// const person = {
//     name: 'Alice',
//     greet: function() {
//       console.log(`Hello, my name is ${this.name}`);
  
//       // Traditional function
//       function innerFunction() {
//         console.log(`Inner function: ${this.name}`);
//       }
//       innerFunction();
  
//       // Arrow function
//       const arrowFunction = () => {
//         console.log(`Arrow function: ${this.name}`);
//       };
//       arrowFunction();
//     }
//   };
//   person.greet();

// let id =setInterval(()=>{
//     console.log("hello world");
// },2000)
// setTimeout(()=>{
//     clearInterval(id);
//     console.log("run out");  
// },10000)

//forEach method
// let arr = [1,2,3,4,5];
// let print = function (el){
//     console.log(el);
// }
// arr.forEach(print)
// method 2
// let arr = [1,2,3,4,5];
// arr.forEach(function (el){
//     console.log(el);
// })
//arrow method
// let arr = [1,2,3,4,5];
// let print = n => {
//     console.log(n);
// }
// arr.forEach(print)

//object forEach method
// let arr = [
//     {
//         name:"samer",
//         marks:95,
//     },
//     {
//         name:"sajid",
//         marks:94,
//     },
//     {
//         name:"zaid",
//         marks:92,
//     },
// ];
// // console.log(arr.marks); acces nahi kar sakte 
// arr.forEach((student) => {
//     console.log(student.name);
// })

//map method
// let num = [1,2,3,4,5];
// let Double = num.map((el) => (
//     el*2
// ));
// console.log(Double);

// let upper = ["sameer"]
// let newarr = upper.map((el) => {
//    return el = "khan"//change arr value for newarr
// }) ye basically ek nya array bnata hai or us par aap ke mutabik operations karta hai lekin 
//vo apna ek nya array banata hai use replace nahi karta 
// console.log(newarr);
// let arr = [1,2,3]
// let arr2 = arr.map((el) => {
//     return el*2
// })
// console.log(arr2);

//filter method 
// let nums= [1,2,3,4,5,6,7,8,9,10,11];
// let ans = nums.filter((el) => {//filter hame hame order ke mutabik filter karke deta hai
//     return el <10;//10 tak sari value print ho gai ye filter method
//     // return el %2 !=0;//ye code even or odd ko cheack ke liye hota hai bas odd ke liye != ye lagta hai
// })//el %2 ==0; even and el %2 !=0; even ke 
// console.log(ans);

//every method ye boolean ke jesa call karta hai 
// let ever = [2,4,8].every((el) => el%2==0);//mene sare even numbers likhe hai to ye
// // true kare or me odd number bhi add kar du to ye false karega
// console.log(ever);//isne true diya mene even ke liye function banaya tha odd ke liye banata false deta 

//some method same every ke jesa hai bas every and logic ke jesa chalta hai some or logic ke jesa
// let som = [1,3,5,7].some((el) => el%2!=0);
// console.log(som);//bilkul same every ke jesa kam karta hai

//reduce method me do arguments dena jaruri hai
// let nums = [1,2,3,4]
// let final = nums.reduce((res,el) => (res+el))
// console.log(final);//reduce karta hai do value ke sath koi operation perform karta hai 
// let nums = [1,2,3,4]
// let final = nums.reduce((res,el) => (res*el))
// console.log(final);
//reduce use largest  value cheak
// let arr=[1,23,4,47,7,8,0]
// let max =arr.reduce((max,el) =>{
//     if(max<el){// agar minum value nikalni ho to if(mar>el){} bilkul same rahega bas greter than ko chor kar
//         return el
//     }else{return max}
// });
// console.log(max);

//defoult perameters
// function sum(a,b=2){//defoult perameters last value ko assign karta hai 
// return a+b
// }
// console.log(sum(1));//ans 3 aayga agar ham b ki value likh dete hai to vo hi kam karegi defoult nahi Ex console.log(sum(1,4)),ans 5
// //agar ham b ki value nahi dete to pehle assign ki hui value kam karegi

//spread ...
// let arr= [1,2,3,4,5,6,7,8,9,1,0,15,4,5,5,8,4,]//hame ise bina array ke print karna hai
// console.log(...arr);//spread ki madad se ye ho paya yani three dot ...
// console.log(1,2,3,4,5,6,7,8,9,1,0,15,4,5,5,8,4);//ye esi bhi ho sakta
// //ye string par bhi kam karta hai
// console.log(..."sameer");//letter sapace ke sath aa jayge
// let arr =[1,2,3,4,]
// let  newar= [...arr]//spread se ham arrey ke rup me print kar sakte hai
// console.log(newar);
// console.log(Math.min(1,2,5,3,4,8));//min ke liye
// console.log(Math.max(1,2,5,3,4,8));//max ke liye

//rest method
// function sum(...argu){//this rest method 
//     return argu.reduce((sum,el) => sum+el)
// }
// console.log(sum(4,5));

//destructuring
// let names = ["tony","bruce","peter","xyz","pyq"]
// let [winner,runner,...other]=names;//ye array nahi indexing variables hai
// console.log(winner);//ye array me variable hai
//or jo string hai use ham ek varible me store kar sakte hai spread ki madad se ... dot
// console.log(other);//hamne ise ek hi varible me assign kar diya spread or destruturing se

// const student = {
//         name:"sameer",
//         age:20,
//         Marks:70,
//         subject:["math","biology"]
//     }
// let{age:assign} = student;
// console.log(assign);//age key value user key me assign kar di

// let numbers= [2,4,6,8,-2,-4]
// console.log(numbers.map((number) => number) +5);

// let newp = document.createElement('p')
// newp.innerText="hi i am learning js"
// let body = document.querySelector('#text')
// body.appendChild(newp)
// let btn = document.createElement('button')
// btn.innerText="click me"
// body.appendChild(btn)//jod deta hai 
// newp.append(" this is new text ")add end
// newp.prepend("this is pure new text ")//add first
//removeChild remove kar deta hai
// body.removeChild(btn)

//color changer
// let btn = document.querySelector("button");
// btn.addEventListener("click",() =>{
// let h3 = document.querySelector("h3");
// let randomColor = getRandom();
// h3.innerText =randomColor;

// let div = document.querySelector("div");
// div.style.backgroundColor = randomColor;
// })
// function getRandom(){
//     let red = Math.floor(Math.random()*255);
//     let green = Math.floor(Math.random()*255);
//     let blue = Math.floor(Math.random()*255);
//     let color =`rgb(${red},${green},${blue})`;
//     return color;
// }

//dom me events this ka use target jis apr ham a event chalana chahte hai uske 
// liye use hota hai 
//  let btn = document.querySelector("button");
// btn.addEventListener("click",function () {
//     console.dir(this.innerText);
//     this.style.backgroundColor = "red"    
// })

//form ke data ko lena console me ya screen par
// let form = document.querySelector("form")
// form.addEventListener("submit",function (even) {
// even.preventDefault();
// let user = document.querySelector("#input1")//2nd method this.elements[0]
// let pass = document.querySelector("#input2")//this.elements[1]
// console.log(user.value);
// console.log(pass.value);
// alert(`hi ${user.value}, your pass ${pass.value}`)
// })
//ye sabhi letter and character ko point karta hai
// let inp = document.querySelector("#input");
// let  p = document.querySelector("p");
// inp.addEventListener("input",function () {
//     console.log(inp.value);
//     p.innerText = inp.value;
// })
//li.addEventListener("click",fuction (event){
//event.stopPropagation()//on li par ho work karega
//console.log("li was clicked")})


//to do list
// let inputBox = document.getElementById('input-box');
// let addBtn = document.getElementById('add-btn');
// let taskList = document.getElementById('task-list');

// addBtn.addEventListener('click', () => {
//         let li = document.createElement('li');
//         li.textContent = inputBox.value;
//         inputBox.appendChild(li);
//         inputBox.value = '';

//         //create delete button
//         let deltebtn = document.createElement("button")
//         deltebtn.textContent = "delete"
//         deltebtn.classList.add("delte-btn")
//         deltebtn.addEventListener("click",()=>{
//             taskList.removeChild(li)
//         })
//         //listner delete button
//         li.appendChild(deltebtn)
//     }

// );

// let arr = [1,2,3,4,5];
// arr.forEach(function (el){
//     console.log(el)
// })

//eval use total math operations
// let  eva = "2*578";
// console.log(eval(eva));
//Array.from() method convert to any value array
// let str = "welcome"
// console.log(Array.from(str));

//calculato 
// let input = document.getElementById("inputBox")
// let buttons = document.querySelectorAll("button")

// let buttonsArr = Array.from(buttons);
// let string ='';
// buttonsArr.forEach(function(btn){
//     btn.addEventListener('click',function(event){
//        if(event.target.innerText =='DEL'){
//         string = string.substring(0, string.length-1);
//         input.value = string

//        }else if(event.target.innerText == 'AC'){
//         string = '';
//         input.value = string
//        }else if(event.target.innerText == '='){
//         string = eval(string);
//         input.value = string;
//        }
//        else{string += event.target.innerText;
//         input.value = string}
//     }) 
// })
//digital clock
// setInterval(myfunc,1000)
// function myfunc(){
//     let date = new Date();
//     let time = date.toLocaleTimeString();
//     document.getElementById("time").innerText = time
// }

//callback hell method
// let h1 = document.querySelector('h1')

// function changeColor(color,delay,nextcolor){
//     setTimeout(() => {
//         h1.style.color = color;
//         if(nextcolor) nextcolor();
//     }, delay);
// }
// changeColor("red",1000,()=>{
//     changeColor("orange",1000,()=>{
//         changeColor('blue',1000,()=>{
//             changeColor('yellow',1000);
//         });
//     })
// })
//bilkul same process hai lekin ye upar hell hai
//ye promise method hai
// let h1 = document.querySelector('h1')

// function changeColor(color,delay){
// return new Promise((resove,reject)=>{
//     setTimeout(() => {
//         h1.style.color = color;
//         resove("color changed")
//     }, delay);}
// )}
// changeColor("red",1000)
// .then(()=>{
//     console.log("red color was completed");
//     return changeColor("orange",1000);
// })
// .then(()=>{
//     console.log("orange color was completed");
//     return changeColor("green",1000);
// })
// .then(()=>{
//     console.log("green color was completed");
//     return changeColor("blue",1000);
// })
// .then(()=>{
//     console.log("blue color was completed");  
// })


//callback hell se bachne ke liye same exicution process ke sath 
//promise ka use karke easy readebliy and understanding code
// function saveDB(data) {
//     return new Promise((resolve, reject) => {
//       let internetSpeed = Math.floor(Math.random() * 10) + 1;
//       if (internetSpeed > 4) {
//         resolve("success: data saved");
//       } else {
//         reject("fail: weak connection");
//       }
//     });
//   }
//   saveDB("sameer malik")
//     .then(() => {
//       console.log("data1 saved");
//       return saveDB("hello world");
//     })
//     .then(() => {
//       console.log("data2 saved");
//       return saveDB("sameer");
//     })
//     .then(() => {
//       console.log("data3 saved");
//     })
//     .catch(() => {
//       console.log("Promise was rejected:");
//     });


//promise method
// function saveDB(data){
//     return new Promise((resolve,reject)=>{
//     let internetspeed = Math.floor(Math.random()*10)+1;
//     if(internetspeed>4){
//      resolve("succes: data saved")
//     }else{
//       reject("fail: weak connection")
//     }
// })
// }
// saveDB("sameer malik")
// .then(()=>{
//     console.log("promise was resolved");
// })
// .catch(()=>{
//     console.log("promise was rejected");
    
// })

//async keyword promise ko return karta hai isme ham .then .catch ko use kar sakte hai
// async function greet(){
//     throw "404 page not found"
//     return "hello"
// }
// greet()
// .then((result)=>{
//     console.log("promise was resolved");
//     console.log("result was: ",result);
    
// })
// .catch((err)=>{
//     console.log("promise was rejected with",err);
// })

// let demo = async ()=>{
//     return 5;
// }

//await keyword ko ham sirf async keyword me use kar sakte hai
//await keyword async keyword ko wait karata jo value dali hai
// let h1 = document.querySelector("h1")
// function changeColor(color,delay){
//     return new Promise((resove,reject)=>{
//         setTimeout(() => {
//             h1.style.color = color;
//             console.log(`color changed to ${color}`);
        
//             resove("color changed")
//         }, delay);
//     }
//     )}
// async function demo(){
//      await changeColor("red",1000)
//     await changeColor("orange",1000)
//     await changeColor("green",1000)
//     changeColor("blue",1000)
// }
// console.log(demo());

//handling rejection ke liye ham tyr catch ka use karte hai 
// let h1 = document.querySelector("h1")
// function changeColor(color,delay){
//     return new Promise((resove,reject)=>{
//         setTimeout(() => {
//             let num = Math.floor(Math.random()*5)+1;
//             if(num>3){
//                 reject("promise rejected")
//             }
//             h1.style.color = color;
//             console.log(`color changed to ${color}`);
        
//             resove("color changed")
//         }, delay);
//     }
//     )}
// async function demo(){
//     try{
//      await changeColor("red",1000)
//     await changeColor("orange",1000)
//     await changeColor("green",1000)
//     changeColor("blue",1000)
//     }catch(err){
//         console.log("error cought");
//         console.log(err);
//     }
// }
// console.log(demo());

//API application programming interface
//ham api ko use kese kar sakte hai
//ham api ko request bhejenge fir api server ko request bhejenge ex waiter ki jesa sajh lo
//ham jayadatar web API ko use karte hai web api http server se connect hai
//API hame html css js me data provide nahi karti api ka data JSON javaScript Object Notation ke form me data provide karti hai
//API me keypassword bhi hote hai kuch api paid bhi hoti hai kuch api me ye dono nahi hote unhe ham free api bolte hai
//biscally API ek link ke jesa hota hai api ko request ham api ko js se bhejenge
//acces json data
// let jsonRes ='/articles?include=author&fields[articles]=title,body&fields[people]=name'
// let validRex = JSON.parse(jsonRes);//parse kam hai ek data ke format ko change kar deta 
// console.log(validRex.fact);
//js ke code ko json me convert karna
// let student = {
//     name:"sameer",
//     marks:95,
// };
// console.log(JSON.stringify(student));

//API ke URL ko request kese bhejte hai
//iske 2 method hai
//hoppscotch postman
//api ke request or response dene process ko Asynchronous hota hai
//status code
//200 OK 404 not found 400 bad request 500 internal server error
//https://www.google.com/search?q=harry+porter

//API ko acces and request or readaiblity or json se js me this example
// let url = "https://catfact.ninja/fact2";

// async function getFacts(){
//     try{
//     let res = await fetch(url);
//     let data = await res.json();
//     console.log(data.fact);
//     }
//     catch(e){
//         // console.log("error-",e);
        
//     }
//     console.log('bye');
    
// }
// .then((res)=>{
// console.log(res);
// return res.json()
// })
// .then((data)=>{
//     console.log(data.fact);
// })
// .catch((err)=>{
//     console.log("ERROR - ",err);
// })
//Axios laibary to make HTTP requests
//axios me hame parse ki jarurat nahi padti ye direct josn se jo hame chahiye vo karke ke deta hai
// let url = "https://catfact.ninja/fact2";

// async function getFacts(){
//     try{
//     let res = await axios.get(url);
//     console.log(data.fact.data);
//     }
//     catch(e){
//         console.log("error-",e);
//     }
// }

//API image work
// let btn=document.querySelector("button")
// let url2 = "https://dog.ceo/api/breeds/image/random"
// btn.addEventListener("click",async ()=>{
//     let img = await getimage();
//     // console.log(img);
//     let ima = document.querySelector("#img")
//     ima.setAttribute("src",img)
// //     let fact = await getFacts();
// //    console.log(fact);
// //    let p = document.getElementById('fact');
// //    p.innerText = fact;
// })
// // let url = "https://official-joke-api.appspot.com/random_joke"

// async function getimage(){
//     try{
//     let res = await axios.get(url2);
//     return res.data.message
//     }
//     catch(e){
//         console.log("error-",e);
//         return "no image found"
//     }
// }
//api ki khud ki ek limit hoti limit cross api not work or ban account not loop use for api
//html code
// <!DOCTYPE html>
// <html lang="en">
// <head>
//   <meta charset="UTF-8">
//   <meta name="viewport" content="width=device-width, initial-scale=1.0">
//   <title>Promises</title>
//   <link rel="stylesheet" href="style.css">
// </head>
// <body>
// <h1>show</h1>
// <button>Show new fact</button>
// <img id="img">
// <script src="https://cdn.jsdelivr.net/npm/axios@1.6.7/dist/axios.min.js"></script>
//   <script src="index.js"></script>
// </body>
// </html>

//let btn=document.querySelector("button")
// btn.addEventListener("click",async ()=>{
//     let fact = await getFacts();
//    console.log(fact);
//    let p = document.getElementById('fact');
//    p.innerText = fact;
// })
// let url = "https://catfact.ninja/fact2";

// async function getFacts(){
//     try{
//     let res = await axios.get(url);
//     return res.data.fact
//     }
//     catch(e){
//         console.log("error-",e);
//         return "no fact found"
//     }
// }

//kisi api me html format me data aata hai to headers ke use se ise json me kar sakte hai
let btn = document.querySelector('button')
// btn.addEventListener('click',async ()=>{
//     let joke = await getJokes()
//     let p = document.getElementById('joke');
//     p.innerText = joke
// })


// let url =   "https://icanhazdadjoke.com/"

// async function getJokes(){
//     try{
//         const config ={headers:{Accept:"application/json"}};
//         let res = await axios.get(url,config);
//         return res.data.joke
//     }catch(err){
//         console.log(err);
//         return "joke not found"
//     }
// }

//search colleges api work
// let url = "http://universities.hipolabs.com/search?name=";
// let btn = document.querySelector("button");

// btn. addEventListener("click", async () => {
// let country = document.querySelector("input").value;
// console. log (country) ;
// let colArr = await getColleges(country);
// show(colArr);
// });
// function show(colArr) {
// let list = document.querySelector("#list");
// list.innerText = "";
// for (col of colArr) {
//     console.log(col.name);
    
// let li = document. createElement("li") ;
// li.innerText = col.name;
// list. appendChild(li);
// }
// }
// async function getColleges(country){
//     try{
//         let res = await axios.get(url+country)
//         return res.data;
//     }catch(e){
//         console.log("error : ",e);
//         return []
//     }
// }

//weather app
// let API_key = "d57d07049944a25a3ee286f80f452484";
// let city = document.getElementById("city");
// let temp = document.getElementById("temp");
// let image = document.getElementById("img");
// let type = document.getElementById("type");
// let input = document.getElementById("inp");

// let API =" https://api.openweathermap.org/data/2.5/weather?q={city name}&appid={API key}";

// const data = async function(search){
//     let getData = await fetch(`https://api.openweathermap.org/data/2.5/weather?q=${search}&appid=${API_key}&units=metric`)
//     let jsonData =await getData.json();
//     console.log(getData);
     
//     console.log(jsonData);
//     if(jsonData.cod == 400){
//         alert("Please Enter Location")
//         image.src="error1.png"
//         temp.innerHTML=""
//     type.innerHTML=""
//     }
//     if(jsonData.cod == 404){
//         alert("Not Found");
//         image.src="file:///C:/Users/Administrator/Downloads/error2.png";
//         temp.innerHTML=""
//     type.innerHTML=""
//     }

    
//     city.innerHTML=search;
//     temp.innerHTML=Math.floor(jsonData.main.temp)+"°C";
//     type.innerHTML=jsonData.weather[0].main;
   
//     if(type.innerHTML == "Clouds"){
//         image.src="file:///C:/Users/Administrator/Downloads/clouds%20(1).png"
//     }else if(type.innerHTML == "Haze"){
//         image.src="file:///C:/Users/Administrator/Downloads/haze.png"
//     }
//     else if(type.innerHTML == "Rain"){
//         image.src="file:///C:/Users/Administrator/Downloads/rain.png"
//     }
//     else if(type.innerHTML == "Snow"){
//         image.src="file:///C:/Users/Administrator/Downloads/snow.jpg"
//     }
//     else if(type.innerHTML == "Clear"){
//         image.src="file:///C:/Users/Administrator/Downloads/clears.png"
//     }
//     else if(type.innerHTML == "Strom"){
//         image.src="file:///C:/Users/Administrator/Downloads/strom.png"
//     }else{
//         image.src="file:///C:/Users/Administrator/Downloads/clouds.png"

//     }
    
//     input.value=""

// }

// function myFun(){
//  search = input.value;
// data(search)
// }
//weather my self api key for help
const API_KEY = `7dc05f50b1c3eb62cd68da6499d37fc3`
const form = document.querySelector("form")
const search = document.querySelector("#search")
const weather = document.querySelector("#weather")
// const API = `https://api.openweathermap.org/data/2.5/weather?
//     // q=${city}&appid=${API_KEY}&units=metric`
// const IMG_URL = `https: //openweathermap.org/img/wn/${data.weather[0].icon}@2x.png`
// const getWeather = async (city)=>{
//     weather.innerHTML = "LOADING..."
//     const url = `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${API_KEY}&units=metric`
//     const response = await fetch(url);
//     const data = await response.json()
//     showeather(data);
// }
// const showeather = (data)=>{{
//     if(data.cod == "404"){
//         weather.innerHTML = "city not found"
//     }
// weather.innerHTML = `
// <div>
//         <img src="https://openweathermap.org/img/wn/${data.weather[0].icon}@2x.png">
// </div>
// </div>
//     <div>
//         <h2>${data.main.temp}c</h2>
//         <h4>${data.weather[0].main}</h4>
//       </div>
//     </div>
// `
// }}
// form.addEventListener('submit',(e)=>{{
//     getWeather(search.value);
//     e.preventDefault();
// }})

//Terminal
//command line : jisme command likhi jati hai
//console : ek command line jisme interface used to work your computer
//shell : hota hai terminal ke andar jisme program run hota hai jese atm to tarminal or uske and jo process hai vo shell
//Bash: A popular shell on mac os/linux git bash ke bina window me terminal nahi chalta 
//z-shell : mac me pehle se hi install hota hai
// console.log(3+true);// javascript true ko 1 or false ko 0 samjhta hai
