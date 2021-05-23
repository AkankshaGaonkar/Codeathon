#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
const int maxn=2;
int t,n,cost[maxn],used[maxn];
cin>>t;
while(t--)
{
    used[0]=used[1]=0;
    for(int i=0;i<maxn;i++)
    cin>>cost[i];
    cin>>n;
    for(int i=0;i<n;i++)
    for(int j=0;j<maxn;j++){
        int x;
        cin>>x;
        used[j]+=x;
    }
    cout<<min(cost[0]*used[0]+cost[1]*used[1],cost[1]*used[0]+cost[0]*used[1])<<endl;

    }
}