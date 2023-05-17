#include <iostream>

using namespace std;

class faculty
{
private:

     int students=0;
    int doctors=0;
    static int counter;
public:
    static void sum(int n1,int n2)
    {
       // counter++;

        cout<<"sum ="<<n1+n2<<endl;
    }

    void Get_fuclty_data();
    faculty operator ++()
    {
        students++;
        doctors++;
        return faculty(students,doctors);

    }
     faculty operator ++(int)
    {
        int t1,t2;
        t1=students;
        t2=doctors;
        students++;
        doctors++;
        return faculty(t1,t2);

    }
     faculty operator --()
    {
        students--;
        doctors--;
        return faculty(students,doctors);

    }
     faculty operator --(int)
    {
        int t1,t2;
        t1=students;
        t2=doctors;
        students--;
        doctors--;
        return faculty(t1,t2);

    }

    ~faculty()
    {
        cout<<"good bye"<<endl;
    }
    faculty(int copy_students,int copy_doctors):students(copy_students),doctors(copy_doctors)
    {


    }
};

int main()
{
    faculty f1(100,10);
    faculty f2=--f1;
    f2.Get_fuclty_data();
    cout<<"------------------------------"<<endl;
    faculty f3=++f2;
    f3.Get_fuclty_data();


    return 0;
}
    void faculty::Get_fuclty_data()
    {
        cout<<"number of students: "<<students<<endl;
        cout<<"number of doctors: "<<doctors<<endl;
    }