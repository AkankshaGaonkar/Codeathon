
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void convert(string& s){

       s[0]= toupper (s[0]);
}

int main()
{ 
    string s;
    getline(cin, s);
    convert(s);
    cout<<s<<endl;
    return 0;
    
    
    
}
