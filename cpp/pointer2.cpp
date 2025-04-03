#include <iostream>

int main()
{
    char char_value = 'A';
    int int_value = 123;
    double double_value = 123.456;
    int int_value2 = 0;
    // std::cout << int_value;

    char* char_pointer_value = &char_value;
    int* int_pointer_value = &int_value; // 

    std::cout << &int_value << std::endl; // 16진수 주소값이 나옴.
    
    
    std::cout << "char_value : " << char_value << std::endl;

    std::cout << " *cahr_pointer_value :" << *char_pointer_value;
    std::cout << std::endl;

    *char_pointer_value = 'Z';

    std::cout << *char_pointer_value << std::endl;


    // 다중포인터 변수 선언
    int** int_pt_pt = &int_pointer_value;
    int*** int_pt_pt_pt = &int_pt_pt;

    
    // **int_pt_pt = 1344;   
    ***int_pt_pt_pt = 1344;   
    
    

    std::cout << ***int_pt_pt_pt << std::endl; 
    std::cout << **int_pt_pt << std::endl; 
    std::cout << *int_pointer_value << std::endl; 




    return 0;
}

// 64bit 운영체제에서는 char, int double은 각각 1바이트 4바이트 8 바이트

// 변수를 선언 -> 자료형의 크기에 맞게 ㅗㅇ간 확보.

// 실제 공간의 주소 ; physical address

// 시작 메모리 주소는 프로그램을 실행할때 마다 달라질수있음.

// 데이터가 기록된 공간이 어디있는지 알수있는 시작메모리 주소는  매우 중요함.

// 메모리주소 : 메모리의 물리적 위치에 해당하는 고유 식별자. . 실제위치에 해당하는 가상 주소


//포인터 : 메모리 주소를 저장하는 변수 . 
// &는 피연산자의 주소를 읽어오는 주소 연산자.

// 포인터 변수도 일반 변수처럼 연속되는 메모리상에 8바이트 공간을 차지함. 
// 포인터 변수의 크기는 모두 같다.  시스템 아키텍쳐에 의해 결정됨.

// 역참조 연산자 사용 해서 접근.

// 한번 CPP 공부는 해야함.

