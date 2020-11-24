#include <iostream>
using namespace std;
// std:: 입력 불필요

int main() {
	int x(1), y = 2, z = 3;
	// 변수 선언 방법

	cout << x << endl;
	cout << y << endl;
	std::cout << z << std::endl;
	cout << endl;
	// std::cout << endl == Colsole.WriteLine()

	/*
	int num0 = 1;
	int num1 = num0 * 1.5;
	int num2 = num0 / 2;
	int num3 = 2.5;

	int num0 = 11;
	int num1 = 011;		// 8진수
	int num2 = 0b11;	// 2진수
	int num3 = 0x11;	// 16진수
	*/

	int8_t num0 = 0;
	int16_t num1 = 1;
	int32_t num2 = 0;

	/*
	cout << "num0 " << num0 << endl;		// 1		// 11
	cout << "num1 " << num1 << endl;		// 1.5		// 8 + 1 = 9
	cout << "num2 " << num2 << endl;		// 0.5		// 2 + 1 = 3
	cout << "num3 " << num3 << endl;		// 2.5		// 16 + 1 = 17
	*/

	cout << sizeof(num0) << endl;
	cout << sizeof(num1) << endl;
	cout << sizeof(num2) << endl;

	cout << endl;

	// 정수형이기 때문에 소수점 아래는 다 버려진다

	int intNum = 0;
	long longNum = 0;
	int* intPointer = &intNum;
	// 포인터 *

	cout << sizeof(intNum) << endl;
	cout << sizeof(longNum) << endl;
	cout << sizeof(intPointer) << endl;

	cout << endl;

	//unsigned int a = 11u;	// unsigned literal
	//long int longNum = 0L;
	//long long longLongNum = 0LL;
	//unsigned long long ulongLongNum = 0uLL;

	cout << (int)numeric_limits<uint8_t>::max() << endl;
	// uint8_t 는 char 형이기 때문에 형변환 필요
	cout << numeric_limits<uint16_t>::max() << endl;
	cout << numeric_limits<uint32_t>::max() << endl;
	cout << numeric_limits<uint64_t>::max() << endl;
}