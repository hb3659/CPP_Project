// #: 전처리 지시
// 전처리? 소스 코드가 컴파일 되기 이전 단계(pre-process)
// 해당 소스코드에 iostream 파일을 include(복붙) 하겠다.
// iostream 안에 print를 위한 것들이 존재
#include <iostream>

int main() {
	std::cout << "Hello World";
	return 0;

	// return 값을 띄워서 프로그램이 정상적으로 종료되었는지 확인
	// return 생략 가능(default == 0)
}