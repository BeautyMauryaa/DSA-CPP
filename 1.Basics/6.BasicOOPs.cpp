// //oops: combining properties and function into one unit called class.

// //class(custom data type) and object(memory allocation):
// //-userdefined data type which define properties and behavior of an object.(blueprint of object)
// //object- it is instance of that class which represent real world entity and occupy memory in the computer's memory.


// //4 pillars of oops:
// //1. Encapsulation: hide the internal details and provide a public interface to access them.
// //2. Abstraction: hide the internal details and provide a public interface to access them.
// //3. Inheritance: allow a class to inherit properties and behavior from another class.
// //4. Polymorphism: allow a class to have multiple forms





// //Constructor: special function which is automatically called when an object is created.
// //without constructor:
// #include <iostream>
// using namespace std;

// // struct Book{
// //     string title;
// //     float price;
// // };


// class Book{
//     public:
//     string title;
//     float price;

//     // Book(){ //default constructor
//     //     title="unknown";
//     //     price=0.0;
//     // }

//     Book(string n,int m){ //parameterized constructor
//         title=n;
//         price=m;
//     }


//     //copy constructor (Make a another object from exist object)
//     Book(const Book& b){
//         title = b.title;
//         price = b.price;
//     }
// };


// int main(){
// // Book B1;//now constructor is called automatically
// // //ut<<B1.price; //garbage value (because it is not initialized) so to avoid this we use constructor

// // cout<<B1.title<<" "<<B1.price<<endl;

// //in parameterized constructor we have to pas value:

// Book B2("The Alchemist", 299);
// Book B3(B2);
// cout<<B3.title<<" "<<B3.price<<endl;
// cout<<B2.title<<" "<<B2.price<<endl;
// return 0;
// }

// //3 rules of constructor:
// //1. name should be same as class name
// //2. no return type (not even void)
// //3. it is automatically called when an object is created

// //3 types of constructor:
// //1. default constructor: no argument constructor
// //2. parameterized constructor: constructor with argument
// //3. copy constructor: copy constructor



// //shortcut to write constructor: Initializer list
// // Book(string n,int m):title(n),price(m){}




// //Destructor: special function which is automatically called when an object is destroyed.

// //syntax:
// // ~class_name(){
// //     //body
// // }



//Question: 
#include <iostream>
using namespace std;

class Car{
    public:
    string brand;
    int speed;

    Car(){
        brand="unknown";
        speed=0;
    }

    Car(string b,int s){
        brand=b;
        speed=s;
    }
};

int main(){
    Car c1("Thar",100);//parameterized
    cout<<c1.brand<<" "<<c1.speed<<endl;

    //copy constructor
    Car c3(c1);
    c3.brand="BMW";
    cout<<c3.brand<<" "<<c3.speed<<endl;

    Car c2; //default
    cout<<c2.brand<<" "<<c2.speed<<endl;
    return 0;
}