#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

/**********************/
/*******Problem 1******/
/**********************/
/* ID:                */
/* NAME:              */
/**********************/

int main(){
	int loopNum;

	ofstream outfile;
	outfile.open("output1.txt");

	cout << "Enter the number of interations for the loop: ";
	cin >> loopNum;

	for (int i = 0; i < loopNum; i++) {
		int a, b, c, d;
		cout << "Enter the coefficients of the equation [y = ax^3 + bx^2 + cx + d]" << endl;
		cout << "a: "; cin >> a;
		cout << "b: "; cin >> b;
		cout << "c: "; cin >> c;
		cout << "d: "; cin >> d;

        // To fix the precision of floating numbers
        outfile << setprecision(3) << fixed;

		double rt = b*b - 3*a*c;
		if (rt < 0) {
			outfile << "Not Available.\n";
		} else {
			rt = sqrt(rt);
			double val1 = (-b + rt) / (3*a), val2 = (-b - rt) / (3*a);
			if (val1 == val2) // same to rt == 0
				outfile << val1 << "\n";
			else
				outfile << val1 << " " << val2 << "\n";
		}
	}

	outfile.close();

	return 0;
}
