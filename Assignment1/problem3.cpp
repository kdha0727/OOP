#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

/**********************/
/*******Problem 3******/
/**********************/
/* ID: 2020191089     */
/* NAME: Dongha Kim   */
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

        // Initialize variables which used in calculation.
        int day = 0;
        double now = start;

        // Calculate and print money of each day continuously while money is smaller than target.
        while (now < target) {
            now *= (1 + profit * 0.01);
            cout << "Day #" << ++day << ": " << now << endl; // Increase day value
        }

        // When money becomes bigger than (or equal with) target, print final income.
        cout << "Final income: " << now - start << endl;
    }

    infile.close();

    return 0;
}
