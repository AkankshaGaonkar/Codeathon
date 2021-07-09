
#include <iostream>

using namespace std;
class Student{
    private:
    int rollno;
    public:
    int getrollno(){
        return rollno;
    }
    void setrollno(int i){
        rollno=i;
    }
};
int main(){
    Student a;
    a.setrollno(1);
    cout<<a.getrollno();
}