#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

/**********************/
/*******Problem 3******/
/**********************/
/* ID:                */
/* NAME:              */
/**********************/

int main(){
	int loopNum;

	ifstream infile("input3.txt");

	cout << setprecision(3) << fixed;
	infile >> loopNum;
	for (int i = 0; i < loopNum; i++) {
		double start;
		infile >> start;

		double profit;
		infile >> profit;

		double target;
		infile >> target;

		int day = 1;
		double money = start;
		while(1) {
			money *= ((100 + profit) / 100);
			cout << "Day #" << day++ << ": " << money << endl;
			if (money >= target) {
				break;
			}
		}
		cout << "Final income: " << money - start << endl;
	}

	infile.close();

	return 0;
}
