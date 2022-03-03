#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

/**********************/
/*******Problem 1******/
/**********************/
/* ID: 2020191089     */
/* NAME: Dongha Kim   */
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

        /*
            The derivative of [y = ax^3 + bx^2 + cx + d] over x is [y = 3ax^2 + 2bx + c],
            and the discriminant of the derivative is [4b^2 - 12ac], or [b^2 - 3ac].
            The root of the derivative is [x = {-b +- sqrt(b^2 -3ac)} / 3a], by quadratic formula.
        */

        // We use quadratic equation discriminant of the derivative, to know the number of output.
        double disc = (b * b) - (3 * a * c);

        // Determine type of output by discriminant.
        // In each case(except last), use quadratic formula to calculate roots
        // and print them to output file.
        if (disc > 0) { // two roots
            double x1 = (-b + sqrt(disc)) / (3 * a), x2 = (-b - sqrt(disc)) / (3 * a);
            outfile << max(x1, x2) << " " << min(x1, x2);
        } // one root
        else if (disc == 0) {
            double x = (-b) / (3.0 * a); // Why 3.0? to prevent loss of precision (int division)
            outfile << x;
        }
        else { // no root
            outfile << "Not Available.";
        }

        // Last, print end of line to output file.
        outfile << endl;

    }

    outfile.close();

    return 0;
}
