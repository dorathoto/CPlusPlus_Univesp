/*
 * =====================================================================================
 *
 *       Filename:  semana_6_conv_polar_rect.cpp
 *
 *    Description:  Conversor Polar / Retangular
 *
 *        Version:  1.0
 *        Created:  17/07/2019 16:54:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alejandro Druetta
 *   Organization:  Eng. da Computação - Univesp
 *
 * =====================================================================================
 */

#include <iostream>
#include <cmath>
using namespace std;

#define M_PI 3.14159265358979323846

float rad(float deg);
float deg(float rad);

int main()
{
    char op = '/';
    float x, y, mod, fase;

    while (op != 's')
    {
        cout << "--------------------------------------------" << endl
             << "    *** Conversor Polar / Retangular ***    " << endl
             << "--------------------------------------------" << endl
             << "    P - Obter a representação polar         " << endl
             << "    R - Obter a representação retangular    " << endl
             << "    S - Sair                                " << endl
             << "--------------------------------------------" << endl
             << "    Opção? ", cin >> op;
        cout << "--------------------------------------------" << endl;

        op = tolower(op);
        if (op == 's') continue;
        if (op == 'p')
        {
            cout << "    x: ", cin >> x;
            cout << "    y: ", cin >> y;
            mod = sqrt(pow(x, 2) + pow(y, 2));
            fase = deg(atan(y/x));
        }
        else
        {
            cout << "    Módulo: ", cin >> mod;
            cout << "    Fase:   ", cin >> fase;
            x = mod * cos(rad(fase));
            y = mod * sin(rad(fase));
        }

        cout << "--------------------------------------------" << endl
             << "                  Resultado                 " << endl
             << "--------------------------------------------" << endl;

        if (op == 'p')
        {
            cout << "    Módulo: " << mod << endl
                 << "    Fase:   " << fase << "°" << endl;
        }
        else
        {
            cout << "    x: " << x << endl
                 << "    y: " << y << endl;
        }
    }

    return 0;
}


float rad(float deg)
{
    return deg * M_PI / 180;
}

float deg(float rad)
{
    return rad * 180 / M_PI;
}

