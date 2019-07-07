#include <iostream>
#include <cmath>

/*
Uso de funções
https://docs.microsoft.com/pt-br/cpp/cpp/functions-cpp?view=vs-2019
*/

using namespace std;

float funcAdicionar(float x, float y)
{
    return x + y; //modo clean
}
float funcSubtrair(float x, float y)
{
    float subtrac;
    subtrac = x - y;
    return subtrac; //modo verboso
}
float funcMultiplicar(float x, float y)
{
    return x * y;
}
float funcDivisao(float x, float y)
{
    return x / y;
}

string Cabecalho()
{
    cout << "\t\tCALCULATOR by UNIVESP\n\n";
}
string Perguntas()
{
    cout << "Escolha uma Operacao: " << endl;
    cout << "\n(1) para Soma: ";
    cout << "\n(2) para Subtrac: ";
    cout << "\n(3) para multiplic: ";
    cout << "\n(4) para divisao: ";
    cout << "\n(5) para potencia: ";
    cout << "\n(6) para raiz: " << endl;
}
int main()
{
    float num, num2;
    int op;
    Cabecalho();
    while (op != 0)
    {
        Perguntas();
        cin >> op;
        if (op < 1 || op > 6)
        {
            system("cls");
            Cabecalho();
            cout << "NUMERO INVALIDO!\n"
                 << endl;
            Perguntas();
            cin >> op;
        }
        system("cls"); //limpa a tela
        switch (op)
        {
        case 1:
            Cabecalho();
            cout << "\nDigite os numeros: \n";
            cin >> num >> num2;
            cout << "Resultado e: " << funcAdicionar(num, num2) << endl;
            break;
        case 2:
            Cabecalho();
            cout << "\nDigite os numeros: \n";
            cin >> num >> num2;
            cout << "Resultado e: " << funcSubtrair(num, num2) << endl;
            break;
        case 3:
            Cabecalho();
            cout << "\nDigite os numeros: \n";
            cin >> num >> num2;
            cout << "Resultado e: " << funcMultiplicar(num, num2) << endl;
            break;
        case 4:
            Cabecalho();
            cout << "\nDigite os numeros: \n";
            cin >> num >> num2;
            cout << "Resultado e: " << funcDivisao(num, num2) << endl;
            break;
        case 5:
            Cabecalho();
            cout << "\nDigite os numeros: \n";
            cin >> num;
            cout << "Elevado a: ";
            cin >> num2;
            cout << "Resultado e: " << pow(num, num2) << endl;
            break;
        case 6:
            Cabecalho();
            cout << "\nDigite um numero: \n";
            cin >> num;
            cout << "Resultado e: " << sqrt(num) << endl;
            break;
        }
    }
}
