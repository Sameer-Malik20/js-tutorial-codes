# include<stdio.h>
// print variable integers Ex.printf("age is %d",age); 
// real numbers value variable printf("value of pi is %f",pi) 
// characters value variable printf("star looks like this %c",star);
//how to user input in C
// int main(){
//      int age;
//      printf("Enter Age: ");
//      scanf("%d",&age);
//      printf("age is : %d",age);
//     return 0;
// }
//user input and sum
// int main(){
//     int a, b;
//     printf("enter a ");
//     scanf("%d",&a);

//     printf("enter b ");
//     scanf("%d",&b);

    
//     printf("Total Value %d",a+b);
//     return 0;
// }

// program 1 area of square
// int main(){
//     int side;
//     printf("enter side");
//     scanf("%f",&side);
//     printf("area is : %f",side * side);
//     return 0;
// }

//redius calculate
// int main(){
//     float redius;
//     printf("enter redius");
//     scanf("%f",&redius);
//     printf("area is : %f",3.14 * redius* redius);
//     return 0;
// }

//CHAPTER TWO C PROGRAMMING

// valid statements
// int main(){
    // int a  = 22;
    // int b = a;
    // int c = b * 6;
    // int d = 1,e;


//     int oldAge = 22;
//     int newAge = oldAge + years;// invalid instatment
//     int years = 2;
// }
// #include<math.h> // math some claculation
// int main(){
//   printf("%d",8%10); //modulo method the divide value
//   return 0;  // modulo method not work float value
// }       // nagetive value put than nagative remender 

// int main(){
//     int a =(int) 1.999999; //c in order to float vlaue to intger value they are remove last float part in code
//     printf("%d",a);
// }

// int main(){
//     // int a = 5*2 -3 * 2; mianas method 
//     // int a = 5*2 / 3*2; divide method
//     // int a = 5*(2/2)*3;
//     int a= 5+2 / 2*3;
//     printf("%d",a);
    //     return 0;}
// int main(){

//     // LOGICAL OPERATOER LOGICAL GATES
//     // printf("%d", 4==4); //ture value print result 1
//     // printf("%d", 4==3);  //false value print result 0
//     // printf("%d",4>3 && 5>6); //AND && logical operator working two value true then result true but one value true or second vlaue fasle then false
//     // printf("%d",5>4 || 5>4); //OR || logical operator one value ture and second value false then result ture all value true result true all value false result false
//     printf("%d", !(6>5)); // NOT !() logical operator value is true result false value is false result true
//     return 0;
// }

// int main(){
//     int a = 1;
//     int b = 4;
//     a += b; //shorhand method 
//     printf("%d",a); //a = a-b assignment operator  = , +=, -=, *=, /=, %=
// }

//question problem solve 1
// int main(){
//     int x;
//     printf("enter a number: ");
//     scanf("%d", &x);
//     printf("%d",x % 2 ==0);
// }

//are the following valid or not?
// int main(){
    // int a = 8^8; //valid
    // int x; int y = x; valid
    // int x, int y = x; invalid one line break rule
    // char stars = '**';//invalid multiple character error 
    // }

// int main(){
//     int isMunday = 0;
//     int isRaining = 1;
//     printf("%d",isMunday || isRaining);// use OR logical operator
// }
// int main(){
//     int x;
//     printf("Enter a Number");
//     scanf("%d", &x);
//     printf("%d",x>9 && x<100);
// }

// practice set 1
// int main(){
//     int x;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     printf("%d",x>99 && x<1000);
// }

// IF ELSE STATEMENT 
// int main(){
//     int age;
//     printf("enter age: ");
//     scanf("%d", &age);
//     if(age>18){
//         printf("adult \n");
//         printf("they can vote \n");
//     }
//     else{
//         printf("your not adult");
//     }
// }
// diffrent condition operator
//ternary operator single line program then try this ternary oparator
// int main(){
//     int age;
//     printf("enter age: ");
//     scanf("%d",&age);
//     age >= 18 ? printf("adult \n") : printf("not adult\n");
// }
//swicth conditional operators
// main(){
//     int day; //1-min; 2-tues; 3-wed
//     printf("enter day(1-7) : ");
//     scanf("%d", &day);
//     switch(day){
//         case 1 : printf("monday\n");
//                  break;
//         case 2 : printf("tuesday\n");
//                  break;
//         case 3 : printf("wednasday\n");
//                  break;
//         case 4 : printf("thusday\n");
//                  break;
//         case 5 : printf("friday\n");
//                  break;
//         case 6 : printf("sturday\n");
//                  break;
//         case 7 : printf("sunday\n");
//                  break;
//         default : printf("not valid day\n");
//     }
//     return 0;
// }


// # include<stdio.h>
// int main(){
//     int marks;
//     printf("enter number(0-100) : ");
//     scanf("%d", &marks);

//     if(marks <=30){
//         printf("fail");
//     } else if(marks >30 && marks <=100){
//         printf("pass");
//     } else {
//         printf("wrong marks");
//     }
//     return 0;
// }

// int main(){
//     int marks;
//     printf("enter number(0-100): ");
//     scanf("%d",&marks);
//     marks <= 30 ? printf("Fail \n") : printf("Pass");
//     return 0;
// }

