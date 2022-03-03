#include <iostream>
#include <iomanip>
using namespace std;

int output(){

    int nNum(14);

    //10진법 출력
    cout << "dec : " << nNum << endl;

    //8진법 모드로 설정
    cout << oct;
    cout << "oct : " << nNum << endl;

    //16진법 모드로 설정
    cout << hex;
    cout << "hex : " << nNum << endl;

    //10진법 다른 방법
    dec(cout);
    cout << "dec : " << nNum << endl;

    //8진법 다른 방법
    oct(cout);
    cout << "oct : " << nNum << endl;

    //16진법 다른 방법
    hex(cout);
    cout << "hex : " << nNum << endl;

    float fValue1( 20.04 );
    float fValue2 = 3.141592;

    //디폴트 모드
    cout << "fValue1 : " << fValue1 << endl;
    cout << "fValue2 : " << fValue2 << endl;

    //고정 소수점 표기 모드 - precision 은 소숫점 아래 자릿수를 말함
    cout << fixed;
    cout.precision( 4 );
    cout << "fValue1 : " << fValue1 << endl;
    cout << "fValue2 : " << fValue2 << endl;

    //지수 표기 모드 - precision 은 소숫점 아래 자릿수를 말함
    cout << scientific;
    cout << setprecision(6);  // iomanip header
    cout << "fValue1 : " << fValue1 << endl;
    cout << "fValue2 : " << fValue2 << endl;

    //디폴트 모드 - precision 은 총 자릿수를 말함
    cout << defaultfloat;
    cout.precision( 5 );
    cout << "fValue1 : " << fValue1 << endl;
    cout << "fValue2 : " << fValue2 << endl;

    return 0;
}
