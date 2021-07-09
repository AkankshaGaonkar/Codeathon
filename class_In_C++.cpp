#include <iostream>

using namespace std;
class Student{
    public:
    int rollno;
    string name;
};

int main()
{
    Student a;
    Student b;
    a.rollno=1;
    b.rollno=2;
    a.name="ashu";
    b.name="anu";
    cout<<"Name of 1st student is "<<a.name<<" and roll no of student is "<<a.rollno<<"\n";
    cout<<"Name of 2nd student is "<<b.name<<" and roll no of student is "<<b.rollno;

    return 0;
}