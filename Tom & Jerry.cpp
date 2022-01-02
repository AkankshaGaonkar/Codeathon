#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int ts;
        cin>>ts;
        if(ts%2==0){
            while(ts%2==0){
                ts=ts/2;
            }
            cout<<ts/2<<endl;
        }
        else{
            cout<<(ts-1)/2<<endl;
        }
    }
}