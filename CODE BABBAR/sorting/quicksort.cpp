#include<iostream>
using namespace std;

//let's do partition now:
int partition(int arr[],int start,int end){
    //1.choose the pivot value
    int pivot=arr[start]; //let's take the pivot value is our first element
    
    // count how much element is less than pivot so that we 
    // can put the pivot element on the correct index

     int count=0;
     for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot){
            count++;
        }
     }
     
     //now calculate the pivotindex pos
     int pivotindex=start+count; 
     swap(arr[pivotindex],arr[start]); //after finding the pivotindex swap the position of pivotindex value to the real pivot value

     int i=start; //after partition we will get two parts of array left and right 
     int j=end;
     while(i<=pivotindex && j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i>pivotindex && j<pivotindex){
            swap(arr[i++],arr[j--]); //by chance if in the left greater then pivot value has come similary in right part then swap it.
        }
     }
     return pivotindex;

}
void quicksort(int arr[],int start,int end){
    //base case
    if(start>=end)
        return;
    //partition
    int pivotindex = partition(arr,start,end); //divide the two array according to the pivotindex
    //sort the left part of pi
    quicksort(arr,start,pivotindex-1);
    //sort the right part of pi
    quicksort(arr,pivotindex+1,end);
}

//print
int main(){
    int arr[5]={2,44,1,8,5};
    int n=5;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}