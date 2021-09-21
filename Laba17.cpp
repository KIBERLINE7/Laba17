#include <iostream>
#include <vector>

using namespace std;

void zd1() {
	cout << "Enter N, K, L:" << endl;

	int N, K, L;

	cin >> N >> K >> L;
	
	K -= 1;
	L -= 1;

	vector<int> A(N);

	cout << "Enter numbers into the array." << endl;

	for (int i = 0; i < N; i++) {

		cin >> A[i];

	}

	double mid;
	int sum = 0;

	for (int i = K; i <= L; i++) {

		sum += A[i];

	}

	mid = (double)sum / (L - K + 1);

	cout << "The arithmetic mean is:" << mid;
		 
}

void zd2() {
	cout << "Enter N: ";

	int N;

	cin >> N;

	vector<int> A(N);

	cout << "Enter numbers into the array." << endl;

	for (int i = 0; i < N; i++) {

		cin >> A[i];

	}

	if (N == 1) {
		cout << 0;
		return;
	}

	bool flag = true;

	int d = A[1] - A[0];

	if (N > 2) {

		for (int i = 2; i < N; i++) {

			if (A[i] - A[i - 1] != d) {
				flag = false;
				break;
			}

		}

	}

	if (flag) {
		cout << "Difference progression: " << d;
	}
	else {
		cout << 0;
	}

}

void zd3() {

	cout << "Enter N: ";

	int N;

	cin >> N;

	vector<int> A(N);

	cout << "Enter numbers into the array." << endl;

	for (int i = 0; i < N; i++) {

		cin >> A[i];

	}

	int min = 1e8;

	for (int i = 2; i < N; i += 2) {

		if (A[i] < min) {
			min = A[i];
		}

	}

	cout << "Array minimum: " << min;

}

void zd4() {

	cout << "Enter N: ";

	int N;

	cin >> N;

	vector<int> A(N);

	cout << "Enter numbers into the array." << endl;

	for (int i = 0; i < N; i++) {

		cin >> A[i];

	}

	int pos = -1;

	for (int i = 0; i < N; i++) {

		if (i == 0) {
			if (A[0] > A[1]) {
				pos = 0;
			}
		}
		else {
			if (i == N - 1) {
				if (A[i] > A[i - 1]) {
					pos = i;
				}
			}
			else {
				if (A[i] > A[i + 1] && A[i] > A[i - 1]) {
					pos = i;
				}
			}
		}

	}

	cout << "Position of the last local high: " << pos;

}

void zd5() {

	cout << "Enter N: ";

	int N;

	cin >> N;

	vector<int> A(N);

	cout << "Enter numbers into the array." << endl;

	for (int i = 0; i < N; i++) {

		cin >> A[i];

	}

	for (int i = 0; i < N; i++) {

		for (int g = i + 1; g < N; g++) {

			if (A[i] == A[g]) {
				cout << "Same item numbers : " << i << " " << g;
				return;
			}

		}

	}

}

int main()
{
    int a;

    cout << "Enter the job number: ";

    cin >> a;

	switch (a)
	{
	case 1:
	{
		zd1();
		break;
	}
	case 2:
	{
		zd2();
		break;
	}
	case 3:
	{
		zd3();
		break;
	}
	case 4:
	{
		zd4();
		break;
	}
	case 5:
	{
		zd5();
		break;
	}
	default:
		break;
	}
}
