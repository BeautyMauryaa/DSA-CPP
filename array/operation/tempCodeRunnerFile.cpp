#include<iostream>
using namespace std;
void deletion(int arr[],int n,int pos){
    for(int i=0;i<pos-1;i++){
        if(i==pos){
            arr[i]=i+1;
          