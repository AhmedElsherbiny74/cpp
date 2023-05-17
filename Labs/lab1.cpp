#include <iostream>
#include <string>

using namespace std;

class person 
{
	private :
		string name ;
		int age ;
		bool type ;
	
	public :
		/*
		person(string name_Local , int Age_local , bool type_local):name(name_Local) , age(Age_local) , type(type_local)
		{
			cout<< "hi 1 " << endl ;
		}
		*/
		void Set_Person_Name(string name_Local)
		{
			name = name_Local ;
		}
	
		void Set_Person_Age(int Age_local) 
		{
			age = Age_local ;
			
		}
		void Set_Person_Type (bool type_local)
		{
			type = type_local ;
			
		}
		virtual void Display (void)
		{
			cout << "name : " << name << endl ;
			cout << "age : " << age << endl ;
			cout << "type : " << type << endl ;
					
		}
		
		~person()
		{
			cout << "Good bye1" << endl ;
		}
		
	
};


class student : virtual public person
{
	private :
		float GPA ;
		int Level ;
	public :
		/*
		student( string name_Local , int Age_local , bool type_local,float GPA_Local , int Level_Local):GPA(GPA_Local) , Level(Level_Local) , person(name_Local , Age_local , type_local)
		{
			cout<< "hi 2 " << endl ;
		}
		*/
		void Set_Student_GPA(float GPA_Local)
		{
			GPA = GPA_Local ;
		}
		void Set_Student_Level(int Level_Local)
		{
			Level = Level_Local ;
		}
		void Display()
		{
			person::Display();
			cout << "GPA: "<< GPA << endl ;
			cout << "Level: "<< Level << endl ;
			
		}
		~student()
		{
			cout << "Good bye2" << endl ;
		}
};
	
class employee :virtual public person
{
	private :
		float Salary ;
		int Bonus ;
	public :
		void Set_employee_Salary(float Salary_Local)
		{
			Salary = Salary_Local ;
		}
		void Set_employee_Bonus(int Bonus_Local)
		{
			Bonus = Bonus_Local ;
		}
		void Display()
		{
			person::Display();
			cout << "Salary: "<< Salary << endl ;
			cout << "Bonus: "<< Bonus << endl ;
			
		}
};	

class athlete : public student
{
	private :
		string Sport ;
		int Degree ;
	public :
		void Set_athlete_Sport(string Sport_Local)
		{
			Sport = Sport_Local ;
		}
		void Set_athlete_Degree(int Degree_Local)
		{
			Degree = Degree_Local ;
		}
		void Display()
		{
			student::Display();
			cout << "Sport: "<< Sport << endl ;
			cout << "Degree: "<< Degree << endl ;
			
		}
};

class student_employee : public student , public employee
{
	private :
		int work_hour  ;
		int study_hour ;
	
	
	public :
		void Set_work_hour(int Local_work)
		{
			work_hour = Local_work ;
		}
		
		void Set_study_hour(int Local_study)
		{
			study_hour = Local_study ;
		}
		void Display()
		{
			student::Display();
			employee::Display();
			cout << "work_hour: "<< work_hour << endl ;
			cout << "study_hour: "<< study_hour << endl ;
			
		}
		
	
};
class course : virtual public student_employee 
{
	private :
		string course_name  ;
		
	
	public :
		void Set_course_name(string Local_course)
		{
			course_name = Local_course ;
		}
		void Display()
		{
			student_employee::Display();
			cout << "course_name: "<< course_name << endl ;
		}
		
	
};

int main()
{	
	/*
	person p1 ;
	p1.Set_Person_Name("Ahmed");
	p1.Set_Person_Age(20);
	p1.Set_Person_Type(true);
	p1.Display();
	cout <<"*******************"<<endl;
	*/
	//student s1("ahmed", 10 , true , 2.5, 10) ;
	/*
	s1.Set_Person_Name("Ali");
	s1.Set_Person_Age(20);
	s1.Set_Person_Type(true);
	s1.Set_Student_GPA(3.62);
	s1.Set_Student_Level(3);
	*/
	//s1.Display();
	
	//cout <<"*******************"<<endl;
	/*
	employee e1 ;
	e1.Set_Person_Name("Ahmed");
	e1.Set_Person_Age(30);
	e1.Set_Person_Type(true);
	e1.Set_employee_Salary(1500);
	e1.Set_employee_Bonus(500);
	e1.Display();
	
	cout <<"*******************"<<endl;
	
	athlete a1 ;
	a1.Set_Person_Name("nahass");
	a1.Set_Person_Age(25);
	a1.Set_Person_Type(true);
	a1.Set_Student_GPA(3.62);
	a1.Set_Student_Level(3);
	a1.Set_athlete_Sport("Football");
	a1.Set_athlete_Degree(4);
	a1.Display();
	
	
	cout <<"*******************"<<endl;
	*/
	course m1 ;
	m1.Set_Person_Name("nahass");
	m1.Set_Person_Age(25);
	m1.Set_Person_Type(true);
	m1.Set_Student_GPA(3.62);
	m1.Set_Student_Level(3);
	m1.Set_employee_Salary(1500);
	m1.Set_employee_Bonus(500);
	m1.Set_course_name("Physics");
	m1.Display();
	
	
	return 0 ;
}