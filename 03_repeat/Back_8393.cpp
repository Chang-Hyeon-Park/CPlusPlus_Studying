#include <iostream>
using namespace std;
int main(int argc, char const* argv[]) {
	int N;
	cin >> N;
	int result = 0;
	for (int i = 1; i <= N; i++) {
		result += i;
	}
	cout << result;
	return 0;
}