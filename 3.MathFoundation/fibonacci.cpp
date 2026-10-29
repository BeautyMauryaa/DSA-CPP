#include<iostream>
using namespace std;
void fibonacci(int num){
    if(num<0){
        cout<<"positive num";
        return ;
    }

    long long t1=0,t2=1;
    for(int i=t2;i<=num;i++){
        cout<<t1<<" ";
        long long nexterm=t1+t2;
        t1=t2;
        t2=nexterm;
    } 
    cout<<endl;

}

int main(){
    int num;
    cin>>num;
    fibonacci(num);
    return 0;
}