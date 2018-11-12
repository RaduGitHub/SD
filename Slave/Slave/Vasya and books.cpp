#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	int x;
	vector<int> a;
	vector<int> b;

	cin >> n;
	if (n == 1) {
		cout << "1";
	}else{
	for (int i = 0; i < n; i++) {
		cin >> x;
		a.push_back(x);
	}
	for (int i = 0; i < n; i++) {
		cin >> x;
		b.push_back(x);
	}

	int i = 0;
	int counter_afis = 0;
	int counter = 0;
	int k = 0;

	while (i < n) {
		if (b[k] != a[i]) {
			counter++;
			i++;
		}
		else {
			cout << counter + 1<<" ";
			counter = 0;
			i++;
			k++;
			counter_afis++;
		}
	}
	int l = 1;
	if (counter != 0) {
		//cout << counter << " f";
		l++;
	}
	for (i = counter_afis; i < n - l; i++) {
		cout << "0 ";
	}

	if (counter != 0) {
		cout << counter - 1<<" ";
	}

	if (b[n-1] == a[n-1]) {
		cout << "1";
	}
	else { cout << "0"; }
	}
	return 0;
}