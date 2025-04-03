// key word

/// char, int , float 등 각종 데이터 형식 및 using, return 눈에익은 키워드 

// 변수 함수 클래스 등 식별자 정의를 위한 미리 정의된 키워드

// 키워드는 식별자로 사용불가
// 식별자는 대소문자 숫자로만 구분
// 대소문자 밑줄로만 시작해얗마



// Literal 값 자체를 타타맴 : 코드에 표현된 변하지않는값.


int value = 5;

// literal 접미사를 붙여서 의도치 않게 정밀도 문제 발생.

#include <iostream>

using namespace std;

int main(){
    string string_value("hello");
    cout << string_value;

    string_value = " world!";
    cout << string_value;
    cout << ::value;
}