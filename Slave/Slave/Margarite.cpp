#include<iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int sum = 0;
		int l, r;
		cin >> l >> r;
		int k;
		k = r - l + 1;
		if (k == 1) {
			if (l % 2 == 0) {
				cout << l << endl;
			}
			else {
				cout << sum - l << endl;
			}
		}
		else if (l % 2 == 0 && r % 2 == 0) {
			sum = l + r - ((l + r) / 2);
			cout << sum << endl;
		}
		else if (l % 2 != 0 && r % 2 != 0) {
			sum = sum - ((l + r) / 2);
			cout << sum << endl;
		}
		else if (l % 2 == 0 && r % 2 != 0) {
			sum -= (k / 2);
			cout << sum << endl;
			}
		else if (l % 2 != 0 && r % 2 == 0) {
			sum = (k / 2) ;
			cout << sum << endl;
		}
	}

	return 0;
}