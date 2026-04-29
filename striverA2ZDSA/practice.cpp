#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5]={1,1,5,2,0};
    //Selection Sort
    // for(int i=0;i<5;i++){
    //     for(int j=i+1;j<5;j++){
    //         if(arr[i]<arr[j]){
    //             swap(arr[i],arr[j]);
    //         }
    //     }
    // }

    //Bubble Sort
    // for(int i=0;i<5-1;i++){
    //     for(int j=i+1;j<5;j++){
    //         if(arr[i]>arr[j]){
    //             swap(arr[i],arr[j]);
    //         }
    //     }
    // }


    //Insertion Sort
//     for (int i = 1; i < 5; i++) {
//             for (int j = i; j > 0; j--) {
//                 if (arr[j] < arr[j - 1]) {
//                     swap(arr[j], arr[j - 1]);
//                 } else {
//                     break; // already in correct position
//                 }
//             }
//         }
//     for(int k=0;k<5;k++){
//         cout<<arr[k]<<" ";
//     }


//leargest element
// int max=INT_MIN;
// for(int i=0;i<5;i++){
//     if(arr[i]>arr[max]){
//         max=arr[i];
//     }
// }
// cout<<max;


//second largest
// int max=INT_MIN;
// int sec_max=INT_MIN;
// for(int i=0;i<5;i++){
//     if(arr[i]>arr[max]){
//         sec_max=max;
//         max=arr[i];
//     }
// }
// cout<<sec_max;

// int count=0;
// for(int i=0;i<5;i++){
//     if(arr[i]>arr[i+1]||arr[(i+1)%5]){
//         count++;
//     }
//     cout<<count;
// }

// int k = 1; // first element is always unique
//     for (int i = 1; i < 5; i++) {
//         if (arr[i] != arr[k-1]) { // check with last unique element
//             arr[k] = arr[i];     // place unique element at k
//             k++;
//         }
//     }

//     cout << "Unique count = " << k << endl;
//     cout << "Array after removing duplicates: ";
//     for (int i = 0; i < k; i++) cout << arr[i] << " ";



// int k=1;
// for(int i=0;i<5;i++){
//     if(arr[i]!=arr[k-1]){
//         arr[k]=arr[i];
//         k++;
//     }
// }
// cout<<k<<endl;
// for(int i=0;i<k;i++){
//     cout<<arr[i];
// }




    return 0;
 }
