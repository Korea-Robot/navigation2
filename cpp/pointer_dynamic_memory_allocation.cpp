#include <iostream>
#include <string>

using namespace std;

int main()
{
    int customer_num = 0;
    cout << "today customer : ";
    cin >> customer_num; 

    string* bread= new string[customer_num];

    for (int i =0 ; i<customer_num;i++)
    {
        bread[i] = "bread_" + to_string(i);
    }

    for (int i =0 ; i<customer_num;i++)
    {
        cout << *(bread+i) << endl;
        // cout << bread[i]<< endl;
    }

}

// 포인터를 다룰때 주의

// 포인터를 역참조하기전에 포인터가 유효한 메모리를 가리키는지 확인. 

// 유효하지않은 포인터를 역참조 => 세그멘테이션 실패 or  runtime 오류