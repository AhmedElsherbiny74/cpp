#include <iostream>
#include <string>

using namespace std;

class Student
{

    public:
    int age ;
    int anything ;
    Student(int a,int b):age(a),anything(b)
    {

    } 

    Student operator --(int)
    {
        int temp1 = age - 1;
        int temp2 = anything -1;
        return Student(temp1,temp2);
    }

    Student operator --()
    {
        int temp1 = age -1;
        int temp2 = anything -1;
        return Student(temp1,temp2);
    }

    Student operator ++(int)
    {
        int temp1 = age +1;
        int temp2 = anything +1;
        return Student(temp1,temp2);
    }

    Student operator ++()
    {
        int temp1 = age +1;
        int temp2 = anything +1;
        return Student(temp1,temp2);
    }

    Student operator +(Student input)
    {
        int temp1_age = age;
        int temp1_anything = anything;

        int temp2_age = input.age;
        int temp2_anything = input.anything;

        int temp1 = temp1_age + temp2_age;
        int temp2 = temp1_anything + temp2_anything;
        return Student(temp1,temp2);
    }

    Student operator -(Student input)
    {
        int temp1_age = age;
        int temp1_anything = anything;

        int temp2_age = input.age;
        int temp2_anything = input.anything;

        int temp1 = temp1_age - temp2_age;
        int temp2 = temp1_anything - temp2_anything;
        return Student(temp1,temp2);
    }

    Student operator *(Student input)
    {
        int temp1_age = age;
        int temp1_anything = anything;

        int temp2_age = input.age;
        int temp2_anything = input.anything;

        int temp1 = temp1_age * temp2_age;
        int temp2 = temp1_anything * temp2_anything;
        return Student(temp1,temp2);
    }

    Student operator /(Student input)
    {
        int temp1_age = age;
        int temp1_anything = anything;

        int temp2_age = input.age;
        int temp2_anything = input.anything;

        int temp1 = temp1_age / temp2_age;
        int temp2 = temp1_anything / temp2_anything;
        return Student(temp1,temp2);
    }

    ~Student()
    {
    }
};

int main()
{

    Student s1(10,20);
    Student s2 = s1++;

    Student s3 = s1--;
            //   
    Student s4 = (s1 * s2) + s3 / s1 + s2;

    cout << "Age      : " << s4.age      << endl;
    cout << "Anything : " << s4.anything << endl;






















    // Student S1(10,10);

    // Student S2 = S1--;
    // Student S3 = S2--;

    // cout  << "S2 age      : " << S2.age << endl;
    // cout  << "S2 anything : " << S2.anything << endl;

    // cout  << "S3 age      : " << S3.age << endl;
    // cout  << "S3 anything : " << S3.anything << endl;

    // cout  << "S1 age      : " << S1.age << endl;
    // cout  << "S1 anything : " << S1.anything << endl;

    // S2 = S2++;
    // S2 = S2++;
    // S2 = S2++;
    // S2 = S2++;
    // S2 = S2++;
    // S2 = S2++;
    // cout  << "S2 age      : " << S2.age << endl;
    // cout  << "S2 anything : " << S2.anything << endl;
    return 0;
}