// int main(){
//     int marks;
//     printf("enter marks(0-100)");
//     scanf("%d",&marks);

//     if(marks <30){
//         printf("c\n");
//     }
//     else if(marks >=30 && marks <70){
//        printf("b"); 
//     }
//     else if (marks >=70 && marks <90){
//         printf("a");
//     }
//     else{
//         printf("A+");
//     }
//     return 0;
// }

// main(){
//     int x = 2;
//     if(x=1){//value change x=1 print 1
//         printf("x is aquel to 1");
//     }else{
//         printf("x is not equal to 1");
//     }
// }

// int mai(){
//     char ch;
//     printf("enter character: ");
//     scanf("%d",&ch);
//     if(ch >= 'a' && ch <= 'Z'){
//         printf(
//             "upper case"
//         );
//         else if(ch>= 'a' && ch<= "Z"){
//             printf("lower case");
//         }
//         else{
//             printf("not english letter");
//         }
//     }    
// }

//LOOPS CONTROL INSTRUCTION
// int main(){
//     for(int i=1; i<=10; i+=1){
//         printf("%d\n",i);
//     }
// }
// i++ increment operator
// int main(){
//     int i=1;
//    printf("%d\n",i++);
// }
//same cheez hai dicrement oparator ke liye jese --i or i-- to value ko minus karta same conceopt hai

// ++1 post increment operator
// int main(){
//     int i=1;
//    printf("%d\n",++i);
// }

//dicrement or post dicrement method same only -+ diffrence
// int main(){
//     int i=1;
//    printf("%d\n",--i);
//    printf("%d\n",i);
// }

//floating method in loop
// int main(){
//     for(float i=1.0; i<=5.0; i++){
//         printf("%f\n",i);
//     }
// }

//character method in loop
// int main(){
//     for(char ch='a'; ch<='z';ch++){
//         printf("%c\n",ch);
//     }
// }

//infinite loop
// int main(){
//     for(int i=1;;i++){
//         printf("hello wrold\n");
//     }
// }

// WHILE LOOPS
// int main(){
//     int i=1;
//     while(i<=5){
//         printf("hello world\n");
//         i++;
//     }
// }
//user input help for loop
// int main(){
//     int n;
//     printf("enter number: ");
//     scanf("%d",&n);
//     int i=+0;
//     for(i=1; i<=n; i++){
//         printf("%d\n",i);
//     }
// }

//do while loop
// int main(){
//     int i=1;
//     do{
//         printf("%d\n",i);
//         i++;

//     }while(i<=5);
// }

//practice set 
// #include <stdio.h>
// int main(){
// int n;
// printf("enter a number: ");
// scanf("%d",&n);
// int fact = 1;
// for(int i=1; i<=n;i++){
//   fact = fact * i;
// }
// printf("%d\n",fact);
// }

//practice set reverse table print
// #include <stdio.h>
// int main(){
//   int n;
//   printf("enter a number: ");
//   scanf("%d",&n);
//  for(int i=10;i>=1;i--){
//   printf("%d\n",n*i);
//  }
// }

//practice set 5 to 50 all number sum
// #include <stdio.h>
// int main(){
// int sum = 0;
// for(int i=5;i<=50;i++){
//   sum +=i;
// }
// printf("sum is %d\n",sum);
// }
//check prime not prime number
// #include <stdio.h>
// int main(){
// int n = printf("enter a number for cheak prime not prime: ");
// scanf("%d",&n);
// if(n%2==0){
//   printf("your number is even",n);
// }else{printf("your is prime",n);}
// }
//50 tak jitne prime numbers hai vo print karo
// #include <stdio.h>
// int main(){
//   for(int i=1;i<=50;i+=2){
//     printf("%d\n",i);
//   }
// }
//
//print stars with nested loop
// #include <stdio.h>

// int main() {
//     int rows, i, j;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     // Simple pattern:
//     for (i = 1; i <= rows; ++i) {
//         for (j = 1; j <= i; ++j) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     printf("\nInverted pyramid pattern:\n");
//     for (i = rows; i >= 1; --i) {
//         for (j = 1; j <= i; ++j) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }



//CHAPTER 5 FUNCTION
// #include <stdio.h>
// //declaration/prototype
// void printhello();
// int main(){
//   printhello();//function call
// }
// //function defination ya vlaue 
// void printhello(){
//   printf("hello world");
// }

// #include <stdio.h>
// void namaste();
// void bonjour();
// int main(){
//   printf("enter f for french & i for indian");
//   char ch;
//   scanf("%c",&ch);
//   if(ch == 'i'){
//     namaste();
//   }else{
//     bonjour();
//   }
// }
//  void namaste(){
//   printf("namaste");
// }
// void bonjour(){
//   printf("bonjour");
// }

//function se table printing with loop
// #include <stdio.h>
// int sum(int a,int b);
// void printTable(int n);
// int main(){
// int n;
// printf("enter number:");
// scanf("%d",&n);
// printTable(n);//ye n hai argument 
// return 0;
// }
// int sum(int x,int y){
//   return x+y;
// }
// void printTable(int n){//ye n hai parameter
// for(int i=1;i<=10;i++){
//   printf("%d\n",i*n);
// }
// }

