#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string lower = "aeiou";
	string upper ="AEIOU";
	while(t--)
	{
		string s;
		cin>>s;
		int count=0,count1=0;
		for(int i=0;i<5;i++)
		{
		for(int j=0;j<s.size();j++)
			{
				if(lower[i]==s[j])
				{
					count++;
					break;
				}
			}
		}
		for(int i=0;i<5;i++)
		{
		for(int j=0;j<s.size();j++)
			{
				if (upper[i]==s[j])
				{
					count1++;
					break;
				}
			}
		}		
		if(count==5 || count1==5)
			cout<<"lovely string"<<endl;
		else
		 	cout<<"ugly string"<<endl;
	}
}
