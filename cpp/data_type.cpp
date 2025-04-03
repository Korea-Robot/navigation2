// 프로그래밍에서 말하는 변수 : '값을 저장할수 있는 공간'
// c++ 언어에서는 변수에 값을 저장하기전에 정수, 부동 소수점, 문자 등 어떤 값을 저장할지 미리 선언.
// 데이터 타입(형식) data type(자료형) 이라함.

// 파이썬 같은 인터프리터 언어는 변수의 형식을 자동으로 결정해줌.
// 컴파일 언어는 데이터 타입을 지정해주어야함

// 런타임 오류 줄고, 메모리 효율적 사용 


// void : none type 
// bool : 1 true, false 표현 

// 문자 


// 형식이 없음을 나타내는 void
// C++ void는 형식이 없음을 나타냄. 따라서 void형으로는 다음처음 변수를 선언 불가
// void value;

// void 3가지 상황에 사용.
// 1. 함수가 값을 반환하지 않음 표시 
// 함수에서 반환하는 return문이 없는 경우.

#include <iostream>


void print_func()
{
    std::cout << "func" << std::endl;
}

// 2. 함수의 매개변수가 없음을 표시할때 , 매개변수가 없으면 아무 것도 입력없이 () 빈괄호로 두어도 됨.

int input_func(void)
{
    int input_value;
    std::cin >> input_value;
    return input_value;
}

// 3. 어떤 변수라도 가리킬수 있는 제네릭 포인터 generic pointer를 만들때 사용가능.
// 제네릭 포인터에서는 void는 단순히 '형태가 없음'을 의미하기보다 형태가 자유로움을 의미함.

