#include <iostream>
#include <string>
using namespace std;

class contohOverload
{
    public:
    // konstruktor
    contohOverload(string str)
    {
        cout << "Konstruktor dengan string.\n"
             << "Argumen: " << str << endl;

    }
    contohOverload(int bil)
    {
        cout << "Konstruktor dengan string.\n"
             << "Argumen: " << bil << endl;
    }
};

int main ()
{
    contohOverload ovrStr ("Selamat belajar!");
    contohOverload ovBil (123);

    return 0;
}
