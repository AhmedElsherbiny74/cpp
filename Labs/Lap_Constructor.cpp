/************      OOP Constructors       ***********/

#include <iostream>
#include <string>

using namespace std;

class student
{
    private:
        int age;
        string name;
    public:
       student()
       {
        name = "no name" ;
        age = 0; 
       }
       student(string s, int a)
       {
        age = a;
        name = s ; 
       }
       void display()
       {
        cout <<name << endl << age;
       }
       ~student()
       {
        cout << "bye";
       }
};


int main ()
{
   student ahmed("ahmed" , 24);
   ahmed.display();
    return 0;
}
