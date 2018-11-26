//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main() {
//	vector<int> vector;
//	int n;
//	int x;
//	long long sum = 0;
//	std::vector<int> keep;
//	int k = 0;
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> x;
//		vector.push_back(x);
//		sum += x;
//	}
//
//	int aux;
//	//int aux2;
//
//	for (int i = 0; i < n; i++) {
//		if (vector[i] >= n) {
//			aux = sum - vector[i];
//			for (int j = 0; j < n; j++) {
//				if (i != j && aux - vector[j] == vector[i]) {
//					//if (aux - vector [j] == vector[i]) {
//						keep.push_back(j);
//						k++;
//					}
//				//}
//			}
//		}
//	}
//
//	cout << k << endl;
//	for (int i = 0; i < k; i++) {
//		cout << keep[i]+1 << " ";
//	}
//
//	return 0;
//}