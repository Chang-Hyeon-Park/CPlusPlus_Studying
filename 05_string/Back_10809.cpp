#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	cin >> s;
	for (int i = 0; i < alphabet.length(); i++) {
		cout << (int)s.find(alphabet[i]) << " ";
	}
	return 0;
}

// find : 입력 문자열이 최초로 등장하는 위치의 인덱스를 반환하는 함수
// 만약 없는 문자열을 찾으려 할 경우에는 string::npos가 반환됨
// npos의 값은 -1로 정의되어있지만, string::npos의
// 자료형이 unsigned이므로 2의 보수 개념에 의해 
// 표현할 수 있는 최대 크기의 양수가 출력된다.
// 이를 방지하기 위해서는 unsigned가 아닌
// 일반 int형으로 캐스팅을 진행하여 출력하면 된다.

// cout << (int)a.find('d') << "\n";