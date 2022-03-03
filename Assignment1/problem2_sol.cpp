#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
using namespace std;

/**********************/
/*******Problem 2******/
/**********************/
/* ID:                */
/* NAME:              */
/**********************/

int main(){
	int loopNum;

	ifstream infile("input2.txt");

	infile >> loopNum;
	for (int i = 0; i < loopNum; i++) {
		int lineNum;
		infile >> lineNum;

		int s = lineNum;
		for (int l = 1; l <= lineNum; l++) {
			string space(s-l, ' ');
			cout << space;

			string star(2*l - 1, '*');
			cout << star;

			cout << endl;
		}
	}

	infile.close();

	return 0;
}
