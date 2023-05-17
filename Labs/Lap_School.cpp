#include <iostream>
using namespace std;


class school
{
    private:
    string sname;
    string tname;
    int Student_Num=0;
    int Teacher_Num=0;


    public:
    string School_Name;
    void Set_school_name()
		{
			cout << "Enter School name :" << endl;
			cin >> School_Name ;
		}

    void Add_Student_name(string student_name)
    {
        if(Student_Num<200)
        {
            sname=student_name;
            Student_Num++;
        }
        else
        {
            cout << "Not Accepted!" << endl;
        }
    }

    void Add_Teacher_name(string teacher_name)
    {
        if(Teacher_Num<20)
        {
            tname=teacher_name;
            Teacher_Num++;
        }
        else
        {
            cout << "Not Accepted!" << endl;
        }
    }
    void Add_Student()
    {
        Student_Num++;
    }
    void Add_Teacher()
    {
        Teacher_Num++;
    }

     void show_School_Data()
    {
        cout << "Welcome to School"     <<School_Name  << endl;
        cout << "Student number : "     << Student_Num     << endl;
        cout << "teacher number : "     << Teacher_Num << endl;
    }
};




int main()
{
    school S1;

    S1.Add_Student();
    S1.Add_Student();
    S1.Add_Student();
    S1.Add_Student();
    S1.Add_Student();

    S1.show_School_Data();




    return 0;
}