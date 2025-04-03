#include <iostream>

using namespace std;

int main()
{
    cout << "ascii code print [32~126]:\n";

    for (char i = 32; i <= 126; i++)
    {
        // ascii code print 16 enter
        cout << i << ((i%16==15) ? '\n' :' ');

    }

    return 0;
}



// char ascii code 7bit data type, else 1bit used 통신 확인용 패리티 비트(parity bit)

