#include <iostream>

using namespace std;
int power(int basenum){
    int pownum;
    cin>>pownum;
    int result=1;
    for(int i=0;i<basenum;i++){
        result=result*pownum;
    }
    return result;
    
}

int main()
{   
    cout<<power(2);
}
