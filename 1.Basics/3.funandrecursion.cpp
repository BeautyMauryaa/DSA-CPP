//Notes: 
//1.function: reusable block of code with name
//syntax:
//return_type function_name(parameters){
//body
//return value
//}

//2.pass byvalue and ref:
//value->copy of original value,original safe
//ref->address of original value ,original unsafe(original gets changed and & symbol)

//use ref when:
//we want to modify originla variable
//when we want to return multiple values


//3.return type:
//void(return nothin), int(return integer), float(return decimal),bool(return true and false),string(return string), char(return characters),

//cal only return one value directly
//for multiple value-> use reference params

//4.default paramters:
//void greet(string name,string msg="hello")
//rules: default parameters always on right side of non-default parameters
//if argument passed->uses that
//if not passed->uses default values


//5.function overloading:
//same function name but diff parameters
//compiler picks correct one automatically

//int add(int a,int b)
//float add( float a,float b)
//int add(int a,int b,int c)


//6.scope and stack(imp):
//local variables-> lives inside funciton only
//global variable-> lives everywhere

//stacke frame:
//every function call= new frame create
//frame has its own variables
// function returns=frame destroyed



//7.Recursion:
//function calling itself directly or indirectly to solve a problem by breaking it down into smaller parts and solving each part recursively.
//every recursion needs:
//base case(when to stop)
//recursive case(when to call again)


//formula: 
//whats the base case?
//what's one step i can do?
//trust recursion for the rest


//recursin ex:
int fact(int n){
  if(n==0) return 1;//base case
  return n*fact(n-1);//recursive case
}

void print(int n){
  if(n==0) return;
  print(n-1);//base case
  cout<<n<<" ";
}

int fib(int n){
  if(n<=1)return n;
  return fib(n-1)+fib(n-2);
}













// function: reusable block of code that perform a specific task and can be called multiple times in a program.
// recursion: functions that call themselves directly or indirectly to solve a problem by breaking it down into smaller parts and solving each part recursively.

// #include<bits/stdc++.h>
// function:
//  #include<iostream>
//  using namespace std;
//  int sum(int a,int b){// int=return type ,sum=name of function ,a and b=parameters
//      return a+b;//return statement = value that is returned by the function
//  }
//  int main(){
//    int a;
//    cin>>a;
//    int b;
//    cin>>b;
//    cout<<sum(a,b)<<endl;
//    return 0;
//  }

// 1.Pass by value and pass by reference:
#include <iostream>
using namespace std;

void Addten(int x)
{
  x = x + 10;
  cout << "inside value fun: " << x << endl;
}

void Addtenref(int &x)
{
  x = x + 10;
  cout << "inside ref fun: " << x << endl;
}

//2. return type(define which type of value return back to the caller when caller will call this function or method)
// and different type of parameters:()



void str(string ask){//void return nothing
  cout<<"How's everything going?"<<ask<<endl;
}

int sum(int a,int b){
  return a+b;//return int type
}

//returning multiple values: use reference params(C++ functions return one value,but multiple values can be achieved using, references, pointers, or struct/pair.)
void getvalue(int& a,int& b){
  a=10;
  b=10;
}



int main()
{
  int x;
  cout << "enter the value of x: ";
  cin >> x;

  Addten(x);
  cout << "after value call: " << x << endl;

  Addtenref(x);
  cout << "after ref call: " << x << endl;
  cout << x << endl;


  str("fine");
  int ans=sum(3,4);
  cout<<ans;


  int a,b;
  getvalue(a,b);
  cout<<a<<" "<<b;


  int c=8;
  int factans=fact(c);
  cout<<factans<<endl;

  print(c);
  int fibans=fib(c);
  cout<<fibans;
  return 0;
}



//1.Write a function that swaps two numbers using pass by reference


void swap(int &a,int &b){
  int temp=a;
  a=b;
  b=temp;
}



//2.Write a function that returns both sum AND product of two numbers using reference params
void sumproduct(int a,int b,int  &sum,int &product){
  sum=a+b;
  product=a*b;
}

//3.Write overloaded functions named area that: Takes 1 param → area of circle (πr²).Takes 2 params → area of rectangle (l×b)
double area(double r) {
    return 3.14 * r * r;  // πr²
}

// 🔹 Area of Rectangle (2 parameters)
int area(int l, int b) {
    return l * b;  // l × b
}


//Tower of Hanoi:
//1. move disk 1 from source to destination
//2. move disk n-1 from source to auxiliary rod
//3. move disk 1 from source to destination
//4. move disk n-1 from auxiliary rod to destination

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    towerOfHanoi(n - 1, auxiliary, source, destination);
}



// //Fibonacci of N:
//without loop:
int fib(int n){
  if(n<=1) return n;
  return fib(n-1)+fib(n-2);
}

//with loop:
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


//reverse a array by ref
// ..class Solution{
// public:
//     void reverse(vector<int>& arr){
//    int start=0;
//    int end=arr.size()-1;~
// while(start<end){
//     int temp=arr[start];
//     arr[start]=arr[end];
//     arr[end]=temp;

//     start++;
//     end--;
// }
//     }
// };