#include <iostream>
using namespace std;
void swap(int *P1, int *P2)
{
    int temp = *P1;
    *P1 = *P2;
    *P2 = temp;
}


int main() {
	// your code goes here
	int D1,V1,D2,V2,P;
	cin>>D1>>V1>>D2>>V2>>P;
	int v = 0,d = 0;
	if(D1==D2)
	{
	    while(v<P)
	    {
	        v += (V1+V2);
	        d++;
	    }
	    cout<<d+(D1-1)<<endl;
	}
	else
	{
	    bool done=false;
	    if(D1>D2)
	    {
	        int temp = D2;
	        while(D2<D1)
	        {
	            v += V2;
	            D2++;
	            d++;
	            if(v >= P)
	            {
	                done = true;
	                break;
	            }
	        }
	        if(done)
	        {
	            cout<<(temp-1)+d<<endl;
	        }
	        else
	        {
	            v+=(V1+V2);
	            d++;
	            if(v >= P)
	            {
	                cout<<(temp-1)+d<<endl;
	            }
	            else
	            {
	                while(v < P)
	                {
	                    v+=(V1+V2);
	                    d++;
	                }
	                cout<<d+(temp-1)<<endl;
	            }
	        }
	    }
	    else
        {
            swap(&D1, &D2);
            swap(&V1, &V2);
            int temp = D2;
            while(D2 < D1)
            {
                v+= (V2);
                D2++;
                d++;
                if(v >= P)
                {
                    done = true; 
                    break;
                }
            }
            if(done)
            {
                cout << (temp - 1) + d << endl;
            }
            else
            {
                v += (V1 + V2);
                d++;
                if(v >= P)
                {
                    cout << (temp - 1) + d<<endl;
                }
                else
                {
                    while(v < P)
                    {
                        v +=(V1 + V2);
                        d++;
                    }
                    cout << d + (temp - 1)  <<endl;
                }
            }
        }
        
    }
    return 0;
}

