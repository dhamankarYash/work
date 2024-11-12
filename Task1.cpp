#include<bits/stdc++.h>
using namespace std;

int main() {
    
    srand(static_cast<unsigned>(std::time(0)));

    
    int targetNumber = rand() % 1000 + 1;

    int guess;

    cout<<"A number has been generated."<<endl;

    while (true) {
        cout<<"Enter your guess: ";
        cin>>guess;


        if (guess < targetNumber) {

            cout<< "Too low! Try again." <<endl;

        } 
        else if (guess > targetNumber) {
            cout<< "Too high! Try again."<<endl;
        } 
        else {
            cout<< "Congratulations! You guessed the correct number!" <<endl;
            break;
        }
    }

    return 0;
}