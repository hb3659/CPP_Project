#include <iostream>

using namespace std;

int main() {
	cout << "Hello World" << endl;

	char ch0 = 'a';
	char ch1 = 97;

	cout << "ch0: " << ch0 << endl;
	cout << "ch1: " << ch1 << endl;

	cout << "ch0: " << (int)ch0 << endl;	// c 스타일
	cout << "ch0: " << int(ch0) << endl;	// c++ 스타일
	// 둘 다 가능하다

	cout << (char)97 << endl;
	cout << 97 << endl;

	cout << sizeof(ch0) << endl;

	cout << numeric_limits<int8_t>::max << endl;

	cout << "Hello World\n";
	cout << "\n";
	cout << "\tHello Wor\bld\n";

	char ch = 'ad';
	int num = 'af';

	cout << ch << endl;
	cout << num << endl;
}