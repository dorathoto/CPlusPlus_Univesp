#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    // diferenças entre wstring e string:
    //https://stackoverflow.com/questions/402283/stdwstring-vs-stdstring
    wstring ws1 = L"Teste: \u221E"; //o prefixo L habilita unicode
    wstring ws2 = L"Euro: \u3332E";
    string v1 = "teste";

    cout << v1 << endl;   //para string
    wcout << ws1 << endl; //para wstring
}
