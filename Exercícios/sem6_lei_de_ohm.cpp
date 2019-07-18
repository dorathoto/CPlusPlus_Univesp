/*
 * =====================================================================================
 *
 *       Filename:  semana_6_lei_de_ohm.cpp
 *
 *    Description:  Calculadora Lei de Ohm
 *
 *        Version:  1.0
 *        Created:  13/07/2019 09:42:19
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alejandro Druetta
 *   Organization:  Eng. da Computação - Univesp
 *
 * =====================================================================================
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float gran1, gran2;
    char uni1, uni2;

    cout << setprecision(3);
    while (true)
    {
        float v=0, i=0, r=0;

        cout << "\n    *** Calculadora Lei de Ohm ***    \n" << endl;
        cout << "    Grandezas permitidas: V, A e R\n" << endl;
        cout << "    Introduça a primeira grandeza: ";
        cin >> gran1 >> uni1;
        cout << "    Introduça a segunda grandeza: ";
        cin >> gran2 >> uni2;

        uni1 = toupper(uni1);
        uni2 = toupper(uni2);

        if (uni1 == uni2)
        {
            cout << "    Erro: As duas grandezas são iguais!\n" << endl;
            return 1;
        }
        if (uni1 != 'V' && uni1 != 'A' && uni1 != 'R')
        {
            cout << "    Erro: A primeira grandeza não é válida!\n" << endl;
            return 2;
        }
        if (uni2 != 'V' && uni2 != 'A' && uni2 != 'R')
        {
            cout << "    Erro: A segunda grandeza não é válida!\n" << endl;
            return 3;
        }

        if (uni1 == 'V') v = gran1;
        else if (uni1 == 'A') i = gran1;
        else r = gran1;

        if (uni2 == 'V') v = gran2;
        else if (uni2 == 'A') i = gran2;
        else r = gran2;

        if (v == 0) cout << "    V = " << i * r << " volts" << endl;
        if (i == 0) cout << "    I = " << v / r << " ampéres" << endl;
        if (r == 0) cout << "    R = " << v / i << " ohms" << endl;

        cout << endl;
        cout << "-------------------------------------------" << endl;
    }

    return 0;
}

