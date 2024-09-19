#include <iostream>
#include <string>
using namespace std;
int main()
{
    int int1 = 23;
    int int2 = -52;
    int int3 = 79;
    int int4 = 3;

    cout << "int1 " << int1 << "int2 " << int2 << endl;
    while (int1 != int2) {
        int1++;

    }
    cout << "int1 " << int1 << "int2 " << int2 << endl;
    int int5 = 38;

    int int6 = 13;
    cout << "int5  " << int5 << "int6  " << int6 << endl;

    while (int5 > int6) {
        int6++;
    }
    cout << "int5 " << int5 << "int6 " << int6 << endl;
}
