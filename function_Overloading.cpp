#include <iostream>

using namespace std;
int sum(int x,int y)
{
    cout<<x+y;
};
int sum(int x,int y,int z){
    cout<<x+y+z;
};
int main(){
    sum(10,20);
    cout<<"\n";
    sum(30,10,10);
}