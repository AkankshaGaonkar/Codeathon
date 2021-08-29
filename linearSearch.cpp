#include <iostream>
 

using namespace std;

int main()
{
    int n, i,arr[n],key;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key){
            cout<<i+1;
            break;
        }
    }
    if(i==n)
    {
        cout<<"No Element Found";
    }
}
