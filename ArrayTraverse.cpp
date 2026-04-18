#include <iostream>
#include <vector>
#include <set>
using namespace std;

int n;
vector<int> arr;
vector<bool> visited;
set<int> uniq_sum;
int counter = 0;

void traverseArray(int c_indx, int c_sum, bool fwd) {
	if (c_indx == n - 1) {
		uniq_sum.insert(c_sum);
		cout << "Sum: " << c_sum << " -->> ";
		for (int i = 0; i < n; i++) {
			if (visited[i]) {
				cout << arr[i] << " ";
			}
		}
		counter += 1;
		cout << endl;
		return;
	}
	visited[c_indx] = true;

	if (fwd) {
		for (int n_indx = c_indx + 1; n_indx < n; n_indx++) {
			if (!visited[n_indx]) {
				visited[n_indx] = true;
				int n_sum = c_sum + abs(arr[c_indx] - arr[n_indx]);
				traverseArray(n_indx, n_sum, false);
				visited[n_indx] = false;
			}
		}
	}
	else {
		for (int prev_indx = c_indx - 1; prev_indx >= 0; prev_indx--) {
			if (!visited[prev_indx]) {
				visited[prev_indx] = true;
				int n_sum = c_sum + abs(arr[c_indx] - arr[prev_indx]);
				traverseArray(prev_indx, n_sum, true);
				visited[prev_indx] = false;
			}
		}
	}
	visited[c_indx] = false;
}

int main() {
	cout << "Enter array size: ";
	cin >> n;

	arr.resize(n);
	visited.resize(n, false);
	uniq_sum.clear();

	cout << "Enter array elements: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int s_indx = 1; s_indx < n; s_indx++) {
		fill(visited.begin(), visited.end(), false);

		visited[0] = true;
		visited[s_indx] = true;

		int init_sum = abs(arr[0] - arr[s_indx]);
		traverseArray(s_indx, init_sum, false);
	}

	cout << "Total valid paths: " << counter << endl;
	cout << "Unique sums are: " << endl;
	for (int sum : uniq_sum) {
		cout << sum << endl;
	}
	cout << endl;
	cout << "Total unique sums: " << uniq_sum.size() << endl;
	return 0;
}
