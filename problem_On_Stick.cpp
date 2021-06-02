#include <iostream>
#include<unordered_set>
using namespace std;
int main() {
	int test_cases;
	cin>>test_cases;
	while(test_cases--)
	{
	    int trees,height;
	    cin>>trees;
	    unordered_set<int>cutter;
	    for(int i=0;i<trees;i++)
	    {
	        cin>>height;
	        if(height!=0)
	        cutter.insert(height);
	    }
	    
	    cout<<cutter.size()<<endl;
	    
	}
	
	return 0;
}