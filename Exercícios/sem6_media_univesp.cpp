/*
 * =====================================================================================
 *
 *       Filename:  media_univesp.cpp
 *
 *    Description: Calcula média de atividades e nota final
 *
 *        Version:  1.0
 *        Created:  12/07/2019 22:13:02
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

int main ()
{
    unsigned short i, numat;
    double nota, nfinal, media, total = 0;
    bool valida;

    cout << setprecision(2);
    cout << "\n    *** Calculadora de notas da Univesp ***    \n" << endl
         << "    Número de atividades? ";
    cin  >> numat;

    for (i=0; i<numat; i++)
    {
        valida = false;
        while (!valida)
        {
            cout << "    Atividade " << (i + 1) << "? ";
            cin >> nota;
            if (nota < 0 || nota > 10) cout << "    Nota inválida!" << endl;
            else
            {
                total += nota;
                valida = true;
            }
        }
    }

    media = total / numat;
    cout << "    A sua média das atividades foi: " << media << endl;

    valida = false;
    while (!valida)
    {
        cout << "    Nota da prova? ";
        cin >> nota;
        if (nota < 0 || nota > 10) cout << "    Nota inválida!" << endl;
        else valida = true;
    }

    nfinal = (0.4 * media) + (0.6 * nota);
    cout << "    A sua nota final vai ser: " << nfinal << endl;

    if (nfinal < 4.8) cout << "    Sinto muito..." << endl;
    else if (nfinal >= 5) cout << "    Parabéns!!!" << endl;
    else cout << "    Tomara que eles arredondem..." << endl;
    cout << endl;

    return 0;
}

