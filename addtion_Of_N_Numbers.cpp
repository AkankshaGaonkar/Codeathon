#include <iostream>
using namespace std;

int main() {
    int N,count=0;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        count=count+i;
    }
    cout<<count;
	return 0;
}
