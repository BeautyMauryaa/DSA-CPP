#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int first=INT_MIN;
    int second=INT_MIN;
    int third=INT_MIN;

    for(int i=0;i<5;i++){
        int x=arr[i];
        if(x==first||x==second||x==third){
            continue;
        }
        if(x>first){
            third=second;
            second=first;
            first=x;
        }else if(x>second){
            third=second;
            second=x;
        }else{
            third=x;
        }
    }
    if(third==INT_MIN){
        cout<<"doesn;t exit";
    }else{
        cout<<third;
    }
    return 0;
}