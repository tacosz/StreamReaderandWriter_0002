#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main()
{
    cout << "Awal program" << endl;
    try
    {
        array <int, 3> data = { 6, 7, 8 };
        cout << data.at(2) << endl;
    }
    catch (exception& e)
    {
        cout << e.what() << endl;
    }
}
