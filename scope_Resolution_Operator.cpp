#include <iostream>

using namespace std;
class Cube{
    public:
        int side;
        int getVolume();
};

int Cube::getVolume()
{
    return side*side*side;
};
int main(){
    Cube c1;
    c1.side=4;
    cout<<"Volume of cube="<<c1.getVolume();
}