#include<iostream>
#include<cmath>
using namespace std;
bool armstrong(int num){
    if(num<0){
        cout<<"negative num";
        return false;
    }

    int remainder;
    int result=0;
    int digit=0;
    int org=num;
    int temp=num;
    
    while(temp>0){
        //count
        digit++;
        temp/=10;
    }

    temp=num;
    while(temp>0){
        remainder=temp%10;
        result+=round(pow(remainder,digit));
        temp/=10;
    }
    return(result==org);
}

int main(){
    int num;
   cin>>num;
   if(armstrong(num)){
    cout<<"yes";
   }else{
    cout<<"no";
   }
   return 0;
}