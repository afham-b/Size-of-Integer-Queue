#include <queue>
#include <iostream>
using namespace std;

int main () {
	queue<int> q;
	int n;

	cout << "Enter an int, or 0 to quit: ";
	cin >> n;
	while (n != 0) {
		q.push(n);
		cout << "Enter an int, or 0 to quit: ";
		cin >> n;
	}

	cout << endl;
	cout << "There are " << q.size() << " items in the queue." << endl;

	cout << endl;
	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}

	return 0;
}
