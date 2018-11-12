#include<iostream>

using namespace std;

int main() {
	long long n;
	long long x, y;
	cin >> n >> x >> y;

	if (x + y <= n + 1) {
		cout << "White";
	}
	else {
		cout << "Black";
	}
	return 0;
}