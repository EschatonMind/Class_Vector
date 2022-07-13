#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> num;
	int n;
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> n;
		num.emplace_back(n);
	}
	for (int i = 0; i < m; i++) {
		cout <<" | " << num[i] << " | ";
	}
	cout << endl;
	for (vector<int>::iterator it = num.begin(); it != num.end(); it++) {
		cout << " | " << *it << " | ";
	}
	return 0;
}