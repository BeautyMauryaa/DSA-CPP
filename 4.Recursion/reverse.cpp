//reverse an array
#include<iostream>
using namespace std;

    void reverse(int arr[], int n){
        if (n <= 1) return;

        swap(arr[0], arr[n - 1]);

        reverse(arr + 1, n - 2);
    }

int main(){
    int n[5]={1,2,3,4,5};
    reverse(n,5);
    for(int i=0;i<5;i++){
        cout<<n[i]<<" ";
    }
    return 0;
}

