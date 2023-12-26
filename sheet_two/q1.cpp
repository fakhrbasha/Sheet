#include <iostream>
using namespace std;

float Celsius(float F)
{
    return (5.0 / 9.0) * (F - 32);
}

int main()
{
    cout << "Fahrenheit Celsius " << endl;
    for (int i = 0; i <= 20; i++) {
        cout << i << "\t\t" << Celsius(i) << endl;
    }
}