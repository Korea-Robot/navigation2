// struct & array & pointer


#include <iostream>
using namespace std;


struct Person
{
    std::string name;
    int age;
    float height;
    float weight;

};


void check_age(Person* _array, int _count)
{
    for (int i=0; i<_count;i++)
    {
        _array[i].age = i+1;
    }
}

Person adult[3];

int main()
{
    check_age(adult,3);

    cout << adult;

    for (int i; i<5,i++)
    {
        cout << adult[i] << endl;
    }

}