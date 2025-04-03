
/*
#include <iostream> // preprocessing 전처리 # 

int main(){
    int i,j; //


    std::cout << "Enter num_1:"; // 문자열 출력     // printf
    // namespace  소속을 지정해주는 역할 앞선 코드에서 cin,cout 앞에 붙은 std::는 std라는 네임스페이스에 접근할때 쓰는 표현 
    // std는 standard의 줄임말로 C++언어에서 흔히 사용하는 여러가지 함수, 클래스, 객체, 유틸리티가 정의된 네임스페이스임


    // 네임스페이스는 내부 식별자 identifier(형식, 함수,변수 등)에 범위를 부여해 여러 라이브러리를 포함할때 이름이 충돌하는것을 방지하려고 사용
    // 따라서 같은 이름이더라도 네임스페이스가 다르면 서로 다른것으로 취급.aligna

    // 여러 라이브러리 예를들어 A라이브러리에서 print() 함수를 쓰고 B에서도 사용한다면
    // A::print()
    // B::print()는 각각 다른 네임스페이스를 사용하기에 충돌없이 공존함.
    
    // 매번 std:: 를 붙이는것이 번거롭다면 using namespace std코드를 작성해서 cin,cout 등이 사용될때는 무조건 std에 속한것을 호출한다.



    std::cin >> i; //사용자에게 정수를 입력받아 i에 저장 // scanf

    std::cout << "enter num_2:"; // 문자열 출력
    std::cin >> j;

    std::cout << "num1 + num2 = " << i+j <<std::endl; //두 수의 합 출력

    return 0;

}

*/



// compile : g++ -o main input_output.cpp

// g++ : GNU c++ compiler call    = source code => object code 
// main.cpp : copiled source code 

// -o main "output" 의 약자로, 컴파일 후 생성될 실행 파일의 이름을 지정
// 여기서 실행 파일의 이름을 main으로 지정
// 이 옵션을 사용하지않으면 기본적으로 a.out(Linux/Mac) a.exe(windows) 와 같은 이름으로 생성됨

// 1. 전처리(Preprocessing) 소스코드에서 #include, #define 등의 전처리 지시문을 처리

// 2. 컴파일(Compilation) 전처리된 코드를 어셈블리 언어 코드로 변환

// 3. 어셈블리(Assembly) 어셈블리 코드를 기계어 코드(오브젝트 파일)로 변환

// 4. 링크(Linking) 오브젝트 파일과 필요한 라이브러리들을 결합하여 최종 실행 파일을 만듭니다.



/*
#include <iostream>
using namespace std; // std 전체 네임 스페이스를 가져올때 이름 선언이 충돌 할 수 있기 때문에, 구조가 복잡하고 사용수준의 코드에서는 새로운 함수와 클래스들이 std 네임스페이스에 추가될때 이름이 충돌할 수 있음.

int main(){
    int i, j;
    cout << "enter num1:";  // 문자열은 큰따옴표를 사용합니다.
    cin >> i;

    cout << "enter num2:";  // 문자열은 큰따옴표를 사용합니다.
    cin >> j;

    cout << "num1 + num2 = " << i + j << endl;

    return 0;
}

*/


// cout : 형식지정자 사용않고 다양한 타입 변수 출력가능.
// cout << 연산자로 출력대상 전달. 연산자가 가리키는 방향은 정보의 흐름을 나타냄. <<을 여러개 이용하면 연속 출력 가능.






