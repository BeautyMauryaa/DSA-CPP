#include<iostream>
#include<climits>//use for int_max,min
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    //11/09/25
    //int arr[5]={4,2,7,1,9};
     //int max=INT_MIN;
    // for(int i=0;i<5;i++){
    //   if(arr[i]>arr[max]){
    //     max=arr[i];
    //   }
    // }
    // cout<<"max element is: "<<max;


    //second largest element
    //1st.way:
    //    for(int i=0;i<5;i++){
    //     for(int j=i+1;j<5;j++){
    //         if(arr[i]>arr[j]){
    //           arr[j]=arr[i];
    //         }
    //     }
    //    }
    // for(int j=0;j<5-1;j++){
    //     if(j==3){
    //         cout<<arr[j];
    //     }
    // }


    //2. wihtout sorting
    // int sec_max=INT_MIN;
    // for(int i=0;i<5;i++){
    //     if(arr[i]>arr[max]){
    //         sec_max=max;
    //         max=arr[i];
    //     }   
    // }
    // cout<<sec_max;

    //checkif array is sorted and roated 1752
    // int count=0;
    // for(int i=0;i<5;i++){
    //     if(arr[i]>arr[(i+1)%5]){
    //         count++;
    //     }
    // }

    // if(count<=1){
    //     cout<<"yes";
    // }



    //189 rotate array
    // int max=INT_MIN;
    // for(int i=0;i<5;i++){
    //     if(arr[i]>arr[max]){
    //         max=arr[i];
    //     }
    // }
    // cout<<max;

    // int max=INT_MIN;
    // int sec_max=INT_MIN;
    // for(int i=0;i<5;i++){
    //     if(arr[i]>arr[max]){
    //        sec_max=max;
    //        max=arr[i];
    //     }
    // }
    // cout<<sec_max;


    // for(int i=0;i<5;i++){
    //     if(nums[i]>nums[(i+1)%n]){
    //         count++;
    //     }
    // }
    


    // for(int i=0;i5;i++){
    //     if(arr[i]!=arr[i-1]){
    //         nums[k]=nums[i];
    //         k++;
    //     }
    // }

//maximum consicutive
    int arr2[10]={1,1,0,1,1,1};
    // int count=0;
    // int maxcount=0;
    // for(int n:arr2){
    //     if(n==1){
    //         count++;
    //         maxcount=max(maxcount,count);
    //     }else{
    //         count=0;
    //     }
    // }
    // cout<<maxcount;



    //find union
    // set<int> s;
    // for(int n:arr){
    //     s.insert(n);
    // }

    // for(int n:arr2){
    //     s.insert(n);
    // }
    // vector<int>result(s.begin(),s.end());
    // cout<<"Union of arrays: ";
    // for(int n:result) {
    //     cout<<n<<" ";
    // }

//  int n=5
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr2[i];
//     }
//     int totalsum=(n+1)*(n)/2;
//     int ans=sum-totalsum;
//     cout<<ans;



int arr[5]={2,1,4,5,6};
int value;
cout<<"enter value: ";
cin>>value;
int longest=INT_MIN;

    return 0;
}

