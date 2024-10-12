#include <iostream>
using namespace std;

int main() {
    // a one-condition if/else statement (i.e. "if x == true") 
    if (20 > 18) {
        cout << "20 is greater than 18";
    }
    
    // a multi-condition if/else statement (i.e. "if x>0 && y< 10) 
    if (30 > 15 && 28 > 7){
        cout << "30 is greater than 15 AND 28 is less than 7";
    } else{
        cout << "None of these comparisons are true";
    }

    // if/elif/else statements 
    if (30 < 15){
        cout << "30 is less than 15";
    } else if (28 < 7){
        cout << "28 is less than 7";
    } else{
        cout << "None of these comparisons are true";
    }

    // short-circuit logic 
    if (30 < 15 && 28 > 7){
        cout << "30 is less than 15 AND 28 is greater than 7";
    }

    // a switch-case statement 
    int num = 4;
    switch(num){
            // a fall through case
            case 4:
            case 9:
                cout << "You're square!";
            case 2:
            case 8:
                cout << "You think too binary!";
                break;
            case 1:
                cout << "You're such a loner!";
                break;
            case 3:
            case 7:
                cout << "You're great";
                break;
            default:
                cout << "Reconsider your options and try again.";
        }

    return 0;
}
