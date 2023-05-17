#include <iostream>
#include <string>

using namespace std;

class Hospital 
{
    private:
    int Patient_num=0;
    int Doctors_num;
    int Available_Rooms=100;

   
    
    public:
    string name;
     typedef struct patient
    {   
        string Patient_Name;
        int Patient_ID;
        string status;
        string gender;
    }Patient;

    Patient Patients[100];


    void AddPatient(string Patient_Name,int Patient_ID,string status,string gender)
    {
        Patients[Patient_ID-1].Patient_ID= Patient_ID;
        Patients[Patient_ID-1].Patient_Name= Patient_Name;
        Patients[Patient_ID-1].status= status;
        Patients[Patient_ID-1].gender= gender;
        Patient_num++;
        Available_Rooms--;
    }
    void ViewPatient(int ID)
    {   
        int temp = -1;
        for(int i=0;i<100;i++)
        {
            if(Patients[i].Patient_ID==ID)
            {
                temp = i;
                break;
            }
        }
        if(temp!=-1)
        {
            cout<< "Patient ID is :"<<Patients[temp].Patient_ID<<endl;
            cout<< Patients[temp].gender<<endl;
            cout<< Patients[temp].Patient_Name<<endl;
            cout<< Patients[temp].status<<endl;

        }
        else
        {
            cout<<"ID doesn't exists!!"<<endl;
        }
    }
    
    void Set_Doctors_num(int Doctors)
    {
        if (Doctors<10)
        {
            Doctors_num = Doctors;
        }
    }

   
    void display_data(void)
    {
       cout<< "Total number of patients is: "<<Patient_num<<endl;
       cout<< "Total number of doctors is:  "<<Doctors_num<<endl;
       cout<< "Available Rooms number is:   "<<Available_Rooms<<endl;
    }
};

int main()
{   
    Hospital hospital1;
    hospital1.name="Al-Elsherbiny Hosptial";
    hospital1.Set_Doctors_num(5);
    string Patient_Name;
    int Patient_ID;
    string status;
    string gender;
    int temp=0,temp2;

    cout<<"************************       -> Welcome To Hospitals Management systems  <-    *********************************"<<endl;
    while (1)
    {
        
        cout<<"1)Add new Patient" <<endl;
        cout<<"2)View Patient Data" <<endl;
        cout<<"3)View Hospital Data" <<endl;
        cout<<"4)Exit" <<endl;
        cout<<"your Choise :";
        cin >> temp2;
        switch (temp2)
        {
        case 1: cout<<"Enter Patients Name: ";
                cin >> Patient_Name;
                cout<< "Enter Patients ID: ";
                cin >> Patient_ID;
                cout<< "Enter Patients Status: ";
                cin >> status;
                cout<< "Enter Patients Gender: ";
                cin >> gender;
                cout<< "Data added successfully "<<endl;
                hospital1.AddPatient(Patient_Name,Patient_ID,status,gender);
            break;

        case 2: cout<<"Enter Patients ID: " <<endl;
                cin >> Patient_ID;
                hospital1.ViewPatient(Patient_ID);
        break;

        case 3: hospital1.display_data();
                
        break;
        case 4: temp=1;
        break;
                
        
        default: 
            break;
        }
        if(temp==1)
        {
            break;
        }
    }
    return 0;
}