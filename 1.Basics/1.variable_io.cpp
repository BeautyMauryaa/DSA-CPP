// its basic in this we gonna cover  the basic of c++ programming language like how to print 
// something on the screen how to take input from the user and 
// how to do some basic operations in c++ programming language so 
// let's get started with the basics of c++.
//these topic we gonna cover in this ....ariables, data types, cin/cout


//var-kind of container that can hold a value of a specific type.
//notes: this is not just storage it also define what operations can be performed on that value and how much memory it will take up in the computer's memory.


//data types- its define which type value a variable can hold and what operation can be performed on that value.

//cin/cout- cin is used to take input from the user and cout is used to print something on the screen.
// and they are part of the iostream library which is used for input and output operations in c++ programming language.
// using namespace std;- Hey compiler, I’m going to use everything inside std directly — don’t make me write std:: again and again.


// #include<iostream>
// //using namespace std;
// int main(){
//     std::cout<<"Hii, Myself Beauty"<<std::endl;
//     return 0; //return 0; it indicate that program has ended successfully
// }


 #include<iostream>
 #include <string> //if we don't write this then it will give error if we want to use string because string is not built into c++ core like int or char

//basically c++ has two layer:
//1.core lang(built in)->int,char,string,etc(don't need any include)
//compiler already knows these

//2.standard lib(extra features)
//string vectore getline sort etc... these are written in lib files not inside the core compiler
//so when we write string geline- we need to include string header file(it tells compiler load all definition related to string into this program)


//#include<bits/stdc++.h> // this is a header file that includes all the standard library headers. 
// it is not recommended to use this header file in production code 
// as it can increase the compilation time and also it can cause some issues with the code.
using namespace std;
int main(){

    int a;
    int b;
    cout<<"Enter the value of a: "; //cout is used to print something on the screen.
    cin>>a;
    cout<<"Enter the value of b: ";
    
    cin>>b;
    int sum=a+b;
    int product=a*b;
    cout<<"The sum of a and b is: "<<sum<<endl;
    cout<<"The product of a and b is: "<<product<<endl;
    
//swap two numbers
int temp=a;
a=b;
b=temp;
cout<<"After swapping the value of a is: "<<a<<endl;
cout<<"After swapping the value of b is: "<<b<<endl;
//without third variable:
a=a+b;
b=a-b;
a=a-b;
cout<<"After swapping the value of a is: "<<a<<endl;
cout<<"After swapping the value of b is: "<<b<<endl;



//datatypes:
//int- it is used to store integer values.
//float- it is used to store decimal values.
//double- it is used to store decimal values.
//char- it is used to store single character values.
//string- it is used to store string values.
//bool- it is used to store boolean values.

//inbuilt(premitive) data types:
//int- 4 bytes
//float- 4 bytes
//double- 8 bytes
//char- 1 byte
//bool- 1 byte

int num=5;
double d=1.23;
char ch='a';
bool l=true;
float f=1.2f;
cout<<num<<d<<ch<<l<<f<<endl;
//double and float look like same but differnce double is 8 bytes and float is 4 bytes
//double is more accurate than float use it by default

//ASCII concept: 
//ASCII is a standard character encoding system that
// assigns a unique number to each character in the English alphabet and other symbols.
char ch1='A';
cout<<(int)ch1;//character are internally stored as integer

//derived data types:
//string- it is used to store string values.
//array- it is used to store multiple values of the same type in a single variable.
//vector- it is used to store multiple values of the same type in a single variable.


string name="Nova";
cout<<name<<endl;

string name1;
cout<<"Enter your name: ";
cin>>name1;
cout<<"Your name is: "<<name1<<endl;


int arr[5];
arr[0]=1;
arr[1]=2;
arr[2]=3;
arr[3]=4;
arr[4]=5;
cout<<"The value of arr[0] is: "<<arr[0]<<endl;
cout<<"The value of arr[1] is: "<<arr[1]<<endl;
cout<<"The value of arr[2] is: "<<arr[2]<<endl;
cout<<"The value of arr[3] is: "<<arr[3]<<endl;
cout<<"The value of arr[4] is: "<<arr[4]<<endl;

//vector- it is used to store multiple values of the same type in a single variable.

// vector<int> vec;
// vec.push_back(1);
// vec.push_back(2);
// vec.push_back(3);
// vec.push_back(4);
// vec.push_back(5);
// cout<<"The value of vec[0] is: "<<vec[0]<<endl;
// cout<<"The value of vec[1] is: "<<vec[1]<<endl;
// cout<<"The value of vec[2] is: "<<vec[2]<<endl;
// cout<<"The value of vec[3] is: "<<vec[3]<<endl;
// cout<<"The value of vec[4] is: "<<vec[4]<<endl;



//input
string fullname;
cin>>fullname;
cout<<"Your name is: "<<fullname<<endl;
//cin stops at space or enter so we can use getline to take input of multiple words

string fullname1;
getline(cin,fullname1);
cout<<"Your name is: "<<fullname1<<endl;



int age;
cin>>age;
string Name;
getline(cin,name);//gets skipped
//because: When you do:

// cin >> age;
// You type:
// 20
// Behind the scenes, input buffer stores:
// 20\n
// cin >> age → takes 20
// BUT leaves \n (Enter key) in buffer
//(so the problem is getline() reads until newline \n)
// But wait…
// That \n is already sitting there
// So:
// getline() sees \n
// thinks: “line ended”
// returns empty string

//so the solution is: cin.ignore();..getline(cin,Name); - its reading leftover newline
//it removes that leftover \n so now buffer is clean -> getline(cin,Name);


int age;
string Name;
cout<<"enter age: ";
cin>>age;

cin.ignore();
cout<<"enter name: ";
getline(cin,Name);
cout<<"Your name is: "<<Name<<endl;
cout<<"Your age is: "<<age<<endl;



//typecasting
//when we want to convert one data type to another data type.
//int to float, float to int, char to int, int to char

int f=80;
double b=(double)f;
cout<<"The value of b is: "<<b<<endl; //convert int f -> double b

int a=80;
float b=(float)a;
cout<<"The value of b is: "<<b<<endl; //convert int a -> float b


//dangerous case:
// int k=10, l=3;
// double result=a/b;
// cout<<"The value of result is: "<<result<<endl;
//output: 3 because it is integer division
//to fix this problem we use type casting

int a=10, b=3;
double result=(double)a/b;
cout<<"The value of result is: "<<result<<endl;


//constants: cannot change later
// #define pi 3.14
// cout<<"The value of pi is: "<<pi<<endl;

return 0;

}