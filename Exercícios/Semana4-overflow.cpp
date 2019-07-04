/* SEMANA 4 - GRUPO DE ESTUDOS C++ DA UNIVESP
 * Temas: Streams e modificadores de tipo.
 * Autor: Alejandro
 * Data:  30/06/2019
 *
 * Esse código tenta exemplificar as dificuldades que aparecem quando
 * tentamos atribuir um tipo de dado a uma variável de um outro tipo.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int inteiro;
    short inteiro_curto;
    long inteiro_longo;
    unsigned inteiro_positivo;
    unsigned short inteiro_curto_positivo;
    unsigned long inteiro_longo_positivo;

    cout << "\nExperimente com os seguintes valores:\n";
    cout << "- Um inteiro positivo <=  32767;\n";
    cout << "- Um inteiro positivo >   32767;\n";
    cout << "- Um inteiro negativo >= -32768;\n";
    cout << "- Um inteiro negativo <  -32768;\n";
    cout << "Ingrese um número: ";
    cin >> inteiro;

    cout << "\nA continuação vamos atribuir esse valor a outras variáveis de tipos inteiros "
         << "só que com modificadores de tipo:\n" << endl;

    inteiro_curto = inteiro;
    inteiro_longo = inteiro;
    inteiro_positivo = inteiro;
    inteiro_curto_positivo = inteiro;
    inteiro_longo_positivo = inteiro;

    cout << setw(22)
         << "int -> " << "[" << sizeof(int) << "B] "
         << inteiro << endl;
    cout << setw(22)
         << "short int -> " << "[" << sizeof(short int) << "B] "
         << inteiro_curto << endl;
    cout << setw(22)
         << "long int -> " << "[" << sizeof(long int) << "B] "
         << inteiro_longo << endl;
    cout << setw(22)
         << "unsigned int -> " << "[" << sizeof(unsigned int) << "B] "
         << inteiro_positivo << endl;
    cout << setw(22)
         << "unsigned short int -> " << "[" << sizeof(unsigned short int) << "B] "
         << inteiro_curto_positivo << endl;
    cout << setw(22)
         << "unsigned long int -> " << "[" << sizeof(unsigned long int) << "B] "
         << inteiro_longo_positivo << endl;
    cout << endl;

    cout << "É isso que você esperava?\n" << endl;

    return 0;
}

