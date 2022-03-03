#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <cstring>
using namespace std;

/**********************/
/*******Problem 1******/
/**********************/
/* ID: 2020191089     */
/* NAME: Dongha Kim   */
/**********************/

int main(){
    int loopNum;
    char dump[51]; // to ignore '\n' in first line

    ifstream infile("input1.txt");

    infile >> loopNum;
    infile.getline(dump, 51);

    for (int i = 0; i < loopNum; i++){

        // Declare and initialize inputString and length value
        char inputString[51] = {};
        infile.getline(inputString, 51);
        int inputLength=strlen(inputString);

        // Declare and initialize vowel array which refers numbers of each vowel
        int vowel[5] = {0, 0, 0, 0, 0};

        // Loop for each character in input string
        for (int charIndex = 0; charIndex < inputLength; charIndex++) {
            // If character is vowel, add 1 to the number of vowel
            switch (inputString[charIndex]) {
                case 'a': {
                    vowel[0] += 1;
                    break;
                }
                case 'e': {
                    vowel[1] += 1;
                    break;
                }
                case 'i': {
                    vowel[2] += 1;
                    break;
                }
                case 'o': {
                    vowel[3] += 1;
                    break;
                }
                case 'u': {
                    vowel[4] += 1;
                    break;
                }
            }
        }

        // Print the final output
        for (int vowelIndex = 0; vowelIndex < 5; vowelIndex++) {
            cout << vowel[vowelIndex];
            if (vowelIndex != 4) {  // Print whitespace between values
                cout << ' ';
            }
            else {  // Print newline after values
                cout << endl;
            }
        }

    }
    infile.close();

    return 0;
}
