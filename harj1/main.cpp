#include <iostream>
#include "myfunctions.h"
#include <iomanip>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "Anna luku 1" << endl;
    cin >> a;
    cout << "Anna luku 2" << endl;
    cin >> b;
    calcSum(a,b);
    calcDiv(a,b);
    cout << "Nyt funktioilla" << endl;
    cout << "Lukujen " << a << " ja " << b << " summa on: " << retSum(a, b) << endl;
    cout << endl;
    float divcheck;
    divcheck=retDiv(a,b);
    if (divcheck==0) {
        cout << "Virhe, 0 ei käy jakajaksi" << endl;
    }
    else {
    cout << "Lukujen " << a << " ja " << b << " jakotulos on: " <<  std::fixed << std::setprecision(2) << divcheck << endl;

    }
}
