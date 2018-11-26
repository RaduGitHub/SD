#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> num;
	vector<int> ap(200000, 0);
	long long sum = 0;
	int n;
	int x;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		num.push_back(x);
		sum += x;
		ap[x]++;
	}

	for(int i=0;)




	return 0;
}