// conditional stateme: allow to make decision based on certion condition

// if statement : used to execute a block of code if a condition is true
// else statement: used to execute a block of code if a condition is false

#include <iostream>
using namespace std;

int result(int marks)
{
    if (marks > 90)
    {
        cout << "A grade" << endl;
    }
    else if (marks > 80)
    {
        cout << "B grade" << endl;
    }
    else if (marks > 70)
    {
        cout << "C grade" << endl;
    }
    else
    {
        cout << "D grade" << endl;
    }
}

int agecalu(int age)
{
    if (age >= 18)
    {
        cout << "Be mature now!... Okay, okay, I'm kidding. Don't change, just be you." << endl;
    }
    else
    {
        cout << "Bro is still playing the tutorial level of life.... Go enjoy snacks, naps, and zero responsibilities because adulting is full of bugs and unpaid side quests!" << endl;
    }
}
int main()
{

    int marks;
    cin >> marks;
    result(marks);

    int age;
    cin >> age;
    agecalu(age);
    return 0; // end of progress
}
