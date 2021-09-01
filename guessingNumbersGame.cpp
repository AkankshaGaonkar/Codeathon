#include <iostream>

using namespace std;

int main()
{
    int secretNum=7,guessCount=0,guessLimit=3,guess;
    bool outOfGuess=false;
    while(secretNum!=guess && !outOfGuess){
        if(guessCount<guessLimit){
            cout<<"Enter guess No:";
            cin>>guess;
            guessCount++;
            
        }
        else{
            outOfGuess=true;
        }
    }
        
    if(outOfGuess){
        cout<<"You Lose";
        
    }else{
        cout<<"You Won";
    }
}
    
