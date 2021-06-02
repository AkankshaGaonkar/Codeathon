#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    // Complete this function
    cin >> n;
    int ar[n];
    int max = INT_MIN;
    int count = 0;
    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }
    for(int i=0; i<n; i++){
        if(ar[i] >= max){
            max = ar[i];
        }
    }
    for(int i = 0; i < n; i++){
        if (ar[i] == max){
            count++;
        }
    }
    cout << count;
    return 0;
}