//18 gst add
// #include <stdio.h>
// void calculatePrice(float value);
// int main(){
//   float value = 100.0;
// calculatePrice(value);
// }
// void calculatePrice(float value){
//   value = value + (0.18 * value);
//   printf("final price is: %f",value);
// }

//recursion same loop ke jesa kaam karta hai
//lekin kabhi dono me kaam jyada or kam bhi karna padh sakta hai
// #include <stdio.h>
// void printHw(int count);
// int main(){
//   printHw(5); ye kitne print ho
//   return 0;
// }
// void printHw(int count){
//   if(count==0){jab tak 0 na jab tak print karo
//     return;
//   }
//   printf("hello world\n");
//   printHw(count-1);5 -1 karte jao jab tak 0 na ho
// }

//recursion facotrial ex
// #include <stdio.h>
// int fact(int n);
// int main(){
//   printf("factorial is : %d",fact(4));
//   return 0;
// }
// int fact(int n){
//   if(n==0){
//     return 1;
//   }
//   int factNm1 = fact(n-1);
//   int factN = factNm1 * n;
//   return factN;
// }

//temprature claculation recursion
// #include <stdio.h>
// float convertTemp(float celsius);

// int main(){
// float far = convertTemp(0);
// printf("far %f",far);
// return 0;
// }
// float convertTemp(float celsius){
//   float far = celsius * (9.0/5.0) + 32;
//   return far;
// }

//percentage calculation
// #include <stdio.h>
// int celcPercentage(int science, int math,int sanskrit);
// int main(){
// int sc = 98;
// int math = 95;
// int sanskrit = 99;
// printf("percentage is : %d",celcPercentage(sc,math,sanskrit));
// }
// int celcPercentage(int science, int math,int sanskrit){
//   return ((science + math + sanskrit)/3)*100;
// }

//fabonacci squence ka process ye hai ke pehli wali number ko sum karta hai 
//0 1 1 2 3 5 8 13 21 ye ek ek sum 1 2 ka sum 3 5 8 13 21;
// #include <stdio.h>
// int fib(int n);
// int main(){
//   printf("%d",fib(6));
//   return 0;
// }
// int fib(int n){
//   if(n == 0){
//     return 0;
//   }
//   if(n ==1){
//     return 1;
//   }
//   int fibNm1  = fib(n-1);
//   int fibNm2  = fib(n-2);
//   int fibN = fibNm1+fibNm2;
//   return fibN;
// }

//function practice cold and hot tempreture
// #include <stdio.h>

// void temp(float tempreture){
//   if(tempreture > 30){
//     printf("it is hot tempreture\n");
//   }else if(tempreture < 10){
//     printf("it is cold tempreture\n");
//   }else{printf("tempreture is pleasent\n");}
// }
// int main(){
//   float tempreture;
//   printf("enter tempreture degree calsios: ");
//   scanf("%f",&tempreture);
//   temp(tempreture);
//   return 0;
// }

//CHAPTER 6 POINTERS
// #include <stdio.h>

// int main(){
//     int age  = 22;//normal variable pointers only address store karta hia na ke normal varible  
//     int  *ptr = &age;//*ptr ye pointer ka variable hai isme * lagta hai kist variable ka address store karane ke liye & lagana padta hai
//     int _age = *ptr;//poiner variable store another varible
//     printf("%d",_age);
//     return 0;
// }

//int main(){
    //int age = 22;
  //  int *ptr = &age;
//address print
//printf("%p\n",&age);//%p pointer ko print karane ke lye &age address print karane ke liye
//printf("%u\n",&age);//%u address integer me convert karane ke liye
//}

// int main(){
//     int age= 22;
//     int *ptr =&age;

//     //value print
//     printf("%d\n",age);//value print variable
//     printf("%d\n",*ptr);//value print pointer
//     printf("%d\n",*(&age));//value print pointer and address
// }

// int main(){
//     int x;
//     int *ptr;
//     ptr  = &x;
//     *ptr = 0;
//     printf("x = %d\n",x);
//     printf("*ptr = %d\n",*ptr);

//     *ptr += 5;
//     printf("x = %d\n",x);
//     printf("*ptr = %d\n",*ptr);

//     (*ptr)++;
//     printf("x = %d\n",x);
//     printf("*ptr = %d\n",*ptr);
// }
//* use karte hia value ke liye or & use address ke liye
//  int main(){
//     int i = 5;
//     int *ptr = &i;
//     int **pptr =  &ptr;//pointer to pointer
//     printf("%d\n",**pptr);//pointer to dusre variable ki value ko store karta hai jab pointer ki khud ki value stor karni ho
//     //to pointer to poitner use karte hai **pptr
//  }

//function call by value
// void square(int n){//c me perameter me jo change hota vo copys me change hota hai
//     n = n*n;
//     printf("square = %d\n",n);
// }
// int main(){
//     int number = 4;
//     square(number);//iski copy bani and change ho gya lekin uski khud ki value vo hi rahegi
//     printf("number = %d\n",number);//lekin yaha vo purana number hi aaya
// }

//function call by address refrence pointer to pointer
// void _square(int *n){
//     *n = (*n) * (*n);//mene mulply address ke sath kiya na ke normal variable ke sath
//     printf("square = %d\n",*n);
// }
// int main(){
//     int number = 4;
//     _square(&number);
//     printf("number = %d\n",number);//address ek hi hota hai isliye vo change hoga to sari value change hogi 
// }

