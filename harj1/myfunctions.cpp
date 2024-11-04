#include <iostream>
#include <iomanip>

using namespace std;

void calcSum(int i, int j)
{
    int summa ;
    summa = i + j;
    cout << "The sum of " << i <<  " and " << j << " is: " << summa << endl;
}

void calcDiv(int m, int n)
{
    if (n == 0) {
        cout << "Divisor cannot be zero!" << endl;
    }
    else {
        float jako;
        jako =(1.00 *  m) / (1.00 * n ) ;
        cout << "Division of " << m << " and " << n << " is: " << std::fixed << std::setprecision(2) << jako << endl;
    }
}
int retSum(int c, int d)
{
    int summa2;
    summa2=c+d;
    return(summa2);
}
float retDiv(int s, int t)
{
    float division;
    if(t==0){
        return(0);
    }
    else {
        division=(1.00*s) / (1.00*t);
        return(division);
    }
}
