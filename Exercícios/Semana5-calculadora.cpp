#include <iostream>

using namespace std;

int main()
{
    char op;
    float a, b, res=0;

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
                cout << "Operador inválido!" << endl;
        }

        cout << a << op << b << " = " << res << "\n"
             << endl;
    }

    return 0;
}

