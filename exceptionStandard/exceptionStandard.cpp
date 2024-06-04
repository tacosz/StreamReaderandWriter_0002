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
        //penangkapan menggunakan obyek exception
    {
        cout << e.what() << endl;
        /*akan dieksekusi karna array data hanya memiliki 3 elemen*/
    }
    cout << "Baris program yang terakhir" << endl;
    /*oenanda 2: bahwa program berjalan tanpa henti meskipun terjadi kesalahan*/
    return 0;
}
