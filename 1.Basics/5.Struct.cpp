//q. 1603 leeetcode
// // //Struct: userdefined data type which allow us to group diff type of varibale under a single name:

// // // struct name{
// // //     //body
// // // }

// // #include <iostream>
// // #include <algorithm>
// // using namespace std;

// // struct person{//struct(only blueprint no memory allocation)
// //     string name;
// //     int age;
// //     string gender;
// // };

// // // int main(){
// // //     person p1;//object(memory allocation)
// // //     p1.name="Subh";
// // //     p1.age=20;
// // //     p1.gender="Male";
// // //     cout<<p1.name<<" "<<p1.age<<" "<<p1.gender<<endl;
// // // }

// // //we can decalre struct in main in 3 way:

// // int main(){
// //     person p1;
// //     p1.name = "Subh";
// //     p1.age = 20;
// //     p1.gender = "Male";
// //     cout << p1.name << " " << p1.age << " " << p1.gender << std::endl;

// //     //way2: direct initialization
// //     person p2{"Subh", 20, "Male"};
// //     cout << p2.name << " " << p2.age << " " << p2.gender << std::endl;

// //     //way:  Designated initialization (C++20)
// //     person p3 {.name = "Subh", .age = 20, .gender = "Male"}; //order doesn't matter
// //     cout << p3.name << " " << p3.age << " " << p3.gender << std::endl;

// //     return 0;
// // }

// // 2.struct in function:
// #include <iostream>
// #include <string>
// using namespace std;

// struct student
// {
//     string name;
//     int age;
//     float marks;
// };

// memory: int 4 bytes,string: 8 bytes,float: 4 bytes and padding 4 bytes(padding means: )

// void print(student &s)
// {
//     s.marks = 80;
//     cout << s.marks << endl;
// }

// void updateval(student &s)
// {
//     s.marks = 100;
//     cout << s.marks << endl;
// }

// // return struct
// student createstudent(string name, int age, float marks)
// {
//     student s;
//     s.name = name;
//     s.age = age;
//     s.marks = marks;
//     return s;
// };

// int main()
// {
//     student s1 = {"Subh", 20, 90};
//     print(s1); // only copy value pass by value
//     cout << s1.marks << endl;
//     updateval(s1); // orignal value change - pass by ref
//     cout << s1.marks << endl;

//     student s2 = createstudent("Subh", 20, 90);
//     cout << s2.name << " " << s2.age << " " << s2.marks << endl;
//     return 0;
// }

// //class and struct- only diff is struct be default(public) and class by default(private)
// //store in memory: size=sum of all data type size

// class student{
//     public:
//     string name;
//     int age;
//     float marks;
// };

// //object
// student s1;
// student s2;//different memory allocation

// function :
//  class student{
//      public:
//      int marks;

//     void display(){
//         cout<<marks; //this pointer(address of current object)
//     }
// };

// static and normal: memory allocation
// static: every object share same memory
// normal: every object have different(own) memory

#include <iostream>
using namespace std;

class Student
{
public:
    int marks;
    static int schoolcode;
};

int Student::schoolcode = 100;

struct Book
{
    string title;
    string author;
    float price;

    void display()
    {
        cout << "Title: " << title << endl
             << "Author: " <<author << endl
             << "Price: " <<price << endl;
    }
};



struct A{
    int x;
};





int main()
{
    Student s1, s2;
    s1.marks = 90;
    s2.marks = 89;
    cout << s1.marks << " " << s2.marks << endl;
    cout << s1.schoolcode << " " << s2.schoolcode << endl;

    Student::schoolcode = 200;
    cout << s1.schoolcode << " " << s2.schoolcode << endl;

    Book B1 = {"C++", "Subh", 123.89};

    Book *p1=&B1;
    p1->display();

    //    B1.title="C++";
    //    B1.author="Subh";
    //    B1.price=123.89;

    // cout << "Title: " << B1.title << endl
    //      << "Author: " << B1.author << endl
    //      << "Price: " << B1.price << endl;
    B1.display();

cout<<endl;
    Book b[2]={ {"The Alchemist", "Paulo Coelho", 299},
    {"Atomic Habits", "James Clear", 399}};

    Book *p2=b;
    for(int i=0;i<2;i++){
        p2[i].display();
    }



     A a1={10};
    // A a2=a1;
    // a2.x=12;
    // cout<<a1.x;

     A* p0= &a1;
    A* p8 = p0;

    p8->x = 99;

    cout << a1.x;

    return 0;
}
