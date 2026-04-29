#include<iostream>
#include<math.h>
using namespace std;
int main(){
//     int marks;
//     cout<<"enter your marks:"<<endl;
//     cin>>marks;
//     if(marks>=85){
//         cout<<"topper";
//     }
//    else if(marks>=75&marks<85){
//     cout<<"first";
//    }
//    else if(marks>=65&marks<75){
//     cout<<"second";
//    }
//    else if(marks>=55&marks<65){
//     cout<<"third";
//    }
//    else if(marks>=45&marks<55){
//     cout<<"pass";
//    }
//    else{
//     cout<<"fail";
//    }



/*check even or not
int num;
    cout<<"enter your num:";
    cin>>num;
    if(num%2==0){
        cout<<"even";
    }
   else{
    cout<<"odd";
   }

   return 0;*/

//    //chracter vowel or not
//      char letter;
//      cout<<"enter the letter: ";
//      cin>>letter;
//      if(letter=='a'){
//         cout<<"vowel";
//      }
//     else if(letter=='e'){
//         cout<<"vowel";
//      }
//     else if(letter=='i'){
//         cout<<"vowel";
//      }
//     else if(letter=='o'){
//         cout<<"vowel";
//      }
//     else if(letter=='u'){
//         cout<<"vowel";
//      }
//     else{
//         cout<<"consonent";
//      }
//      return 0;


//size of operator
// int g;
// string g="hkk";
// char=g='g';
// float g=1.24;
// double g;
// int size=sizeof(g);
// cout<<size;
// return 0;


//conditional operator
//print weekdays with number
// int num;
// cout<<"num: ";
// cin>>num;
// if(num==1){
//     cout<<"monday";
// }
// else if(num==2){
//     cout<<"tuesday";
// }
// else if(num==3){
//     cout<<"wednesday";
// }
// else if(num==4){
//     cout<<"thrusday";
// }
// else if(num==5){
//     cout<<"friday";
// }
// else if(num==6){
//     cout<<"saturday";
// }
// else if(num==7){
//     cout<<"sunday";
// }
// else if(num>=8){
//     cout<<"error";
// }
// return 0;
// }


//loop operator(for loop)
    //  int a;
    // int num;
    // cin>>num;
    // for(a=1;a<=num;a++){
    //     cout<<a*a<<endl;
    // }

    // for(int count=1;count<=5;count++){
    //     cout<<"coderarmy"<<endl;
    // }


//     

//print the n natural number
// int n;
// cin>>n;
// for(int a=1;a<=n;a++){
//     cout<<a<<endl;
// }


// print a number 101 to 200
// for(int a=101;a<=200;a++){
//     cout<<a<<endl;
// }

//print a to z
// for(char name='a';name<='z';name+=1){
//     cout<<name<<endl;
// }

//print the number in reverse order
// int a;
// cin>>a;
// for(a;a>=1;a--){
//     cout<<a<<endl;
// }

//print number from 1 to 100 but differnce is 3
// for(int a=1;a<=100;a=a+3){
//     cout<<a<<endl;
// }

//print the tabe of any number
// int a;
// cin>>a;
// for(int i=1;i<=10;i++){
//     cout<<a<<"*"<<i<<"="<<a*i<<endl;
// }


// int a;
// cout<<"Enter a number:";
// cin>>a;
// for(int i=1;i<=10;i++){
//     int table=i+a;
//     cout<<a<<"*"<<i<<"="<<table<<endl;
// }


// int a;
// cout<<"Enter a number:";
// cin>>a;
// cout<<"the power of number is: "<<a*a;

//find the sum of n natural number
    // int num;
    // cin >> num;
    // int sum = 0;
    // for (int i = 1; i <= num; i++)
    // {
    //     sum = sum + i;
    // }
    // cout << sum;

//find the factorial
    // int num;
    // cout<<"Enter the number:";
    // cin>>num;
    //  int fact;
    // fact=1;
    // for(int i=1;i<=num;i++){
    //     fact=fact*i;
    // }
    // cout<<fact;


//check a number is prime number or not
     
    // int num;
    // cout<<"Enter the number:";
    // cin>>num;
    // int i;
    // if(num<2){
    //     cout<<"not a prime number";
    //     return 0;
    // }
    // else{
    //     for(i=2;i<num;i++){
    //         if(num%1==0){
    //             cout<<"not a prime number";
    //             return 0;
    //         }
    //     }
    //     cout<<"prime number";

    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int start=n-i+1;
    //     while(start>=1){
    //        cout<<"*"<<" ";
    //        start--;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    //question leetcode
    // int n1=2;
    // int n2=3;
    // int n3=4;
    // int sum=0;
    //     sum=n1+n2+n3;
    //     cout<<sum<<endl;;
    // int product=0;
    //      product=n1*n2*n3;
    //      cout<<product<<endl;;
    //      int sub=product-sum;
    //      cout<<sub;

    

    // int n;
    // cin>>n;
    // while(n>9){
    //  int ans=0,rem;
    // while(n!=0){
    //     rem=n%10;
    //     n=n/10;
    //     ans=ans+rem;
    // }
    // n=ans;
    // }
    // cout<<n;


//    int n;
//    cin>>n;
//    int i=0;
//   if(n<1)
//   cout<<"not exist";
//   while(n!=1)
//   {
//     if(n%2==1){
//     cout<<"no";
//     }
//     n=n/2;
//   }
//    cout<<"yes";

// int n;
// cin>>n;
// if(n<0)
// cout<<"not exist";
// int num=x,rem,ans=0;
// while(num){
//     rem=num%10;
//     n=num/10;
//     if(ans>INT32_MAX/10)
//     cout<<"exsit"
//    ans=ans*10+rem;
// };
// if(ans==x)
// cout<<"palindrome";
// else


// int num;
// cin>>num;
// int  rev=0,rem,temp;
// temp=num;
// while(temp!=0){
//     rem=temp%10;
//     rev=rev*10+rem;
//     temp=temp/=10;
// };
// if(num==rev)
// cout<<num<<" is a paindrome";
// else{
//     cout<<num<<" is not a palindrome";
// }

// int i=5;
// while(true){
//     if(i%7==0){
//         cout<<i<<endl;
//         break;
//     }
//     i=i+5;
// }

int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
    cout<<"*";
    j++;
    }
    cout<<endl;
    i++;
}
   return 0;
}


