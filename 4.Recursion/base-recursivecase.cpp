// it is technique where function call itself directly or indirectly to solve problem
// two parts of recursive function:
// 1. Base case(the stopping condition) : it tells when to stop
// for ex: if(n==0) return ; without it function call itself  infinite times

// 2. Recursive case: it tells what to do next
//  the part where the funciton calls itself with a smaller problem
//  for ex: return func(n-1); each call should move closer to the base case;
//  so that eventually we reach the base case

// ex: print number 5 to 1
#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    print(n - 1);
}

// without basecase:
void fun()
{
    cout << "hello";
    fun();
}
// runs forever until stack overflow because the function never stop calling itself

void countdown(int n)
{
    if (n == 0)
    {
        cout << "done\n";
        return;
    }
    cout << n << " ";
    countdown(n - 1);
}
int main()
{
    print(5);
    int n = 5;
    countdown(n);
    return 0;
}

// call stack: memory space where function calls are stored temporarily
//  it follow LIFO rule(last in first out)
// each function call has its own call stack
//  when a fucntion is called , its pushed onto the stack.
//  when a fucntion finishes execution, it is popped off the stack.
//  call stack is used to keep track of function calls and their return values

// in simple word: call stack is a stack of functions that are currently being executed

// whenever a function is called:
//- a new stack frame is created.
//  - the stack frame is pushed onto the call stack
//  - when the fucntion finishes  its frame is removed from the call stack(popped)

// what does a stack frame store:
//  each stack frame store the local variables of the function, function parameters, return address, execution state of the function

// call stack in recursion:
//-in recursion a fucntion calls itself repeatedly
//  for every recursive call:
//  a new stackframe is pushed onto the stack
//  the previous function call waits until the new call completes
//  after reaching the base case, function start returning one by one

// ex:
int fact(int n)
{
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}

// function call fact(4):
// creates fact(4) -> fact(3) -> fact(2)-> fact(1)
// stack growth(lifo) -> fact(1) -> fact(2) -> fact(3) -> fact(4)
// returning phase: base case reached fact(1)=1;
// now stack start popping
//  fact(2)-> 2*1=2; fact(3)-> 3*2=6; fact(4)->4*6=24

// visualization:
// calling phase:  fact(4)->fact(3)->fact(2)->fact(1)
// returning phase: fact(1)->1; fact(2)->2*1=2; fact(3)->3*2=6; fact(4)->4*6=24

// why call stack important?
//- it helps recursion remember current function state, variable values, pending operations, where executions should continue after a function returns
// without the call stack recursive function cannot work

// stack overflow: when there is no base condition and functin calls itself infinite times
void fun()
{
    fun();
}

// the call stack keep growing until memory is exhausted

// recursive tree: a tree like diagram that represent all recusrive function calls generated during execution each node represent a functin call and branches represent further recursive calls until the base case is reached

// Call Stack = How recursion runs
//  Recursion Tree = How recursion branches

// adv & disadv:
// adv: cleaner or shorter code , natural for tree and graph problem , simplifies devide and conquer algorithm,  break complex problems into smaller subproblems
// disadv: extra memory use(each recursive calls create a new stack frame), risk of stack overflow,slower than iteration

// recursion and iteration:
//  Uses Call Stack 	      Uses Loops
//  Code is shorter	          Code may be longer
//  More memory usage	      Less memory usage
//  Risk of stack overflow	  No stack overflow
//  Easier for trees/graphs	  Better for simple repetition
//  Usually slower	          Usually faster


//tail recursion: when the recursive call is the last operation performed in the function
//ex:
void print(int n){
    if(n==0) return ;
    cout<<n<<" ";
    print(n-1);
}

//print(n-1) is the final statement nothing happens after the recursive calls return 


//non tail recursion:
void print(int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<" ";
}