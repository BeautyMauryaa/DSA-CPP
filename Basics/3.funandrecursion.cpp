//function: reusable block of code that perform a specific task and can be called multiple times in a program.
//recursion: functions that call themselves directly or indirectly to solve a problem by breaking it down into smaller parts and solving each part recursively.


//#include<bits/stdc++.h>
//function: 
#include<iostream>
using namespace std;
int sum(int a,int b){// int=return type ,sum=name of function ,a and b=parameters 
    return a+b;//return statement = value that is returned by the function
}
int main(){
  int a;
  cin>>a;
  int b;
  cin>>b;
  cout<<sum(a,b)<<endl;
  return 0;
}
