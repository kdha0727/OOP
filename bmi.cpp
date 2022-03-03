#include <iostream>

int BMI() {

    using namespace std;
    double weight, height, BMI;
    cout << "Enter your weight (in kg) :"; cin >> weight;
    cout << "Enter your height (in m) :"; cin >> height;

    BMI = weight / (height * height);

    cout << "Your BMI : " << BMI << endl;

    if (BMI < 18.5)
        cout << "Underweight" << endl;
    else if (BMI < 25.0)
        cout << "Normal" << endl;
    else
        cout << "yang" << endl;

    return 0;

}