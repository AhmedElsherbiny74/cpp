#include <iostream>
#include <string>

using namespace std;
//using namespace governorate;
namespace governorate
{
    namespace Mansoura
    {
        string arr[100]; 
        int index = 0 , peopleCounter = 0 , tempval = 0;

        template<typename S>
        void addNewName(S name)
        {
            arr[index] = name;
            index++;
            peopleCounter++;
        }

        template<typename S>
        void deletename(S name)
        {
        
            for(int i = 0; i < index; i++)
            {
                if(arr[i] == name)
                {
                    arr[i] = "DELETED";
                    tempval = i;
                }
            }
            if(tempval != 0)
            {
                peopleCounter--;
            }
            else
            {
                /*do nothing*/
            }
            
        }

        void printnames()
        {
            if(peopleCounter == 0)
            {
                cout<< "the city is empty" << endl;
            }
            else
            {
                for(int i = 0; i < index; i++)
                {
                    if(arr[i] == "DELETED")
                    {
                        continue;
                    }
                    else
                    {
                        cout << arr[i] << endl;
                    }
                }
            }
        }

        void peoplenumber()
        {
            cout << "people size is : " << peopleCounter << endl;
        }

        void delete_All()
        {
            for(int i = 0; i < index; i++)
            {
                arr[i] = "NULL";
            }
            index = 0;
            peopleCounter = 0;
        }
    }


    namespace cairo
    {
        string arr[100]; 
        int index = 0 , peopleCounter = 0 , tempval = 0;

        template<typename S>
        void addNewName(S name)
        {
            arr[index] = name;
            index++;
            peopleCounter++;
        }

        template<typename S>
        void deletename(S name)
        {
        
            for(int i = 0; i < index; i++)
            {
                if(arr[i] == name)
                {
                    arr[i] = "DELETED";
                    tempval = i;
                }
            }
            if(tempval != 0)
            {
                peopleCounter--;
            }
            else
            {
                /*do nothing*/
            }
            
        }

        void printnames()
        {
            if(peopleCounter == 0)
            {
                cout<< "the city is empty" << endl;
            }
            else
            {
                for(int i = 0; i < index; i++)
                {
                    if(arr[i] == "DELETED")
                    {
                        continue;
                    }
                    else
                    {
                        cout << arr[i] << endl;
                    }
                }
            }
        }

        void peoplenumber()
        {
            cout << "people size is : " << peopleCounter << endl;
        }

        void delete_All()
        {
            for(int i = 0; i < index; i++)
            {
                arr[i] = "NULL";
            }
            index = 0;
            peopleCounter = 0;
        }
    }

    namespace sina
    {
        string arr[100]; 
        int index = 0 , peopleCounter = 0 , tempval = 0;

        template<typename S>
        void addNewName(S name)
        {
            arr[index] = name;
            index++;
            peopleCounter++;
        }

        template<typename S>
        void deletename(S name)
        {
        
            for(int i = 0; i < index; i++)
            {
                if(arr[i] == name)
                {
                    arr[i] = "DELETED";
                    tempval = i;
                }
            }
            if(tempval != 0)
            {
                peopleCounter--;
            }
            else
            {
                /*do nothing*/
            }
            
        }

        void printnames()
        {
            if(peopleCounter == 0)
            {
                cout<< "the city is empty" << endl;
            }
            else
            {
                for(int i = 0; i < index; i++)
                {
                    if(arr[i] == "DELETED")
                    {
                        continue;
                    }
                    else
                    {
                        cout << arr[i] << endl;
                    }
                }
            }
        }

        void peoplenumber()
        {
            cout << "people size is : " << peopleCounter << endl;
        }

        void delete_All()
        {
            for(int i = 0; i < index; i++)
            {
                arr[i] = "NULL";
            }
            index = 0;
            peopleCounter = 0;
        }
    }
}
int main()
{
    governorate::Mansoura::addNewName("a");
    governorate::Mansoura::addNewName("b");
    governorate::sina::addNewName("c");
    governorate::cairo::addNewName("d");

    //governorate::Mansoura::printnames();
    //governorate::Mansoura::peoplenumber();
    //cout << " after delete" << endl;

    governorate::Mansoura::deletename("c");
    //cout << " -------------------------" << endl;

    //governorate::dumyat::addNewName("ali");

    governorate::Mansoura::printnames();
    cout << " -------------------------" << endl;

    
    return 0;
}