#include <iostream>
using namespace std;


void cdigit(long long num, int& even, int& odd, int& zero) {
    even = odd = zero = 0;
    if (num < 0) {
        num = -num;
    }
    while (num > 0) {
        int digit = num % 10;
        if (digit == 0) {
            zero++;
        }
        else if (digit % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
        num /= 10;
    }

    cout << "Number of odd digit : " << odd << endl;
    cout << "Number of even digit : " << even << endl;
    cout << "Number of zero digit : " << zero << endl;
}

int main()
{
    long long num;
    cout << "Enter Your Number : ";
    cin >> num;
    int odd, even, zero;
    cdigit(num, odd, even, zero);


}