//swap ka matlab hota hai change ya exchange values
//ex a=3,b=5 swap a=5,b=3;
//call by value// jab bhi call by value hoti hai to us varible ki copy banti hai
// void swap(int a,int b){
//     int t = a;//swap ke liye ek varible banaya
//     a=b;//swaping
//     b=t;
//     printf("a =%d & b=%d\n",a,b);
// }
// int main(){
//     int x =3, y=5;
//     swap(x,y);//arguments 
//     printf("x=%d & y=%d\n",x,y);//address change karne par orignal value change hoti nahi to vo copy ho jati or orignal value change nahi
// }

//call by refrence
// void _swap(int *a,int *b){
//     int t = *a;
//     *a = *b;
//     *b = t;
// }
// int main(){
//     int x =3, y=5;
//     _swap(&x,&y);//arguments 
//     printf("x=%d & y=%d\n",x,y);//address change karne par orignal value change hoti nahi to vo copy ho jati or orignal value change nahi
// }
//call by value me cheeze copy hoti hai isliye inka address same nahi hota 
// void printValue(int n){
//     printf("call by value: %u\n",&n);
// }
// int main(){
//     int n=4;
//     printValue(n);
//     printf("call by value: %u",&n);
// }
//call by refrence me direct address change hota jab address par focus karenge to address hi to change hoga
// void printValue(int *n){
//     printf("call by value: %u\n",n);
// }//call by refrence me direct address ko acces karte hai 
// int main(){
//     int n=4;
//     printValue(&n);
//     printf("call by value: %u",&n);
// }

// void dowork(int a,int b, int *sum,int *prod, int *avg){
//     *sum = a+b;
//     *prod = a*b;
//     *avg = (a+b)/2;
// }
// int main(){
//     int a=3, b=5;
//     int sum,prod,avg;
//     dowork(a,b, &sum,&prod,&avg);
//     printf("sum =%d, prod=%d,avg=%d\n",sum,prod,avg);
// }

//maximum number print for pointer
// #include <stdio.h>

// int main() {
//     int num1, num2, *ptr1, *ptr2, max;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     ptr1 = &num1;
//     ptr2 = &num2;

//     // Using the ternary operator to find the maximum efficiently
//     max = (*ptr1 > *ptr2) ? *ptr1 : *ptr2;

//     printf("The maximum number is: %d\n", max);

//     return 0;
// }

// CHAPTER 7 ARRAY 
//ARRAY defination in c
//collection of similar data types stored at contiguous memory locations
//ham ek hi type ki value store kar sakte hai jese 2 ya 5 integer ya 2,5 float ese hi character 
//int marks[3]={30,50,75};//is [3] size ke liye likha gaya hai ke 3 integer value dalna chahte hai
//char name[10]="sameer mal";//char ka [10] ka size hamne liye
//float price[2]={2.5,2.6};//isme hamne [2] value ka float size liya hai

// int main(){
//     int marks[3];
//     printf("enter phy: ");
//     scanf("%d",&marks[0]);//ye [0] c indexing value ka input lega 

//     printf("enter che: ");
//     scanf("%d",&marks[1]);//ye [1] ka input lega array print karane ke &marks[1]   

//     printf("enter bio: ");
//     scanf("%d",&marks[2]);// ye [2] input lega

//     printf("phy = %d che = %d bio = %d",marks[0], marks[1], marks[2]);
// }

//array with 18%gst 
// int main(){
//     float price[3];
//     printf("enter 3 prices: ");
//     scanf("%f",&price[0]);
//     scanf("%f",&price[1]);
//     scanf("%f",&price[2]);

//     printf("total price 1 : %f\n",price[0]+(0.18*price[0]));
//     printf("total price 2: %f\n",price[1]+(0.18*price[1]));
//     printf("total price 2: %f\n",price[2]+(0.18*price[2]));
// }

//int marks[] = {10,20,50,30}
//array me ham agar size na bhi de to jitna ham likhenge vo count karega 

// int main(){
//     int age = 22;
//     int *ptr = &age;
//     printf("ptr = %u\n",ptr);
//     ptr++;//ye ++ bytes ke hisab se barhega int bytes 4 leta hai char 1b float 8b to bytes ke hisab se barhte hai 
//     printf("ptr = %u\n",ptr);
// ptr--;//or int bytes ke hisab se hi minus hoga
// printf("ptr = %u\n",ptr);
// }
//bilkul same hi process ha
// float price = 20.00;
// float *ptr = &price;
// ptr++;
//outpur 4 bytes se barh jayga
//ptr-- out 4 bytes minus ho jayga

// char star = '*';
// char *ptr = &star;
// ptr++;
//output 1 byts se barhega 
//ptr-- output 1 bytes se minus hoga

//array ka first index khud me ek pointer hota hai
//pointer with loop
// int main(){
//     int aadhar[5];
//     int *ptr = &aadhar[0];
//     for(int i=0;i<5;i++){
//         printf("%d index: ",i);
//         scanf("%d",&aadhar[i]);
//     }
// //output ke liye
// for(int i=0;i<5;i++){
//     printf("%d index = %d\n",i,aadhar[i]);
// }
// return 0;
// }

