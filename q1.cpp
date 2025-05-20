#include<iostream>
using namespace std;

class Student{

    public:
     string sname[5];

    
    void student_name()
    {
        for(int i=0;i<5;i++)
    {
        cout<<"Enter Student Name : ";
        cin>>sname[i];
    }

    for(int i=0;i<5;i++)
    {
        cout<<"Studnet Name is : " <<sname[i]<<endl;
    }
    }
};

class Stdname: public Student{
    
};

int main()
{
    
    Stdname stud;
    stud.student_name();
    return 0;
}