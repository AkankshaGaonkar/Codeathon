#include <iostream>
using namespace std;
int main(){
    int num, sum=0,odd=0,even=0,i;
    cin>>num;
    if(num>=5 && num<=20){
        int num1=1,num2=1;
        for(i=1;i<=num;i++)
        {
            cout<<num1<<" ";
            if(num1 %2 ==0)
            even++;
        else
            odd++;
        sum=num1+num2;
        num1=num2;
        num2=sum;
        
        }
    }
    else{
        cout<<"Invalid input";
        return 0;
    }
    cout<<"\n"<<even<<"\n"<<odd;
}