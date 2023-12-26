#include <iostream>
#include <algorithm>
int sum_from(int a, int b)
{
	// a=4 b =7 res = 22
	int res = 0;
	for (int i = a; i <= b; i++) {
		res += i;
	}
	return res;
}
using namespace std;
int main()
{
	int a, b; cin >> a >> b;
	cout << ""sum_from_to"" << sum_from(a, b) << endl;

}