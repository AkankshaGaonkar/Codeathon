#include <iostream>

using namespace std;
int main()
{
    int n,k,j,m,p;
    cin>>n>>k>>j>>m>>p;
    int ans=0;
    if(k<=0  || n<=0 || j<=0 || m<=0 || p<=0)
    {
        cout<<"Invaid input";
        return 0;
    }
    ans= m/k;
    and= p/j;
    cout<<"no of monkeys left"<n-ans;
    return 0;
}