//1.plaindrome: 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int reverse=0;
//    int original=n;
//     while(n!=0){
//         int remainder=n%10;
//        reverse=reverse*10+remainder;
//         n/=10;
//     }
//     if(original==reverse){ 
//                cout<<"palindrome";
//     }else{
//         cout<<"not palindrome";
//     }
//     return 0;   
// }



//2. prime number
#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     //can't be less than 2
//     if(n<2){
//         cout<<"not prime number";
//         return 0;
//     }

//     bool isprime=true;
//     for(int i=2;i<=n/i;i++){
//         if(n%i==0){
//             isprime=false;
//             break;
//         }
//     }
//     if(isprime){
//         cout<<"prime number";
//     }else{
//         cout<<"not prime number";
//     }
//     return 0;
// }

//3.factorial
// int main(){
//     int n;
//     cin>>n;
//     long long factorial=1;
//     if(n<1){
//         cout<<"invalid";
//         return 0;
//     }

//     for(int i=1;i<=n;i++){
//         factorial=factorial*i;
//     }
//     cout<<factorial;
//     return 0;
// }

//4. armstrong:
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int digit=0;
   int original=n;
    int temp=n;
    while(temp!=0){
        temp/=10;
        digit++;
    }

    temp=n;
    int remainder;
    int result=0;
    while(temp!=0){
        remainder=temp%10;
        result+=round(pow(remainder,digit));
        temp/=10;
    }
    if(result==original){
        cout<<"arm strong";
    }else{
        cout<<"not armstrong";
    }
    return 0;
}