// dynamic array allocate

#include <iostream>

using namespace std;

int main()
{
    int* pt_int_array_value = new int[5];

    for (int i=0;i<5;i++)
    {
        pt_int_array_value[i] = i;
    }

    for (int i=0;i<5;i++)
    {
        cout<< pt_int_array_value[i] << endl;
    }

    delete[] pt_int_array_value; // 동적 메모리 해제 
    // 만약 메모리 가 해제되지않으면 메모리 누수가 발생한다.

    // 동적 할당 메모리를 해제하는 이유

    // 스택 : 함수의 매개변수, 지역 변수 같은 대부분의 일반 변수는 스택이라는 메모리 영영ㄱ에 할당됨.
    // 스택영역 : 함수의 호출과 함께 할당 => 함수 반환시 자동 소멸
    // 크기 한정되어있음. 크기 초과 하면 운용체제 해당 프로그램 강제종료.



    // 힙 : 동적으로 할당된 변수 ,   명시적으로 해제하기 전에는 해당프로그램이 종료될때까지 계속 유지됨.

    // 메모리 해제를 적절하게 하지않으면 동작하면서 조금씩 누수 발생. 

    return 0;
}