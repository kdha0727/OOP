#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
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
		int lineNum;
		infile >> lineNum;

		/*
		    I used nested for loop.
		    outer for-loop is used for each row, inner for-loop is used for each column.
		*/

		// Loop and print each row
		for (int j = 0; j < lineNum; j++) {  // j is value which means current row.

		    // Print whitespace as much as required.
		    for (int k = 0; k < lineNum - j - 1; k++) {  // k is value which is used to calculate current column.
                cout << " ";
            }

            // Print star as much as required.
		    for (int k = 0; k < 2 * j + 1; k++) {
                cout << "*";
            }

		    // After all output of each line, print end of line.
		    cout << endl;
		}

	}

	infile.close();

	return 0;
}
