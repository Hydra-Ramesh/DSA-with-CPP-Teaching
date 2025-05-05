//Write a Programme in C++ for print the table of n using for loop.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Name:";
//     cin>>n;
//     for(int i=n;i<=n*10;i=i+n){
//         cout<<i<<endl;
//     }
//     return 0;
// }
//Second Process
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Name:";
//     cin>>n;
//     for(int i=1;i<=10;i++){
//         cout<<n<<'x'<<i<<'='<<n*i<<endl;
//     }
//     return 0;
// }


//Q2 Print the AP-> 1,3,5,7,9...n;
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=2*n-1;i+=2){
//         cout<<i<<' ';
//     }
//     return 0;
// }


//Q3 Print the AP-> 3,6,9,...n; n=10;

//Q4 Print the GP-> 1,2,4,8,16,...n
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int term = 1;
//     for(int i=1;i<=n;i++){
//         term=term*2;
//     }
//     cout<<term;
//     return 0;
// }


//Q5 Print 100,50,25,12.50..n n=6;
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    float term=100;
    for(int i=1;i<=n;i++){
        cout<<term<<endl;
        term /=2;
    }
    return 0;
}