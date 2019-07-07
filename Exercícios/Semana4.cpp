#include <iostream>
#include <cstdio>
#include <cstdlib>

int main()
{
    int A = 0;
    short int B = 0;
    long int C = 0;
    signed int D = 0;
    unsigned int E = 0;
    short signed int F = 0;
    long signed int G = 0;
    short unsigned int H = 0;
    long unsigned int I = 0;
    std::cout << "Todos tipos de int:";
    std::cout << "\n";
    std::cout << "Um int ocupa " << sizeof(A) << "B.\n";
    std::cout << "Um short int ocupa " << sizeof(B) << "B.\n";
    std::cout << "Um long int ocupa " << sizeof(C) << "B.\n";
    std::cout << "Um signed int ocupa " << sizeof(D) << "B.\n";
    std::cout << "Um unsigned int ocupa " << sizeof(E) << "B.\n";
    std::cout << "Um short signed int ocupa " << sizeof(F) << "B.\n";
    std::cout << "Um long signed int ocupa " << sizeof(G) << "B.\n";
    std::cout << "Um short unsigned int ocupa " << sizeof(H) << "B.\n";
    std::cout << "Um long unsigned int ocupa " << sizeof(I) << "B.\n";
}
