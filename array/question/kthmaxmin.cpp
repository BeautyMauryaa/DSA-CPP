vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
   //sort the element
   for(int i=0;i<arr.size();i++){
       for(int j=i+1;j<arr.size();j++){
           if(arr[i]>arr[j]){
           swap(arr[i],arr[j]);
           }
       }
   }
   int small=arr[k-1];
   int larger=arr[arr.size()-k];
   return {small,larger};
}