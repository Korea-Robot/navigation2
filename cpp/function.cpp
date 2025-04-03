// 함수와 구조체 

// 파일 입출력, 문자열 처리, 각종 산술 연산 등을 수행 할 수 있는 유용하고 다양한 함수를 모아 C++ 표준라이브러리 형태로 제공
// 반복해서 수행되는 코드를 함수로 만들면 재활용 가능
// 복잡한 기능 모듈화 => 효율적 관리.

// 함수 만들기 : 특정 작업을 수행하는 코드 집합.

#include <iostream>
using namespace std;


// 함수 기본 구성 
// 변환 형식   함수이름   매개변수 
int          func(   int _arg1, int _arg2)


// 함수 선언에는 크게 4가지의 필수 요소가 있음. 
// 1. 반환 형식 : 함수가 반환할 값의 자료형, 반환할 값이 없으면 void
// 2. 함수 이름 : 함수를 호출할때 사용할 이름 함수의 이름은 밑줄로 시작하며, 숫자나 공백 시작불가
// 3. 매개변수  : 함수가 호출될때 전달받은 값을 저장하는 변수로, 함수 내부에서만 사용할 수 있는 지역변수임.
                // 값이 없다면 void,혹은 비워둠.

// 4. 함수몸체  : 함수의 기능을 정의
            
{
    // function body
    int result = _arg1 + _arg2;

    return result;

}


int change_negative(int _val)
{
    if (_val>0)
    {
        _val = -_val;
    } 
    return _val;
}

int main()
{
    int add_result = func(2,3);
    cout << "add function : " << add_result;

    int a=3, b=-4;

    a = change_negative(a);
    change_negative(b);

    cout << "change negatie(a) : " << a <<endl;
    // 값이 그대로인 이유는 매개변수인 _val이 함수 내부에서만 효력이있는지역변수이기때문.
    // 이러한 문제를 해결할 수 있는것이 포인터 변수를 매개변수로 활용하는것.

    cout << "change negatie(b) : " << b <<endl;
}




// 함수의 매개변수 사용하기. ---------------------------------
// 함수의 매개변수는 일반 변수뿐아니라 배운 포인터와 배열도 사용가능




// #include <iostream>
// using namespace std;

// int main() {
//     // 1. 초기화되지 않은 포인터 사용 (유효하지 않은 메모리 참조)
//     int *uninitializedPtr;  // 초기화되지 않음. 쓰레기 주소를 가짐.
//     // 다음 코드를 실행하면, 예측 불가능한 결과 또는 세그멘테이션 폴트가 발생할 수 있음.
//     cout << "Uninitialized pointer value: " << *uninitializedPtr << endl;
    
//     // 2. Null 포인터의 역참조
//     int *nullPtr = nullptr;
//     // nullPtr은 아무런 유효한 메모리도 가리키지 않음.
//     // 다음 코드는 세그멘테이션 폴트를 유발함.
//     cout << "Null pointer value: " << *nullPtr << endl;
    
//     // 3. 배열 범위 초과 접근
//     int arr[5] = {10, 20, 30, 40, 50};
//     int *ptr = arr;  // 배열의 첫 번째 요소 주소를 가리킴.
//     cout << "Valid access (arr[2]): " << ptr[2] << endl; // 정상 동작 (30)
    
//     // 배열의 범위를 벗어난 접근: arr[5]는 6번째 요소로, 할당되지 않은 메모리.
//     // 다음 코드는 정의되지 않은 행동(종종 세그멘테이션 폴트)을 유발할 수 있음.
//     cout << "Invalid access (arr[5]): " << ptr[5] << endl;
    
//     // 4. 할당 해제된 메모리의 역참조 (Use-After-Free)
//     int *dynamicPtr = new int(100);  // 동적 메모리 할당
//     cout << "Dynamic memory value before deletion: " << *dynamicPtr << endl; // 정상 출력 (100)
//     delete dynamicPtr;  // 메모리 해제
    
//     // 메모리를 해제한 후에 해당 주소를 역참조하면 정의되지 않은 행동이 발생함.
//     // 다음 코드는 런타임 오류나 예기치 않은 결과를 유발할 수 있음.
//     cout << "Access after deletion: " << *dynamicPtr << endl;
    
//     return 0;
// }
