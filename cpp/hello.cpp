// #include <iostream>
// using namespace std;

// void print() {
//     // function local scope
//     int value = 10;
//     cout << "print function local var value: " << value << endl;
// }

// int hello() {
//     // Print a message and return a value.
//     cout << "print space bar" << endl;  // Added missing semicolon
//     // cout << endl;

//     int value = 42;  // For example, assign 42 to value
//     return value;
// }

// int main() {
//     // main function (int indicates that it returns an integer)
//     int value = 5;
//     cout << "print function local value : " << value << endl;
    
//     print();
    
//     cout << "print value change : " << value << endl;
    
//     // Optionally, call hello() and print its return value.
//     int helloValue = hello();
//     cout << "hello() returned: " << helloValue << endl;
    
//     return 0;
// }


 

// L- value & R- value 비교

// C 언어에서 L - value, R - value 는 각각 왼쪽과 오른쪽 값을 의미함.

// l-value = variable , r-value = constants




// C ++ 에서 의미는 다음과 같음
// L-value : 주로 대입 연산자의 왼쪽에 나타내는 값으로 메모리 위치를 가리키거나 수정할 수 있는 표현식, 이름이 있다 
// 에) 변수 이름 , 배열 요소, 클래스 맴버

// R- value : 주로 대입연산자의 오른쪽에 나타나는 값으로, 임시 값이나 메모리상에 위치가 없는 값을 가리키는 표현식
// 예) 임시 객체, 리터럴



a = 1; // 
1 = a; // 오류

a = b+1; // 성공 


// 형식 변환. 변수의 형식을 변경해서 사용할 경우. 
// 암시적 형 변환 , 명시적 형변환  type casting

// implicit cast  : compiler auto casting
// explicit cast  : directly casting by developer.
