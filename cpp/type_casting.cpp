// implicit type cast

#include <iostream>

using namespace std;

int main(){
    float float_value = 1.5f; // 원본 데이터는 부동 소수점 1.5

    double double_value = float_value; // 숫자 승격; 데이터 유실 없음 
    short int_value = float_value; // 숫자 변환 : 데이터 유실 발생 

    cout << "float_value : " << sizeof(float_value);
    cout << "float_value : " << sizeof(double_value);
    cout << "float_value : " << sizeof(int_value);

    
    // 컴파일 발생할때 경고 메시지도 꼭살펴보기.
    
    // waring C4244: ' 뭐시기 뭐시기
    
    
    //////------------//////------------
    // explicit type cast
    
    
    int int_a = 10;

    int int_b = 5;

    int int_avg = (int_a+int_b) / 2 ;

    float float_avg1 = double(int_a+int_b) /2 ;
    float float_avg2 = float(int_a+int_b) /2 ;
    cout << endl;
    cout << endl;
    
    cout << "int avg" << int_avg << endl;
    cout << "float avg1 " << float_avg1;
    cout << endl;
    cout << "float avg1 " << float_avg2;


}

// key word 특별한 의미로 정의해두 ㄴ식별자. 

