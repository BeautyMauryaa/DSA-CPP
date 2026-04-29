// 1 se N tak print karo (loop)-done
// 2. Factorial nikalo (loop)  
// 3. Check even/odd (condition)
// 4. Star pattern (nested loop) 
// 5. Fibonacci series (loop)-







//FizzBuzz 412
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// class Solution {
// public:
//     vector<string> fizzBuzz(int n) {
//         vector<string> ans(n);
//         for(int i = 1; i <= n; i++) {
//             if(i % 15 == 0) ans[i-1] = "FizzBuzz";
//             else if(i % 3 == 0) ans[i-1] = "Fizz";
//             else if(i % 5 == 0) ans[i-1] = "Buzz";
//             else ans[i-1] = to_string(i);
//         }
//         return ans;
//     }
// };


int fib(int n){
  if(n<=1) return n;
  int a=0,b=1;
  for(int i=2;i<=n;i++){
      int next=a+b;
      a=b;
      b=next;
  }
  return b;
}



class Solution {
public:
    int forLoop(int low, int high) {
        int sum=0;
           for(int i=low;i<=high;i++){
            sum+=i;
           }
           return sum;
    }
};

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     Solution obj;
//     vector<string> result = obj.fizzBuzz(n);

//     cout << "\nFizzBuzz Output:\n";
//     for(string s : result) {
//         cout << s << " ";
//     }

//     return 0;
// }


//sum of two number:
 int main(){
// int arr={1,2,3,4,5};
// int target;
// cin>>target;
// for(int i=0;i<5;i++){
//     for(int j=i+1;j<5;j++){
//         if(array[i]+array[j]==target){
//             cout<<array[i]<<" "<<array[j]<<endl;
//         }
//     }
// }


int n;
cin>>n;
int ans=fib(n);
cout<<ans;
return 0;
 }

//palindrome: 