// 일반적으로 가장 많이 사용하는 데이터 형식을 꼽으면 단연코 정수형이 그 주인공임.
// 정수형의 기준이 되는 int는 시스템의 자연스러운 크기를 따르도록 규정함. 자연스러운 크기란, 시스템에서 한번에 처리할 수 있는 크기를 의미함.
// 16비트 시스템, 32비트 시스템에서는 각각 16,32비트이지만 일반적으로 출시되는 64비트 컴퓨터는 실제로 32비트 4byte임.

// sizeof 연산자를 이용하면 현재 시스템에서 데이터 형식의 크기를 알 수 있음.

// #include <iostream>
// using namespace std;

// int main(){

//     count << s
// }


// 부동소수점 형식 floating point  : 정수부와 소수부의 자릿수가 일정하지않다는 의미.



#include <iostream>

using namespace std;

void print() // doesn't exist retrun void function 
{
    // function local scope
    int value = 10;
    cout << "print function local var value: " << value << endl;

}

int hello() // main function  // int mean return type
{
    // main function 
    int value = 115;
    cout << "print function local value : " << value << endl;
    

    // 
    print();

    //print function  main value 

    cout << "print value chagne : " << value <<endl;

    return value;
}

// int main()
// {
//     // cout << "print space bar"
//     int hellovalue = hello();

//     // cout << value;
//     cout << hellovalue;

//     return 0;

// }

// if, for, while 
// 지역 범위 매개변수이름을 포함하여 함수안에 선언한 이름은 해당함수내에서만 유효함.
// 지역 범위는 블록 범위라고도 합니다. 

//전역범위 네임스페이스나 클래스, 함수등에 속하지않고 외부에 선어함 이름. 

// 크래스 범위 클래스 맴버의 이름은 선언 지점에 관계없이 클래스 정의 전체에 걸쳐 확장됨. 클래스 맴버 접근서은 접근지정자 (public ,private 제어 가능)

// namespace 안에 선언한 이름은 네임스페이 스안에서만 유효함. 


int value = 1; // global variable 

int main()
{
    int value = -1;

    cout << value << endl; // local var
    cout << ::value << endl; // global var

    return 0;

}

