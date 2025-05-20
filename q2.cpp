#include<iostream>
using namespace std;

class Student{
    public:
        string std_name;
        int marks;

        void student_name()
        {
            cout<<"Enter Student Name :";
            cin>>std_name;
        }
};

class Marks : public Student{
    public:
        int mark;

    public:
        void setmarks()
        {
            int mark[3];

            for(int i=0;i<3;i++)
            {
                cout<<"Enter Marks  : ";
                cin>>mark[i];
            }
        }    
};

class Result: public Marks{
    public:
           int total=0;
            
           float percentage=0;

    public:
        void calculation()
        {
            for(int i=0 ; i<=3 ;i++)
            {
                total += mark;
            }

            percentage=total/3;
        }

        void display()
        {
            cout<<"Student Name: "<<std_name<<endl;
            cout<<"Marks "<<endl;

            for(int i=0 ;i<3;i++)
            {
                cout<<mark<<endl;
            }
        } 
};



int main()
{
    Result obj;

    obj.student_name();
    obj.setmarks();
    obj.display();

    return 0;
}
