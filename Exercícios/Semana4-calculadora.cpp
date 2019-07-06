#include <iostream>
#include <string>

using namespace std;

int main()
{
    char op;
    float a, b, res;

    cout << "Use operador ';' para sair." << endl;

    while (true)
    {
        cout << "Calc: ";
        cin >> a;
        cin.get(op);
        cin >> b;

        switch (op)
        {
            case '+':
                res = a + b;
                break;
            case '-':
                res = a - b;
                break;
            case '*':
                res = a * b;
                break;
            case '/':
                res = a / b;
                break;
            case ';':
                return 0;
                break;
            default:
                res = 0;
                cout << "Operador inválido!" << endl;
        }

        cout << a << op << b << " = " << res << endl
             << endl;
    }

    return 0;
}

