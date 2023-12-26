#include <iostream>
using namespace std;
void sumfristlast(int num) {
    int sum = num % 10;
    long long last = 0;
    do {
        last = num % 10;
        num /= 10;
    } while (num != 0);
    sum += last % 10;
    cout << sum;
}

int main() {
    long long x; cin >> x;
    sumfristlast(x);
}