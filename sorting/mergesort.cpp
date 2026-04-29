#include<iostream>
#include <vector>
using namespace std;

void merge(int arr[],int start,int mid,int end){
    //now in this we haveto create a new array which store the sorted merge of both array
    vector<int>temp(end-start+1); //vector<data_type>array_name(array_size)

    //now we have to take three pointer 1.which fill the value in new array 2.which point left side of array 3.which point right side of array
    int left=start;
    int right=mid+1;
    int index=0;
    
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            index++;
            left++;
        }else{
            temp[index]=arr[right];
            index++;
            right++;
        }
    }

    //if left array has still left some element then copy it in the temp array
    while(left<=mid){
        temp[index]=arr[left];
        index++;
        left++;
    }

    //if right array has stil left some element then copy it in the temp array
    while(right<=end){
        temp[index]=arr[right];
        index++;
        right++;
    }

    //put these value into actual array
    index=0;
    while(start<=end){
        arr[start]=temp[index];
        start++;
        index++;
    }
}


void mergesort(int arr[],int start,int end){
    //mergesort function is dividing the array
    //if we have single element
    if(start==end){
        return;
    }
    //if not then find mid element and divide the array into two parts
    int mid=start+(end-start)/2;//stop to over integers
    //now we have two array 
    mergesort(arr,start,mid);//left side of mid
    mergesort(arr,mid+1,end);//right side of mid
    
    //now merge the both sorted array into sorted order
    //and merge function is concatenating the both sorted array into sorted order

    merge(arr,start,mid,end);
}

int main(){
    int arr[5]={2,1,5,6,4};
    cout<<"before sorted: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"sorted array: ";
    mergesort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}