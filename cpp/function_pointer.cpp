// use pointer as parameter


/*
#include <iostream>

using namespace std;


void change_negative(int* _val) // 포인터 변수를 매개변수로 사용, 즉 매개변수는 주소값이다.
{
    if (*_val >0) // 주소값의 역참조에 대해 if 문을 발동
    {
        *_val = -(*_val); // 주소값의 역참조에 대해서 틀리면 변경
        // 원본 메모리에 대한 직접 전달 및 수정

        // 계산 효율성 측면
        // 포인터를 전달하는 겨웅 함수가 매개변수를 역참조(dereference)하여 사용해야함.이 연산은 매우 빠르지만 크게차이없음 기본데이터 Int와 비교하면.
        // 대규모의 데이터의 경의 포인터전달값은 효율성이 좋음.
    }
}


int main()
{
    int a = 3, b= -3;

    change_negative(&a); // a변수의 주소값 전달 // 주소
    change_negative(&b); 

    cout << a ;
}
*/

#include <iostream>

using namespace std;


void function(int* _val)
{
    if (*_val >0)
    {
        *_val = -(*_val);
        
    }
}


int main()
{
    int a=3,b=-3;

    function(&a);

    cout << a;
}

// 구조체 만들기.
// 모두 단일 자료형만 취급함.
// 여러가지 형식의 데이터를 하나의 매개변수로 전달하기 위한 방법 : 구조체 

// 구조체 : 여러 형식의 데이터를 묶어서 관리

struct Person
{
    std::string name;
    int age;
    float height;
    float weight;
};

// 구조체는 하나이상의 변수를 묶어 새로운 자료형으로 정의

Person adult;
// 자료형과 마찬가지로 형식만 정의된 형태임.
// 형식의 변수를 만들어야 비로소 사용가능

adult.name = "Brain";
adult.age = 24;
adult.height = 190;
adult.weight = 137;


// 구조열 형식으로 배열 선언도 가능 

Person adult[3];

adult[1].name = "brain";