// struct & array & pointer


// 구조체를 함수에 전달하면 복사본이 전달되므로 구조체가 매우 크면 성능 문제가 발생함.
// 이때 복사본 대신 구조체에 대한 포인터(*주소를) 전달하면 해결가능

#include <iostream>
using namespace std;


struct Person
{
    std::string name; // 맴버 선언
    int age;
    float height;
    float weight;

};


void check_age(Person* _adult, int _count)
{
    for (int i=0; i<_count;i++)
    {
        if (_adult[i].age >= 25)
        {
            cout << "name : " << _adult[i].name << endl;
            cout << "age : " << _adult[i].age << endl;
            cout << "height : " << _adult[i].height << endl;
            cout << "weight : " << _adult[i].weight << endl;
            // cout << "weight : " << _adult[i] << endl;
        }

        if (i =2)
        {
            cout << _adult[i].age << endl;
            cout << _adult[i].name << endl;
            cout << _adult[i].height << endl;
        }
    }
}

int main()
{
    Person adult[3] =
    {
        {"bran",22,180,33},
        {"jessica",21,179,22}
    };

    check_age(adult,3);

    return 0;

}