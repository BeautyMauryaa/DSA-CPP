// Find the sum of digits	Loops, % 10, / 10
// 1. extract the last digit
//2. add to the sum
//3. remove from original
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum=0;
    int lastdigit;
    int original=num;
    if(num<0){
        num=-num;
    }
    while(num>0){
     lastdigit=num%10;
     sum+=lastdigit;
     num/=10;
    }
    cout << "The sum of digits of " << original << " is: " << sum << endl;
    return 0;
}
