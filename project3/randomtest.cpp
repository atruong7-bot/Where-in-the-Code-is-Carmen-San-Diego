#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    // srand(static_cast<int>(time(nullptr))); 
    //if not compile

    // int r = rand() % (b - a + 1) + a; formula

    //  a random integer ≥ 1 and < 10
    // int r = rand() % 101;
    // for (int i = 0; i < 10; i++)
    // {   
    //     int r = (rand() % 100) + 1; //numbers from 1 - 100
    //     if (r <= 33)
    //     {
    //         cout << r << endl;
    //         cout << "33 chance" << endl;
    //     }

    //     else if (r >= 34)
    //     {
    //         cout << r << endl;
    //         cout << "77 chance "  << endl;
    //     }
    // }
    // int s = 1 + r % 9;

    for (int i = 0; i < 10; i++)
    {
        int r1 = (rand() % 6) + 1;
        int r2 = (rand() % 6) + 1;
        cout << "r1: " << r1 << endl;
        cout << "r2: " << r2 << endl;
    }
}
