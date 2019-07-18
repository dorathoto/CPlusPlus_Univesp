/*
 * =====================================================================================
 *
 *       Filename:  semana_6_inst_eletricas.cpp
 *
 *    Description:  Calculos Trafo Ideal
 *
 *        Version:  1.0
 *        Created:  17/07/2019 14:37:32
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alejandro Druetta
 *   OrganicargaSecation:  Eng. da Computação - Univesp
 *
 * =====================================================================================
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    unsigned espPri, espSec, cargaSec;
    float vPri, alfa, corrPri, vSec, corrSec;

    cout << "----------------------------------------" << endl
         << "          *** Trafo Ideal ***           " << endl
         << "----------------------------------------" << endl;
    cout << "    Espiras Primário?    ", cin >> espPri;
    cout << "    Espiras Secundário?  ", cin >> espSec;
    cout << "    Tensão Primário?     ", cin >> vPri;
    cout << "    Carga no Secundário? ", cin >> cargaSec;
    cout << "----------------------------------------" << endl
         << "              Resultados                " << endl
         << "----------------------------------------" << endl;

    alfa = (float) espPri / espSec;
    vSec = vPri / alfa;
    corrSec = vSec / cargaSec;
    corrPri = corrSec / alfa;

    cout << setprecision(2)
         << "    Fator Conversão:     " << alfa << endl
         << "    Tensão Secundário:   " << vSec << "V" << endl
         << "    Corrente Primário:   " << corrPri << "A" << endl
         << "    Corrente Secundário: " << corrSec << "A" << endl
         << "----------------------------------------" << endl;

    return 0;
}

