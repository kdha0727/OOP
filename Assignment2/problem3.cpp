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

    infile >> loopNum;
    for (int i = 0; i < loopNum; i++) {

        // Declare and initialize variables of card number of score
        int cardLength, cardRemain1, cardRemain2, score1=0, score2=0;
        infile >> cardLength;  // used in loop statement
        cardRemain1 = cardLength;  // used as temporary value of remaining card number
        cardRemain2 = cardLength;  // used as temporary value of remaining card number

        // Save card value to multi-dimensional array
        int card[2][1000];  // Since we didn't learn pointer, I had to fix length to 1000.
        for (int j = 0; j < 2; j++) {
            for (int k = cardLength - 1; k >= 0; k--) {
                infile >> card[j][k];
            }
        }

        // Compute until game ends
        while (cardRemain1 > 0 && cardRemain2 > 0) {

            // Declare and initialize variables of card number value
            int cardNum1 = card[0][cardRemain1-1], cardNum2 = card[1][cardRemain2-1], delta;
            if (cardNum1 > cardNum2) {  // compute case in which player 1 wins
                delta = cardNum1 - cardNum2;
                card[0][cardRemain1-1] = delta;
                card[1][cardRemain2-1] = 0;
                score1 += 1;
                cardRemain2 -= 1;
            }
            else if (cardNum1 < cardNum2) {  // compute case in which player 2 wins
                delta = cardNum2 - cardNum1;
                card[0][cardRemain1-1] = 0;
                card[1][cardRemain2-1] = delta;
                score2 += 1;
                cardRemain1 -= 1;
            }
            else {  // compute case of tie
                card[0][cardRemain1-1] = 0;
                card[1][cardRemain2-1] = 0;
                cardRemain1 -= 1;
                cardRemain2 -= 1;
            }
        }

        // Print final result
        cout << score1 << ' ' << score2 << endl;

    }

    infile.close();

    return 0;
}
