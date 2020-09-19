#include <iostream>
#include <string>
using namespace std;

int main()
{
    int guessCount, minNumber, maxNumber, randomNumber, guessNum;
    
    while(true){
        cout << "Enter the number of guesses number" << endl;
        cin >> guessCount;
        if(guessCount == 0){
            break;
        }
        cout << "Enter the minimum number" << endl;
        cin >> minNumber;
        cout << "Enter the maximum number" <<  endl;
        cin >> maxNumber;
        
        randomNumber = rand() % (maxNumber - minNumber + 1) + minNumber;
        
        for(int i = 0; i < guessCount; ++i){
            cout << "Enter your guess" << endl;
            cin >> guessNum;
            if(guessNum > randomNumber){
                cout << "Too big" << endl;
            }
            if(guessNum < randomNumber){
                cout << "Too small" << endl;
            }
            if (guessNum == randomNumber){
                cout << "Congratulations!!! You won." << endl;
                break;
            }
        }
            
    }
            
}
