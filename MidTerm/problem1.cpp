#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;


int main(){
	int loopNum;

	ifstream infile("input1.txt");

	infile >> loopNum;
	for (int i = 0; i < loopNum; i++) {
		int lineNum;
		infile >> lineNum;
		
		// Problem1 :
		// Print a pyramid of stars by the rule given below
		// 1. The top row starts from a star at the center.
		// 2. The pyramid is of N number of lines.
		// 3. The number of stars per line increases by one with a space in between.

        /*
            I used nested for loop.
            outer for-loop is used for each row, inner for-loop is used for each column.
        */

        // Loop and print each row
        for (int j = 1; j <= lineNum; j++) {  // j is value which means current row.

            // Print whitespace as much as required.
            for (int k = 0; k < lineNum - j ; k++) {  // k is value which is used to calculate current column.
                cout << " ";
            }

            // Print star as much as required.
            for (int k = j; k > 0; k--) {  // k is value which is used to calculate current column.
                cout << ((k==1)? "*": "* ");  // If not last, print whitespace
            }

            // After all output of each line, print end of line.
            cout << endl;
        }

	}

	infile.close();

	return 0;
}
