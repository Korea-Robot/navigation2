// #include <iostream>

// int main()
// {
//     char char_value = 'A';
//     int int_value = 123;
//     double double_value = 123.456;
    
//     // 포인터는 메모리 주소를 저장하는 변수를 의미함.
//     // 자료형과 변수 이름 사이에 별표를 추가함.
//     // 포인터 변수를 선언하면서 이전에 선언된 변수의 메모리 주소를 각각의 포인터 변수에 넣음.

//     //일반 변수 앞에 붙은 &는 피연산자의 주소를 읽어오는 주소연산자임.
//     char *char__pointer_value = &char_value; 
//     int *int_pointer_value =  &int_value;
//     double *doiuble_pointer_value = &double_value;
    
//     // cout << char__pointer_value;
//     std::cout << char__pointer_value << endl;
    
//     std::cout << int__pointer_value;

//     return 0;
// }

/*
#include <iostream>

int main()
{
    char char_value = 'A';
    int int_value = 123;
    double double_value = 123.456;
    
    // 포인터는 메모리 주소를 저장하는 변수를 의미함.
    // 자료형과 변수 이름 사이에 별표(*)를 추가함.
    char *char_pointer_value = &char_value; 
    int *int_pointer_value = &int_value;
    double *double_pointer_value = &double_value;
    
    // 포인터가 저장한 주소값 출력
    std::cout << "char pointer value (address): " << static_cast<void*>(char_pointer_value) << std::endl;
    std::cout << "int pointer value (address): " << int_pointer_value << std::endl;
    std::cout << "double pointer value (address): " << double_pointer_value << std::endl;

    // 포인터가 가리키는 실제 값 출력 (역참조)
    std::cout << "char pointer points to value: " << *char_pointer_value << std::endl;
    std::cout << "int pointer points to value: " << *int_pointer_value << std::endl;
    std::cout << "double pointer points to value: " << *double_pointer_value << std::endl;

    return 0;
}
*/

// 포인터 변수의 크기는 일반적으로 64비트 프로그램에서는 8바이트, 32비트 프로그램에서는 4바이트임.

// 다중 포인터 포인터를 가르키는 포인터  multiple pointer 

#include <iostream>

using namespace std;

int main()
{

    char char_value = 'A';

    char* pointer_char_value = &char_value;
    char** ppointer_char_value = &pointer_char_value;
    char*** pppointer_char_value = &ppointer_char_value;

    cout << "char value: " << char_value << endl;
    cout << "pointer address " << static_cast<void*>(pointer_char_value) << endl;
    cout << "ppointer address " << static_cast<void*>(ppointer_char_value) << endl;
    cout << "pointer value " << *pointer_char_value;


    double lotto[5] = {1,2,3,4,5};
    
    cout << "today 's lotto " << lotto[0] << ", " << lotto[4] << endl;

    // 4 byte 씩 올라감. int형은 4바이트 이기 때문이다. 
    cout << endl;

    cout << lotto << endl;
    cout << lotto +3 << endl;

    cout << endl;
    
    cout << "pointer array value " << &lotto[0] << endl;
    cout << "pointer array value " << &lotto[1] << endl;
    cout << "pointer array value " << &lotto[2] << endl;
    cout << "pointer array value " << &lotto[3] << endl;
    cout << endl;

    cout << endl;
    cout << endl;


    cout << " pointer of array" << static_cast<void*>(&lotto[0]) << endl;
    cout << " pointer of array" << static_cast<void*>(&lotto[1]) << endl;
    cout << " pointer of array" << static_cast<void*>(&lotto[2]) << endl;
    cout << " pointer of array" << static_cast<void*>(&lotto[3]) << endl;

    // 주소는 8바이트씩이야?

}

// 0x7ffff27136d8는 주소값으로 64 비트 즉 컴퓨터의 비트수를 나타낸다.

// 배열과 포인터 :
// 배열의 정의 : 변수가 여러개 모인 집합으로, 같은 자료형 변수를 연속으로 늘어놓은 형태 
// 배열이름[인덱스] 처럼 Index라고 하는 차례 번호를 넣으면 해당 순서의 원소 접근


// &lotto[0] == lotto + 0
// 배열의 이름을 사용할때 자동으로 첫번째 원소를 가리키느 포인터가 됨.


// 배열과 포인터의 관계에서 핵심 : 배열의 원소에 접근할때 포인터 연산으로도 가능하다는것.




