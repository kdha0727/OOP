#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

/**********************/
/*******Problem 4******/
/**********************/
/* ID: 2020191089     */
/* NAME: Dongha Kim   */
/**********************/

void print_seat_state(int first_class, int business_class, int economy_class){

    // Declare constant for max seat
    const int FIRST_MAX=5, BUSINESS_MAX=25, ECONOMY_MAX=50;

    // Print summary of vacant seats
    cout << "current vacant seats" << endl
         << "first class: " << FIRST_MAX - first_class << "/" << FIRST_MAX << endl
         << "business class: " << BUSINESS_MAX - business_class << "/" << BUSINESS_MAX << endl
         << "economy class: " << ECONOMY_MAX - economy_class << "/" << ECONOMY_MAX << endl;

    // Print graphic view of vacant first class seats
    cout << "first class" << endl;
    for (int i = 0; i < FIRST_MAX; i++) {
        if (first_class > 0) {  // If looping seat is used
            first_class -= 1;
            cout << "X";
        }
        else {  // if not used
            cout << "O";
        }
        if (i % 5 == 4) {  // Change line
            cout << endl;
        }
    }

    // Print graphic view of vacant business class seats
    cout << "business class" << endl;
    for (int i = 0; i < BUSINESS_MAX; i++) {
        if (business_class > 0) {  // If looping seat is used
            business_class -= 1;
            cout << "X";
        }
        else {  // if not used
            cout << "O";
        }
        if (i % 5 == 4) {  // Change line
            cout << endl;
        }
    }

    // Print graphic view of vacant economy class seats
    cout << "economy class" << endl;
    for (int i = 0; i < ECONOMY_MAX; i++) {
        if (economy_class > 0) {  // If looping seat is used
            economy_class -= 1;
            cout << "X";
        }
        else {  // if not used
            cout << "O";
        }
        if (i % 5 == 4) {  // Change line
            cout << endl;
        }
    }

}

void add_passenger(int& first_class, int& business_class, int& economy_class, ifstream& infile){
    // Call-by-reference function (this function will mutate arguments)

    // Declare and initialize variables from input file
    int seatType, seatNumber;
    infile >> seatType >> seatNumber;

    // Declare constant for max seat
    const int FIRST_MAX=5, BUSINESS_MAX=25, ECONOMY_MAX=50;

    // Handle different seat type by input (Variable seatType)
    switch (seatType) {
        case 1: {  // First Class
            if (seatNumber + first_class > FIRST_MAX) {  // Print message of full seat
                cout << "full seat" << endl;
            }
            else {
                first_class += seatNumber;  // Add seats to first class
                cout << "add complete" << endl;
            }
            break;
        }

        case 2: {  // Business Class
            if (seatNumber + business_class > BUSINESS_MAX) {  // Print message of full seat
                cout << "full seat" << endl;
            }
            else {
                business_class += seatNumber;  // Add seats to business class
                cout << "add complete" << endl;
            }
            break;
        }
        case 3: {  // Economy Class
            if (seatNumber + economy_class > ECONOMY_MAX) {  // Print message of full seat
                cout << "full seat" << endl;
            }
            else {
                economy_class += seatNumber;  // Add seats to economy class
                cout << "add complete" << endl;
            }
            break;
        }
        // No consideration for wrong option
    }

}

void delete_passenger(int& first_class, int& business_class, int& economy_class, ifstream& infile){
    // Call-by-reference function (this function will mutate arguments)

    // Declare and initialize variables from input file
    int seatType, seatNumber;
    infile >> seatType >> seatNumber;

    // Handle different seat type by input (Variable seatType)
    switch (seatType) {
        case 1: {  // First Class
            if (seatNumber > first_class) {  // Print message of no seat
                cout << "wrong input" << endl;
            }
            else {
                first_class -= seatNumber;  // Delete seats of business class
                cout << "delete complete" << endl;
            }
            break;
        }

        case 2: {  // Business Class
            if (seatNumber > business_class) {  // Print message of no seat
                cout << "wrong input" << endl;
            }
            else {
                business_class -= seatNumber;  // Delete seats of business class
                cout << "delete complete" << endl;
            }
            break;
        }
        case 3: {  // Economy Class
            if (seatNumber > economy_class) {  // Print message of no seat
                cout << "wrong input" << endl;
            }
            else {
                economy_class -= seatNumber;  // Delete seats of business class
                cout << "delete complete" << endl;
            }
            break;
        }
        // No consideration for wrong option
    }
}

int main(){
    int first_class = 0; //MAX: 5
    int business_class = 0; // MAX: 25
    int economy_class = 0; // MAX: 50

    int loopNum;

    ifstream infile("input4.txt");

    infile >> loopNum;

    for (int i = 0; i < loopNum; i++) {
        char menu;
        infile >> menu;
        switch(menu){
            case '1':
                add_passenger(first_class, business_class, economy_class, infile);
                break;
            case '2':
                delete_passenger(first_class, business_class, economy_class, infile);
                break;
            default:
                cout<< "Wrong Input!" << "\n";
        }
    }

    print_seat_state(first_class, business_class, economy_class);
    cout << "end the program" << "\n";

    infile.close();

    return 0;
}