//array with function 
// void printNumbers(int arr[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);//\t ek tab chorkar print hoga
//     }
//     printf("\n");
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     printNumbers(arr,6);//size of array
//     return 0;
// }

//pointer with function with array same output print hoga
// void printNumbers(int *arr,int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);//\t ek tab chorkar print hoga
//     }
//     printf("\n");
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     printNumbers(arr,6);//size of array
//     return 0;
// }

//2 D ARRAY
// int main(){
//     int marks[2][3];//2 D array ese hi 3,4,5 etc lekin 2d tak hi programming me use hote hai
//     marks[0][0] = 90;
//     marks[0][1] = 89;
//     marks[0][2] = 78;

//     marks[1][0] = 90;
//     marks[1][1] = 89;
//     marks[1][2] = 78;

//     printf("%d",marks[0][0]);
// }

//odd number check with array function
// int countOdd(int arr[],int n){
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i] % 2 != 0){
//             count++;
//         }
//     }
//     return count;
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     printf("%d",countOdd(arr, 6));
//     return 0;
// }
//fibonacci with array
// int main(){
//     int n;
//     printf("enter n (n>2): ");
//     scanf("%d",&n);

//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;

//     for(int i=2; i<n;i++){
//         fib[i] = fib[i-1] + fib[i-2];
//         printf("%d\t",fib[i]);
//     }
//     printf("\n");
// return 0;
// }

//table print for 2d array
// void storeTable(int arr[][10],int n,int m,int number){
//     for(int i=0;i<m;i++){
//         arr[n][i] = number * (i+1);
//     }
// }
// int main(){
//     int tables[2][10];
//     storeTable(tables,0,10,2);
//     storeTable(tables,1,10,3);

//     for(int i=0;i<10;i++){//0 to 10
//         printf("%d\t",tables[0][i]);
//     }
//     printf("\n");
//     for(int i=0; i<10;i++){
//         printf("%d\t",tables[1][i]);
//     }
//     printf("\n");
//     return 0;
// }

// int main(){
//     int myNumbers[] = {25,50,75,100};
//     int i;
//     for(i=0;i<4;i++){
//         printf("%d\n",myNumbers[i]);
//     }
// }


//STRING CHAPTER 8
//jab bhi character ko likhte hai to '' single quote ke sath likhte hai ex 'A' this a char
//lekin jab string ko likhte hai to "Smeer" duble qoute ke sath likhte hai 
// int main(){
//     char name[] = {'S','A','M','E','E','R','\0'};//last me jo'\0' ye null character ke liye use hota hai
//     char _name[] = "SAMEER";//string me null char ko c compiler khud laga deta hai
//     return 0;
// }

// void printstring(char arr[]){
//     for(int i=0;arr[i] != '\0';i++){//ye loop jab tak chale jab null character na aajye '\0' null
// printf("%c",arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     char firstName[]= "sameer";
//     char lastName[] = "malik";
//     printstring(firstName);
//     printstring(lastName);
//     return 0;
// }

// int main(){
//     char name[] = "sameer";
//     printf("%s",name);//string ka bhi ek format hota jese int %d float %f isi tarah string ka %s hota hai
// }

//string me input lena
// int main(){
// char name[10];
// scanf("%s",name); //ye sapce ke bad wale character ko nahi leta hai to iske liye gets() ye to unsafe hai isliye hai puts() or fgets() use karenge
// printf("your name is %s ",name);
// }

//scanf me space ke bad wale char na lene ki wajah se kuch method
// int main(){char str[100];
// //
// //gedts(str);//lekin ye unsafe hai isliye ise new version me hata diya gya hai
// fgets(str,100,stdin);
// puts(str);//iske sath me ye use jaroor kare or puts me next line automatic aati hai \n karne ki jaroorat nahi
// }
//array ek pointer to string char bhi to ek array hai isliye ye bhi ek pointer hai

// char *str = "hello world";//ham is string ko change kar sakte hai
// str = "hello";//update string
// char str[] = "hello world";//agar ham array square breakets[] use karenge to use ham change nahi kar sakte 
// int main(){
// char *canChnage = "hello world";
// puts(canChnage);
// canChnage = "hello";//change string 
// puts(canChnage);
// }
// int main(){
//     char notChange[] = "hello world";
//     notChange[] = "hello";//not change jab ham array use karte hai
// }


//length count program
// int countLength(char arr[]){
//     int count = 0;
//     for(int i=0; arr[i]!='\0';i++){
//         count++;
//     }
//     return count-1;
// }
// int main(){
//     char name[100];
//     fgets(name,100,stdin);
//     printf("length is : %d",countLength(name));
//     return 0;
// }

// #include <string.h>//library function ki madad se ham string count karna aasan bana sakte hai
// int main(){//ye string function bhi null character ko include nahi karta 
//     // char name[] = "sameer";
//     // int length = strlen(name);
//     // printf("length is : %d",length);
//     // return 0;
//     //string copy method
//     // char oldstr[] = "oldstr";
//     // char newstr[] = "newstr";
//     // strcpy(newstr,oldstr);
//     // puts(newstr);//ye method ek ki value dusre me copy kar deta hai
//     //string concat method
//     // char con1[100] = "hello ";//pehli string ka size dusri string ko store karane ke liye hona chaihy na compiler error dega
//     // char con2[] = "world";
//     // strcat(con1,con2);
//     // puts(con1);//first wali string ke variable ko likho then dono string print ho jaygi
//     //camparison string method agar 0 to equl value 1 +1 positive value -1 to nagative value
//     // char firstStr[] = "Apple";//ye ASCII se compare karta hai jese A value 65 hai B 66 to -1 nagative print kyoki ham fristStr ka secStr se kar rhe hai
//     // char secStr[] = "Banana";
//     // printf("%d\n",strcmp(firstStr,secStr));
//     // char str[100];
//     // char ch;
//     // int i= 0;
//     // while(ch != '\n'){
//     //     scanf("%c",&ch);
//     //     str[i] = ch;
//     //     i++;
//     // }
//     // str[i] = '\0';
//     // puts(str);

// }
//salting ye password ke liye use hota hai ye company salting karti hai jese company hack ho gayi to aapka account hack nahi hoga jab tak ye salt na dal de
//EX
// void salting(char password[]){
//     char salt[] = "123";
//     char newPass[200];
//     strcpy(newPass,password);//newPass me password ko copy karo
//     strcat(newPass,salt);
//     puts(newPass);
// }
// int main(){
//     char password[100];
//     scanf("%s",password);
//     salting(password);
// }

//slice karta hai bich me cut 
// void slice(char str[],int n,int m){
//     char newStr[100];
//     int j=0;
//     for(int i=n;i<=m;i++,j++){
//         newStr[j] = str[i];
//     }
//     newStr[j] = '\0';
//     puts(newStr);
// }
// int main(){
//     char str[] = "hello world";
//     slice(str,3,6);
// }  result lowo cut kardiya slice kar diya

//english me vowels  = a,e,i,o,u hote hai
// int countVowels(char str[]){
//     int count = 0;
//     for(int i=0;str[i] != '\0';i++){
//         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
//             count++;
//         }
//         return count;
//     }

// }
// int main(){
//     char str[] = "sameer";
//     printf("vowels are: %d",countVowels(str));
// }
//character hoga present nahi to not present
// void checkChar(char str[],char ch){
//     for(int i=0;str[i] !='\0';i++){
//         if(str[i] == ch){
//             printf("character is present");
//             return;
//         }
//     }
//     printf("character is not present:");
// }
// int main(){
//     char str[] = "sameer";
//     char ch = 'l';
//     checkChar(str,ch);
// }

//CHAPTER 9 STRUCTURES
//defination => a collection of vlaues of diffrent data types
//EXAMPLE
//for a student store the following:
//name(string);
//roll no(integer);
//cgpa(float);

// #include <string.h>
// //user defined
// struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// };
// int main(){
//     struct student s1;//s1 variable
//     s1.roll = 152;//struct ke kisi bhi variable ko acces karne ke liye . operator ka use karte hai
//     s1.cgpa = 9.3;
//     //s1.name = "sameer";//ye error dikhayga isliye ham dusra method dekhenge
//     strcpy(s1.name,"sameer");//pehle struct se upar #include <string.h> karo fir ye copy method use karo

//     printf("student name = %s\n",s1.name);//pritn karne ke liye bhi acces jesa method use karna hoga
//     printf("student roll no = %d\n",s1.roll);
//     printf("student cgpa = %f\n",s1.cgpa);

//     struct student s2;
//     s2.roll = 154;
//     s2.cgpa = 8.8;
//     strcpy(s2.name,"sajid");

//     printf("student roll no: %d\n",s2.roll);
//     printf("student cgpa is: %f\n",s2.cgpa);
//     printf("student name is: %s\n",s2.name);

//     struct student s3;
//     s3.roll = 156;
//     s3.cgpa = 5.8;
//     strcpy(s3.name,"zaid");
//     printf("student roll no: %d\n",s3.roll);
//     printf("student cgpa is: %f\n",s3.cgpa);
//     printf("student name is: %s\n",s3.name);

//     return 0; 
// }

#include <string.h>
//ARRAY OF STRUCTURES
// struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// };
// int main(){
//     struct student ece[100];
//     ece[0].roll = 154;//ye[0] idexing se acces hota hai array of structures me
//     ece[0].cgpa = 9.3;
//     strcpy(ece[0].name,"sameer");
// //indexing ye hai jese 100 stduent to 0 yano dicamal index se 1 ka roll cgpa name struct storing use hota hai
//     printf("student roll no: %d\n",ece[0].roll);
//     printf("student cgpa : %f\n",ece[0].cgpa);
//     printf("student name :%s\n",ece[0].name);
// }

//inlizing structures
// struct student{
//     int roll;
//     float cgpa;
//     char name[100];//size declare karte hai
// };
// int main() {
//     struct student s1 = {1625,9.2,"sameer"};//ham ise usi format me likha rahe hai jese upar likha hua hai
//     printf("student name: %s\n",s1.name);//ham ise usi tarah se acces kar sakte hai jese pehle karte the s1.name;

//     //structures with pointer kyoki ye bhi ek data type hai
//     struct student *ptr = &s1;
//     printf("student roll with ptr= %d\n",(*ptr).roll);//(*ptr) hamare pass sara s1 ka data aa jayga or (*ptr).roll se ham roll point kar sakte hai
//     printf("student roll with arrow-> = %d\n",ptr->roll);//arrow method easy hai 
// }
//function with structures
// struct student{
//     int roll;
//     float cgpa;
//     char name[100];//size declare karte hai
// };

// void printInfo(struct student s1){
//     printf("student information: \n");
//     printf("student roll = %d\n",s1.roll);
//     printf("student name = %s\n",s1.name);
//     printf("student cgpa = %f\n",s1.cgpa);
// }
// int main(){
//     struct student s1 = {165,9.3,"sameer"};
//     printInfo(s1);
//     //main function se andar change ho sakta hai lekin dusre structures ki value ko change nahi kar sakta
//     //kyoki waha jo perameter vo argument ki copy hai
// }

//typedef keyword nikname ya alias create karta hai
//alias ek nickname hota jise ham uske name se bulate hai
// typedef struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// }stu;//ye hai alias yani nickname jo ham rakh rahe hai

// int main(){
//     //struct student s1;//pehle ham ese likhte the
//     stu s2 = {165,8.3,"sameer"};//ye hai typedef alias nickname
//     printf("student roll = %d\n",s2.roll);
//     return 0;
// }

//5 person ka addres store practice
// struct address{
//     int houseNo;
//     int block;
//     char city;
//     char state;
// };
// void printAdd(struct address add){
// printf("address is : %d, %d, %s, %s\n",add.houseNo,add.block,add.city,add.state);
// };
// int main(){
//     struct address adds[5];
//     //input
//     printf("enter info for perosn 1 : ");
//     scanf("%d", &adds[0].houseNo);
//     scanf("%d", &adds[0].block);
//     scanf("%s",adds[0].city);
//     scanf("%s",adds[0].state);

//     printf("enter info for perosn 2 : ");
//     scanf("%d", &adds[1].houseNo);
//     scanf("%d", &adds[1].block);
//     scanf("%s",adds[1].city);
//     scanf("%s",adds[1].state);

//     printf("enter info for perosn 3 : ");
//     scanf("%d", &adds[2].houseNo);
//     scanf("%d", &adds[2].block);
//     scanf("%s",adds[2].city);
//     scanf("%s",adds[2].state);

//     printf("enter info for perosn 3 : ");
//     scanf("%d", &adds[3].houseNo);
//     scanf("%d", &adds[3].block);
//     scanf("%s",adds[3].city);
//     scanf("%s",adds[3].state);

//     printf("enter info for perosn 1 : ");
//     scanf("%d", &adds[4].houseNo);
//     scanf("%d", &adds[4].block);
//     scanf("%s",adds[4].city);
//     scanf("%s",adds[4].state);

//     printAdd(adds[0]);
//     printAdd(adds[1]);
//     printAdd(adds[2]);
//     printAdd(adds[3]);
//     printAdd(adds[4]);

//     return 0;
// }

// struct vector{
//     int x;
//     int y;
// };
// void calSum(struct vector v1,struct vector v2, struct vector sum){
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;

//     printf("sum of x is : %d\n",sum.x);
//     printf("sum of x is : %d\n",sum.y);
// }
// int main(){
//     struct vector v1 = {5,10};
//     struct vector v2 = {3,7};
//     struct vector sum = {0};

//     calSum(v1,v2,sum);
//     return 0;
// }

//voletile memory power cut hone par iska sab kuch khatam ho jata RAM not voletile memory power cut hone se koi nuksan nahi hota Hard Disk
//what is file
//file container in a storage device to stroe data
//create txt file name test.txt; let's open and close practice
// int main(){
//     FILE *fptr;//fptr variable = fopen file open karne ke liye ("test.txt"file name,"r"ye mode hai read write ya or kuch);
//     fptr = fopen("test.txt","r");//mene file name or uska mode likh "r" jis purpose ke liye mujhe chaihiye ye file mujhe read karne ke liye chahiye "r" ese hi write and or bhi kuch karne ke liye compiler ko batana hota hai
//     fclose(fptr);//ye hai file close karne ke liye fclose 
// }
//agar file exist nahi karti to open read read in binary me null store hoga
//agar file exist nahi karti to open write write in binary me to ye us file ko create kar denge
//write in binary ya write me file hai to data purana delete ho jata ha or new data store karane lageta ye write ya binary is problem ke liye ham append ka use karte ha ham purana data bhi save rahne dena chahte ha or new data bhi
//"r" open to read
//"rb" open to read in binary format me 
//"w" open to write
//"wb" open to write in binary
//"a" open to append

//check file exist not exist for read 
// int main(){
//     FILE *fptr;
//     fptr = fopen("newtest.txt","r");
//     if(fptr == NULL){
//         printf("file doesn't exist\n");
//     }else{
//         fclose(fptr);
//     }
// }

//file create with write
// int main(){
//     FILE *fptr;
//     fptr = fopen("newtest.txt","w");//is likhne se file create ho jaygi
//     if(fptr == NULL){
//         printf("file doesn't exist\n");
//     }else{
//         fclose(fptr);
//     }
// }

//read character for file
// int main(){
//     FILE *fptr;
//     fptr = fopen("newtest.txt","r");
//     char ch;//create a variable
//     fscanf(fptr,"%c",&ch);//file se character lena ke liye
//     printf("character = %c\n",ch);//print karane ke liye

//     //second character ko print karane ke liye
//     char ch;//create a variable
//     fscanf(fptr,"%c",&ch);//file se character lena ke liye
//     printf("character = %c\n",ch);//print karane ke liye

//     //ese hi sabhi character ko read ke liye variable fscaf and printf karte jao
//     //int float bhi ese hi acces honge file se %d %f
// }

//file in some write
// int main(){
//     FILE *fptr;
//     fptr = fopen("test.txt","w");
//     fprintf(fptr,"%c",'M');
//     fprintf(fptr,"%c",'A');
//     fprintf(fptr,"%c",'N');
//     fprintf(fptr,"%c",'G');
//     fprintf(fptr,"%c",'O');
//     return 0;
//     //file me ye MANGO store ho jayga lekin purana data delte ho gya
// }

//file append jo purana data bhi delte na ho or new data bhi usme likh diya jay
// int main(){
//     FILE *fptr;
//     fptr = fopen("test.txt","a");
//     fprintf(fptr,"%c",'M');
//     fprintf(fptr,"%c",'A');
//     fprintf(fptr,"%c",'N');
//     fprintf(fptr,"%c",'G');
//     fprintf(fptr,"%c",'O');
//     return 0;
//     //new data store and old data is this file in safe
// }

//fgetc method read karne ke liye
// int main(){
//     FILE *fptr;
//     fptr = fopen("test.txt","r");
//     printf("%c\n",fgetc(fptr));//file me se character acces karne ke liye
//     printf("%c\n",fgetc(fptr));
// }

//fputc method write karne ke liye agar hame int float string store karna hai fprintf fscanf use karne hoga
// int main(){
//     FILE *fptr;
//     fptr = fopen("test.txt","r");
//     fputc('M',fptr);//file me se character write karne ke liye
//     fputc('A',fptr);
// }

//paragraph read karne ke liye loop ki jaroorat hogi
// int main(){
//     FILE *fptr;
//     fptr = fopen("test.txt","r");
//     char ch;
//     ch = fgetc(fptr);//character ko print karne ke liye
//     while(ch != EOF){//end of file ke jab file ka text end ho jata hai to ke EOF aa jata ha
//     printf("%c",ch);
//     ch = fgetc(fptr);
// }
// printf("\n");
// fclose(fptr);
// return 0;
// }

//user se input lena or file me store karane ke liye code
// int main(){
//     FILE *fptr;
//     fptr = fopen("student.txt","w");

//     char name[100];
//     int age;
//     float cgpa;
//     printf("enter name : ");
//     scanf("%s",name);
//     printf("enter age : ");
//     scanf("%d",age);
//     printf("enter cgpa : ");
//     scanf("%f",cgpa);

//     fprintf(fptr,"%s\t",name);
//     fprintf(fptr,"%d\t",age);
//     fprintf(fptr,"%f\t",cgpa);

//     fclose(fptr);
//     return 0;
// }

//  CHAPTER 11 DAYNAMIC MEMORY ALLOCATION
//int float char ka size har machine ya system me alag ho sakta hai 
//apne system ka size jane ke liye
// int main(){
//     printf("%d\n",sizeof(int));//size 4
//     printf("%d\n",sizeof(float));//size 4
//     printf("%d\n",sizeof(char));//size 1
// }

//me 20 bytes ki memory mang rha hu
// int main(){
//     int *ptr;
//     ptr = (int *) malloc(5 * sizeof(int));

//     ptr[0] = 1;
//     ptr[1] = 7;
//     ptr[2] = 4;
//     ptr[3] = 5;
//     ptr[4] = 2;

//     for(int i=0; i<5;i++){
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
// }

//calloc method continuous allocation
// #include <stdio.h>
// #include <stdlib.h>// ye use hota hai DAYNAMIC MEMORY ALLOCATION

// int main() {
//     int *ptr, n, i;

//     printf("Enter the number of integers: ");
//     scanf("%d", &n);

//     // Allocate memory for n integers, initialized to zero
//     ptr = (int*)calloc(n, sizeof(int));

//     if (ptr == NULL) {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }

//     printf("Enter %d integers:\n", n);
//     for (i = 0; i < n; ++i) {
//         scanf("%d", &ptr[i]);
//     }

//     printf("Entered integers:\n");
//     for (i = 0; i < n; ++i) {
//         printf("%d ", ptr[i]);
//     }

// // Free the allocated memory
//     free(ptr);

//     return 0;
// }

//realloac 
#include <stdlib.h>
int main(){
    int *ptr;
    ptr = (int *) calloc(5,sizeof(int));
    printf("enter numbers(5) : ");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    ptr = realloc(ptr,8);//phele jo memory 5 ke liye thi ab vo 8 ho gayi ye realloc
    printf("enter numbers(8) : ");
    for(int i=0;i<8;i++){
        scanf("%d",&ptr[i]);
    }
//print
for(int i=0;i<8;i++){
    printf("number %d is %d",i,ptr[i]);
}
return 0;
}

//double float se jayada precision hota hia