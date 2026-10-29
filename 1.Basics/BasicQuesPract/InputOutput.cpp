#include <iostream> //used for input and output
using namespace std; //directive that allow use names from c++ standard lib (like cout,cin,string orvector) also use to avoid using std::cout or cin etc again and again

//use \n for new lines

//\n vs endl: 
//\n => inserts a new line (faster as compared to endl);
//endl => insert a new line and flushes the output buffer(slower).
// flushes the output buffer means  it forces the buffered output to be displayed immediately

// for ex:
// cout <"Hello"<<endl; => cout<<"Hello\n"; cout.flush();

//flushes the output buffer means- normally cout stored output in a temp memory area called buffer and print it later for efficiency. but when we use endl it displayed hello immediately because endl calles flush().


//taking user input with cin;

//instead of include all lib in header file we can use #include <bits/stdc++.h>



int main(){
    cout<<"Hii, Myself Nova"<<"\n";
    cout<<"I am Learning C++"<<"\n";
    int x;
    cin>>x;
    cout<<"The value of x is :"<<x<<"\n";

    return 0;
}