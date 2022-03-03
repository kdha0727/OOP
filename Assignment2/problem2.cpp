#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

/**********************/
/*******Problem 2******/
/**********************/
/* ID: 2020191089     */
/* NAME: Dongha Kim   */
/**********************/

int main(){
    int loopNum;

    ifstream infile("input2.txt");

    infile >> loopNum;
    for (int i = 0; i < loopNum; i++) {

        // Declare and initialize variables
        // length and parity variables are used to save values from infile
        // original and parity_temp variables are used for computing
        int length, original=0, parity_temp=0;
        char parity;
        infile >> length;

        // Loop and compute value
        for (int j = length; j > 0; j--) {

            // Declare and initialize variable
            // which is used to save values from infile
            int bit;
            infile >> bit;

            // Add to original from bit value
            original += bit * pow(2, j);

            // If bit is 1, change parity mode between even and odd
            // 1 means that the number of 1 is odd, 0 is the other way around
            if (bit == 1) {
                if (parity_temp == 0) {
                    parity_temp = 1;
                }
                else {
                    parity_temp = 0;
                }
            }

        }

        // Receive parity information and add 1 to original variable if needed
        infile >> parity;
        if (((parity == 'e') && (parity_temp == 1)) || ((parity == 'o') && (parity_temp == 0))) {
            original += 1;
        }

        // Print the final output
        cout << original << endl;

    }

    infile.close();

    return 0;
}
