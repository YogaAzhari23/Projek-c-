#include <iostream>
#include <string>
using namespace std;

int main()

{
    string penyanyiJazz[5];

    penyanyiJazz[0] = "yoga azhari";
    penyanyiJazz[1] = "nurmulia";
    penyanyiJazz[2] = "jupek";
    penyanyiJazz[3] = "nova brigade";
    penyanyiJazz[4] = "hetty";
    penyanyiJazz[4] = "edi";

    for (int j = 0; j < 5; j++)
        cout << j+1 << ". "
            << penyanyiJazz[j] << endl;

    return 0;
}
