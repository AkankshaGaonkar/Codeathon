#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=2 && n<=5 && n%2==0 ){
    cout<<"Not Weird"<<endl;
    }
     else if(n>=6 && n<=20 && n%2!=0)
    {
        cout<<"Weird"<<endl;
    }
    else if(n>20 && n<=100 && n%2==0){
    cout<<"Not Weird"<<endl;
    }
    else if(n>=1 && n<=100 && n%2!=0)
    {
        cout<<"Weird"<<endl;
    }
    else 
    cout<<"Weird"<<endl;
    return 0;
    
}
