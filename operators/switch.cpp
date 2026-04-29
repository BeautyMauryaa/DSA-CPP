#include<iostream>
using namespace std;
int main(){
    // int num=2;
    // switch(num){
    //     case 1: cout<<"first"<<endl;
    //     break;
    //     case 2: cout<<"second"<<endl;
    //     break;
    //     default: cout<<"it is default"<<endl;
    // }

    //mini calculator program
    // int a,b;
    // cout<<"enter the value of a: ";
    // cin>>a;
    // cout<<"enter the value of b: ";
    // cin>>b;
    // char op;
    // cout<<"enter the operation which you want to perform: ";
    // cin>>op;
    // switch(op){
    //     case '+':
    //     cout<<(a+b)<<endl;
    //     break;
    //      case '-':
    //     cout<<(a-b)<<endl;
    //     break;
    //      case '*':
    //     cout<<(a*b)<<endl;
    //     break;
    //      case '/':
    //     cout<<(a/b)<<endl;
    //     break;
    //      case '%':
    //     cout<<(a%b)<<endl;
    //     break;
    //     default:
    //     cout<<"you entered the default operation.";
    // }


    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=1;i==b;i++){
       ans = ans * a;
    }
    cout<<"answer is"<<ans<<endl;
    ans++;
    return 0;
}