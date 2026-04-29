#include<iostream>
using namespace std;
int main(){

    //arthimatic operator
    // int a,b;
    // cout<<"enter the valueof a and b:"<<endl;
    // cin>>a>>b;
    // cout<<"a+b:"<<a+b<<endl;
    // cout<<"a-b:"<<a-b<<endl;
    // cout<<"a*b:"<<a*b<<endl;
    // cout<<"a/b:"<<a/b<<endl;
    // cout<<"a%b:"<<a%b<<endl;
    

    // //relational operator
    // int c,d;
    // cout<<"enter the valueof c and d:"<<endl;
    // cin>>c>>d;
    // cout<<"c==d:"<<(c==d)<<endl;
    // cout<<"c<d:"<<(c>d)<<endl;
    // cout<<"c<d:"<<(c<d)<<endl;
    // cout<<"c>=d:"<<(c>=d)<<endl;
    // cout<<"c<=d:"<<(c<=d)<<endl;
    // cout<<"c!=d:"<<(c!=d)<<endl;

    // //conditonal operator
    // int rahul,sita;
    // cout<<"enter the age of rahul and sita:"<<endl;
    // cin>>rahul>>sita;
    // if(rahul>sita){
    //     cout<<"rahul is elder brother of sita."<<endl;
    // }
    // else if(rahul<sita){
    //     cout<<"sita is eldr brother of rahul."<<endl;
    // }
    // else{
    //     cout<<"both are twins.";
    // }

    // //size of operator
    // // int g;
    // // string g="hkk";
    // // char g='g';
    // // float g=1.24;
    // int g;
    // int size=sizeof(g);
    // cout<<size;
    

    //looping
    //for loop
    //  int a;
    // int num;
    // cin>>num;
    // for(a=1;a<=num;a++){
    //     cout<<a*a<<endl;
    // }



//while and do while||switch||break||continue question 

//question1
// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     cout<<i<<endl;
//     i++;
// }


// //question2
// int n;
// cin>>n;
// int i=1;
// while(i<=10){
//     cout<<n<<"*"<<i<<"="<<n*i<<endl;
//     i++;
// }

//question3
// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     if(n%i==0){
//         cout<<i<<" ";
//     }
//     i++;
// }

// //question4&5
// int n;
// cin>>n;
// int i=0;
// while(i<=n){
//     if(i%2==0){
//         cout<<i<<" ";
//     }
//     i++;
// }
// cout<<endl;
// int j=0;
// while(j<=n){
//     if(j%2!=0){
//         cout<<j<<" ";
//     }
//     j++;
//}

//question6
// int n;
// cin>>n;
// int i=1;
// int sum=0;
// do{
//  sum+=i;
//  cout<<sum<<endl;
//  i++;
// }
// while(i<=n);


//switch and continue
// //question7
// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     if(i==8){
//     break;
// }
// cout<<i<<" ";
// i++;
//}

//question8
// int n;
// cin>>n;
// int i=1;
// for(i;i<=n;i++){
//     if(i%4==0)
//     continue;
//     cout<<i<<" ";
// }


//switch loop
int n;
cin>>n;
switch(n){
    case 1:
    cout<<"rohit";
    break;
    case 2:
    cout<<"sohit";
    break;
    case 3:
    cout<<"mohit";
    break;
    case 4:
    cout<<"riya";
    break;
    default:
    cout<<"beauty";
}
     return 0;
}