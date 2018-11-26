//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main() {
//	vector<int> vector;
//	int n;
//	int x;
//	int sum = 0;
//	std::vector<int> keep;
//	std::vector<int> ap(200000, 0);
//	int k = 0;
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> x;
//		vector.push_back(x);
//		sum += x;
//		ap[x]++;
//	}
//
//	int aux;
//	//int aux2;
//
//	for (int i = 199999; i > n; i++) {
//		if (ap[i] > 1) {
//			break;
//		}
//		else {
//			aux = 0;
//			for (int j = 0; j < i; j++) {
//				aux = ap[j] * j;
//				if (aux == ap[i]) {
//					keep.push_back(j);
//					k++;
//				}
//			}
//		}
//	}
//
//	cout << k << endl;
//	for (int i = 0; i < k; i++) {
//		cout << keep[i] + 1 << " ";
//	}
//
//	return 0;
//}