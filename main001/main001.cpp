#include <iostream>

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

	// ���̻�(f, L)�� ���� ��� double ������ ����

	/*unsigned int num0;
	float num1 = -118.625;
	memcpy(&num0, &num1, sizeof(num1));

	cout << num0 << endl;
	cout << num1 << endl;*/

	float num0 = 0.1f;
	float num1 = 0.02f * 5.0f;

	cout.precision(64);
	cout << num0 << endl;
	cout << num1 << endl;

	// 0.1 �� 2������ ǥ�� �Ұ���
	// �ε� �Ҽ����� �ٻ簪���� ǥ���ȴ�
	// �ε� �Ҽ������� �񱳴� ���� ����

	if (num0 == num1)
		cout << "Equal" << endl;
	if (num0 == 0.1f)
		cout << "Equal 1" << endl;
	if (num0 == 0.1)
		cout << "Equal 2" << endl;
	if (num0 == 0.1L)
		cout << "Equal 3" << endl;

	cout << 0.1f << endl;
	cout << 0.1 << endl;
	cout << 0.1L << endl;
}
