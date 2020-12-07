#include <iostream>
#include <cfloat>

using namespace std;

int main() {
	//float num0 = 1.5;
	//float num1 = num0 * 1.5;
	//float num2 = num0 / 2;
	//float num3 = num0 - 3;

	//cout << "num0 " << num0 << endl;		// 1.5
	//cout << "num1 " << num1 << endl;		// 2.25
	//cout << "num2 " << num2 << endl;		// 0.75
	//cout << "num3 " << num3 << endl;		// -1.5

	/*float num0 = 1.0;
	double num1 = 1.0;
	long double num2 = 1.0;

	cout << sizeof(num0) << endl;
	cout << sizeof(num1) << endl;
	cout << sizeof(num2) << endl;
	cout << endl;

	cout << sizeof(1.0f) << endl;
	cout << sizeof(1.0) << endl;
	cout << sizeof(1.0L) << endl;*/

	// 접미사(f, L)가 없는 경우 double 형으로 인지

	/*unsigned int num0;
	float num1 = -118.625;
	memcpy(&num0, &num1, sizeof(num1));

	cout << num0 << endl;
	cout << num1 << endl;*/

	//float num0 = 0.1f;
	//float num1 = 0.02f * 5.0f;

	//cout.precision(64);
	//cout << num0 << endl;
	//cout << num1 << endl;

	//// 0.1 은 2진수로 표현 불가능
	//// 부동 소수점은 근사값으로 표현된다
	//// 부동 소수점으로 비교는 하지 말자

	//if (num0 == num1)
	//	cout << "Equal" << endl;
	//if (num0 == 0.1f)
	//	cout << "Equal 1" << endl;
	//if (num0 == 0.1)
	//	cout << "Equal 2" << endl;
	//if (num0 == 0.1L)
	//	cout << "Equal 3" << endl;

	//cout << 0.1f << endl;
	//cout << 0.1 << endl;
	//cout << 0.1L << endl;

	/*float num0 = 1.0f;
	float num1 = 0.0f;
	for (int i = 0; i < 10; i++)
		num1 = num1 + 0.1;

	if (num0 == num1)
		cout << "Equal 0" << endl;
	if (fabsf(num0 - num1) <= FLT_EPSILON)
		cout << "Equal 1" << endl;*/

	// abs == 절대값 (앞뒤에 f 는 float에 관한 것이라는 뜻)
	// 1보다 크지만 가장 작은 양의 수와의 차이 = frt_epsilon

	/*unsigned int num0 = 0b00111111100000000000000000000000;
	float num1;
	memcpy(&num1, &num0, sizeof(num0));
	
	cout.precision(64);
	cout << "num1: " << num1 << endl;

	unsigned int num2 = 0b00111111100000000000000000000001;
	float num3;
	memcpy(&num3, &num2, sizeof(num2));

	cout << "num3: " << num3 << endl;

	cout << num3 - num1 << endl;
	cout << FLT_EPSILON << endl;*/

	/*float num0 = 1.0f;

	unsigned int num1 = 0b00110011100000000000000000000000;
	float num2;
	memcpy(&num2, &num1, sizeof(num1));

	cout.precision(64);
	cout << num0 + num2 << endl;*/

	//float num0 = FLT_MIN;

	/*cout.precision(64);
	cout << num0 << endl;

	float num1;
	unsigned int num2 = 0b0111111100000000000000000000000;
	memcpy(&num1, &num2, sizeof(num2));

	cout << num1 << endl;*/

	float fltMin = FLT_MIN;
	unsigned int ifltMin;
	memcpy(&ifltMin, &fltMin, sizeof(fltMin));

	float fltTrueMin = FLT_TRUE_MIN;
	unsigned int ifltTrueMin;
	memcpy(&ifltTrueMin, &fltTrueMin, sizeof(fltTrueMin));

	cout << ifltMin << endl;
	cout << ifltTrueMin << endl;

	cout << fltMin << endl;
	cout << fltTrueMin << endl;
}

// 0011,1111,1000,0000,0000,0000,0000,0000 = 1.0(2)
// 0011,0011,1000,0000,0000,0000,0000,0000 = 1.0(2) * 10^-23(2)
