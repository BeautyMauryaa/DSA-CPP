//operator is basically the operation which we do perform on the operands(values);
//1.arthimatic operators(the mathematical operations)
 //in this/ and % is called modulsoperator 
 // use case of % is - rotating the array, finding remainder
//2. Relational(==, !=, >) - <Used in sorting and searching comparisons.
//3.Logical(&& ||, !)-Combining multiple conditions in if statements.
// 4.Bitwise(&, |, ^, ~, <<, >>)-Used for "Bit Manipulation" problems (highly optimized).

#include<iostream>
using namespace std;
int main(){
    int a=10,b=20;
    cout<<"The sum of a and b is: "<<a+b<<endl;
    cout<<"The difference of a and b is: "<<a-b<<endl;
    cout<<"The product of a and b is: "<<a*b<<endl;
    cout<<"The quotient of a and b is: "<<a/b<<endl;
    cout<<"The remainder of a and b is: "<<a%b<<endl;

    //relational operators
    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;

    //logical operators
    cout<<"The value of a&&b is: "<<(a&&b)<<endl;
    cout<<"The value of a||b is: "<<(a||b)<<endl;
    cout<<"The value of !a is: "<<(!a)<<endl;

    //conditional operators
    int c=5;
    if(c==5){
        cout<<"The value of c is 5"<<endl;
    }
    else{
        cout<<"The value of c is not 5"<<endl;
    }


    //ternary operator
    int d=10;
    int e=20;
    int max=(d>e)?d:e;
    cout<<"The maximum of d and e is: "<<max<<endl;


    //bitwise operators
    int f=5;
    int g=10;
    cout<<"The value of f&g is: "<<(f&g)<<endl;
    cout<<"The value of f|g is: "<<(f|g)<<endl;



    //2.condittional operator:control the flow in dsa we often use them to prune the unnecessary calculations.
//if and if-else(standard decision making)
if(a>b){
    cout<<"a is greater than b"<<endl;
}
else{
    cout<<"b is greater than a"<<endl;
}


//nested if-else
if(a>b){
    cout<<"a is greater than b"<<endl;
}
else if(a==b){
    cout<<"a is equal to b"<<endl;
}
else{
    cout<<"b is greater than a"<<endl;
}

//switch(faster than multiple if-elses for menu driven programs)
//switch-case
int num=2;
switch(num){
    case 1: cout<<"first"<<endl;
    break;
    case 2: cout<<"second"<<endl;
    break;
    default: cout<<"it is default"<<endl;
}


//switch-case
char ch='a';
switch(ch){
    case 'a': cout<<"vowel"<<endl;
    break;
    case 'e': cout<<"vowel"<<endl;
    break;
    case 'i': cout<<"vowel"<<endl;
    break;
    case 'o': cout<<"vowel"<<endl;
    break;
    case 'u': cout<<"vowel"<<endl;
    break;
    default: cout<<"consonant"<<endl;
}



//switch-case
int day=5;
switch(day){
    case 1: cout<<"monday"<<endl;
    break;
    case 2: cout<<"tuesday"<<endl;
    break;
    case 3: cout<<"wednesday"<<endl;
    break;
    case 4: cout<<"thursday"<<endl;
    break;
    case 5: cout<<"friday"<<endl;
    break;
    case 6: cout<<"saturday"<<endl;
    break;
    case 7: cout<<"sunday"<<endl;
    break;
    default: cout<<"invalid day"<<endl;
}

//ternary(one line decision making)(?:)
int x=10;
int y=20;
int z=(x>y)?x:y;
cout<<"The maximum of x and y is: "<<z<<endl;


//3.loops: used to iterate over a block of code multiple times.
//for loop(when you know number of iterations)
for(int i=1;i<=10;i++){
    cout<<i<<endl;
}
//while loop(used when termination cndition is dynamic);
int i=1;
while(i<=10){
    cout<<i<<endl;
    i++;
}


//do-while loop(do will be executed once even if the condition is false);
int j=1;
do{
    cout<<j<<endl;
    j++;
}while(j<=10);


//nested loops(loops inside loops);
for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
        cout<<i<<" "<<j<<endl;
    }
    cout<<endl;
}

    return 0;
}





