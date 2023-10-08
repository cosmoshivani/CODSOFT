Solution 1: Using Boolean values. No assistance to correct your guess.

#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
    int rndm = 1 + (rand() % 10);
    int x;

    while(x != rndm) {    
    
    cout << "Type a number: ";
    cin >> x;
    
    if (x <= 0 || x > 10) {
        cout << "Invalid Input"; 
        return 0;
    }
    
    cout << "Guessed Number > Random Number: " << (x > rndm)<<endl;
    cout << "Guessed Number < Random Number: " << (x < rndm)<<endl;
    cout << "Guessed Number == Random Number: " << (x == rndm)<<endl;
    
   
        
    }
    
}


Solution 2: Output tells you how far off the guessed number is

#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
    int rndm = 1 + (rand() % 10);
    int x;
    
    while(x != rndm) {    

    cout << "Type a number: ";
    cin >> x;
    
    if (x <= 0 || x > 10) {
        cout << "Invalid Input"; 
        return 0;
    }
    
    if(x > rndm) {
            cout << "Guessed Number is greater than the original number by " << x-rndm <<endl;
    }
    else if(x < rndm) {
            cout << "Guessed Number is less than the original number by " << rndm-x <<endl;
    }
    else if(x == rndm) {
            cout << "Guessed Number is equal to the original number. yayy!! "<<endl;
    }
        
        
    }
    
}


