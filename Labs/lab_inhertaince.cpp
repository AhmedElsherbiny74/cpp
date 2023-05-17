#include <iostream>
#include <string>

using namespace std;

class person
{
    private:
        string name;
        int age;
        bool type;

    public:
        person(string local_name,int local_age,bool local_type):name(local_name),age(local_age),type(local_type)
        {
            cout<<"hello person"<<endl;
        }
        void Set_Name(string local_name)
        {
            name = local_name;
        }    

        void Set_Age(int local_age)
        {
            age = local_age;
        }
        void Set_Type(bool local_type)
        {
            type = local_type;
        }
        void Display(void)
        {
            cout<< "name:"<<name<<endl;
            cout<< "age:"<<age<<endl;
            cout<< "type:"<<type<<endl;
        }
};
/*******************************/
class employee : public person
{
    private:
        int total_hr;
        int salary;
    public:

        void Set_Totalhr(int local_hr)
        {
            total_hr = local_hr;
        }    
        void Set_Salary(int local_salary)
        {
            salary = local_salary;
        }
        void Display()
        {
            person::Display();
            cout<<"total hours work "<<total_hr<<endl;
            cout<<"your salary is "<<salary<<endl;
        }
};
class student: public person
{
    private:
        float GPA;
        int level;

    public:
        student(string n,int a,bool t,float local_GPA,int lev):person(n,a,t),GPA(local_GPA),level(lev)
        {
            cout<<"hello student"<<endl;
        }
        void Set_Studet_Gpa(float local_gpa)
        {
            GPA=local_gpa;
        }
        void Set_Student_Level(int Local_Level)
        {
            level = Local_Level;
        }
        void Display()
        {
            person::Display();
            cout<<"GPA"<<GPA<<endl;
            cout<<"Level"<<level<<endl;
        }
};
class athelit :public student
{
    private:
        int rank;
        int gold_win;

    public:
        void Set_Rank(int local_rank)
        {
            rank=local_rank;
        } 
        void Set_Gold(int Local_win)
        {
            gold_win = Local_win;
        }
        void Display()
        {
            student::Display();
            cout<<"rank : "<<rank<<endl;
            cout<<"times of win gold" << gold_win<<endl;
        }
};

int main()
{

    // student s1;
    // s1.Set_Name("ahmed");
    // s1.Set_Age(12);
    // s1.Set_Type(true);
    // s1.Display();

    // person p1;

    // p1.Set_Name("ahmed");
    // p1.Set_Age(20);
    // p1.Set_Type(true);
    // p1.Display;

    // employee e1;
    // e1.Set_Name("ahmed");
    // e1.Set_Age(12);
    // e1.Set_Type(true);
    // e1.Set_Totalhr(8);
    // e1.Set_Salary(2000);
    // e1.Display();

    // athelit a1;
    // a1.Set_Name("ahmed");
    // a1.Set_Age(12);
    // a1.Set_Type(true);
    // a1.Set_Student_Level(1);
    // a1.Set_Studet_Gpa(3.4);
    // a1.Set_Gold(1);
    // a1.Set_Rank(2);
    // a1.Display();

    student s1("ahmed",12,true,1,3.4);
    s1.Display();


    return 0;
}