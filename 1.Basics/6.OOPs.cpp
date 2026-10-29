// //Encapslution: hiding the internal datas and providing a public interface to access them.
// // example: ATM machine(withdrawal money , check balance but we can't directly access the bank  database)
// //private(hide data) and public(access data)
// // #include <iostream>
// // using namespace std;

// // class BankAccount{
// //     private:
// //     double balance=0.0;

// //     public:
// //     void deposite(double amount){
// //         if(amount>0){
// //             balance+=amount;
// //         }
// //     }

// //     void withdraw(double amount){
// //         if(amount>0 && amount<=balance){
// //             balance-=amount;
// //         }
// //     }
// //  double getBalance(){
// //     return balance; 
// //  }
// // };



// // //getter and setter(value set and get)
// // class Student{
// //     private:
// //       int marks;
// //       public:
      
// //       void setMarks(int m){
// //         if(m>=0 && m<=100)
// //         marks=m;
// //         else
// //         cout<<"invalid marks\n";
// //       }

      
// //       int getMarks(){
// //         return marks;
// //       }
// // };


// // class Employee{
// //     private:
// //     string name;
// //     double salary;

// //     public:

// //     void setName(string n){
// //         name=n;
// //     }

// //     void setSalary(double s){
// //         if(s>=0)
// //         salary=s;
// //         else
// //         cout<<"invalid salary\n";
// //     }

// //     double getSalary(){
// //         return salary;
// //     }

// //     void display(){
// //         cout<<name<<" "<<salary<<endl;
// //     }
// // };

// // int main(){
// //     BankAccount acc1;
// //     acc1.deposite(1000);
// //     acc1.withdraw(500);
// //     // acc1.balance=20000;//inaccessible error
// //     cout<<acc1.getBalance();

// //     cout<<endl;

// //     Student s1;
// //     s1.setMarks(80);
// //     s1.setMarks(200);
// //     cout<<s1.getMarks();


// //     cout<<endl;
// //     Employee e1;
// //     e1.setName("nebula");
// //     e1.setSalary(10000);
// //     e1.display();
// //     return 0;
// // }




// //Abstraction

// //Inheritance: inherit properties and behavior from another class
// // class Animal{
// //     public:
// //     void speak(){
// //         cout<<"speaking\n";
// //     }
// // };

// // class Dog:public Animal{
// //     public:
// //     void speak(){
// //         cout<<"barking\n";
// //     }
// // };

// // int main(){
// //     Dog d1;
// //     d1.speak();
// //     return 0;
// // }

// // Parent ka private    →  child access NAHI kar sakta
// // Parent ka protected  →  child access KAR sakta hai, bahar nahi
// // Parent ka public     →  sabko access

// #include <iostream>
// using namespace std;

// // Base Class
// class Shape {
// protected:
//     string color;

// public:
//     void setColor(string c) {
//         color = c;
//     }

//     void display() {
//         cout << "Color: " << color << endl;
//     }
// };

// // Derived Class - Circle
// class Circle : public Shape {
// private:
//     float radius;

// public:
//     void setRadius(float r) {
//         radius = r;
//     }

//     void area() {
//         cout << "Circle Area: " << 3.14 * radius * radius << endl;
//     }
// };

// // Derived Class - Rectangle
// class Rectangle : public Shape {
// private:
//     float length, breadth;

// public:
//     void setDimensions(float l, float b) {
//         length = l;
//         breadth = b;
//     }

//     void area() {
//         cout << "Rectangle Area: " << length * breadth << endl;
//     }
// };

// // int main() {
// //     Circle c;
// //     c.setColor("Red");
// //     c.setRadius(5);
// //     c.display();
// //     c.area();

// //     cout << endl;

// //     Rectangle r;
// //     r.setColor("Blue");
// //     r.setDimensions(4, 6);
// //     r.display();
// //     r.area();

// //     return 0;
// // }


// //Polymorphism: allow a class to have multiple forms
// // 1. Compile-time  →  Function Overloading
// // 2. Runtime       →  Virtual Functions

// class Calculator {
// public:
//     int add(int a, int b) {
//         return a + b;
//     }

//     float add(float a, float b) {   // same naam — alag parameters
//         return a + b;
//     }

//     int add(int a, int b, int c) {  // teen numbers
//         return a + b + c;
//     }
// };

// int main() {
//     Calculator calc;
//     cout << calc.add(2, 3);           // 5
//     cout << calc.add(2.5f, 3.1f);    // 5.6
//     cout << calc.add(1, 2, 3);       // 6
// }

// // virtual functions(runtime)
// // Shape* s;
// // Circle c;
// // s = &c;

// // s->area();   // kaunsa area() call hoga?

// class Shape {
// public:
//     string color;

//     virtual void area() {           // virtual keyword
//         cout << "Shape area\n";
//     }
// };

// class Circle : public Shape {
// public:
//     float radius;

//     void area() override {          // override keyword
//         cout << 3.14 * radius * radius << endl;
//     }
// };

// class Rectangle : public Shape {
// public:
//     float l, b;

//     void area() override {
//         cout << l * b << endl;
//     }
// };

// int main() {
//     Circle c;
//     c.radius = 5;

//     Rectangle r;
//     r.l = 4; r.b = 6;

//     Shape* arr[2];      // Shape pointers ka array
//     arr[0] = &c;
//     arr[1] = &r;

//     for (int i = 0; i < 2; i++) {
//         arr[i]->area();  // runtime pe decide hoga kaunsa area()
//     }
// }


#include <iostream>
using namespace std;

// Base Class
class Shape {
protected:
    string color;

public:
    void setColor(string c) {
        color = c;
    }

    void display() {
        cout << "Color: " << color << endl;
    }

    // Virtual function
    virtual void area() {
        cout << "Area not defined" << endl;
    }
};

// Derived Class - Circle
class Circle : public Shape {
private:
    float radius;

public:
    void setRadius(float r) {
        radius = r;
    }

    void area() override {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }
};

// Derived Class - Rectangle
class Rectangle : public Shape {
private:
    float length, breadth;

public:
    void setDimensions(float l, float b) {
        length = l;
        breadth = b;
    }

    void area() override {
        cout << "Rectangle Area: " << length * breadth << endl;
    }
};

int main() {
    // Objects
    Circle c;
    c.setColor("Red");
    c.setRadius(5);

    Rectangle r;
    r.setColor("Blue");
    r.setDimensions(4, 6);

    // Array of base class pointers
    Shape* arr[2];

    arr[0] = &c;
    arr[1] = &r;

    // Loop
    for (int i = 0; i < 2; i++) {
        arr[i]->display();
        arr[i]->area();   // runtime polymorphism
        cout << endl;
    }

    return 0;
}