#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,temp=0;
	cin>>a>>b>>c;
	temp=b;
	b=a;
	a=temp;
	int ans=a*c;
	int sol=c+b;
	cout<<ans<<" "<<sol<<endl;
}