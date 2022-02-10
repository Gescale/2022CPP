#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    for(int i = 0; i < 5; i++)
    {
        cout << "Random number " << i << " is " << rand() << endl;
    }

    return 0;
}