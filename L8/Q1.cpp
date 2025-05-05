//While Loop
//Q1 Write a code to calculate the sum of natural number;
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     int i=1;
//     while(i<=n){
//         sum+=i;
//         i++;
//     }
//     cout<<sum;
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout<<sum;
//     return 0;
// }
//Q2 Print Factorial of 5;
// int main(){
//     int fact=1;
//     int i=1;
//     while(i<=5){
//         fact = fact*i;
//         i++;
//     }
//     cout<<fact;
//     return 0;
// }
//Q3 Write a programme to print the odd number and which is also divisible by 5 upto 1 to 100 using while loop.
// int main(){
//     int i=1;
//     while(i<=100){
//         if(i%2!=0 && i%5==0){
//             cout<<i<<' ';
//         }
//         i++;
//     }
//     return 0;
// }
//Q4 Write a progamme to count the digit of a number.
// int main(){
//     int n;
//     cin>>n;
//     int count =0;
//     while(n!=0){
//         n=n/10;
//         count++;
//     }
//     cout<<count;
// }
//Q5 Write a programme to print the reverse of a number.
// int main(){
//     int n;
//     cin>>n;
//     int rev=0;
//     while(n!=0){
//         int digit = n%10;
//         rev = rev*10+digit;
//         n/=10;
//     }
//     cout<<rev;
//     return 0;
// }

//Q6 Check the prime number.
// int main(){
//     int n;
//     cin>>n;
//     if(n==2){
//         cout<<"It is Prime"<<endl;
//     }
//     int i=2;
//     bool flag = true;
//     while(i<=n/2){
//         if(n%i==0){
//             flag=false;
//             break;
//         }
//         i++;
//     }
//     if(flag && n>1){
//         cout<<"It is Prime";
//     }else{
//         cout<<"It is Consicutive";
//     }
//     return 0;
// }