#include <iostream>

int main()
/*
 * Imprime o standard padrão do compilador.
 * Standards: c++89, c++03, c++11, c++14, c++17, etc.
 * No momento da compilação, podemos forçar um standard
 * com a opção -std=c++11, substituindo o standard desejado.
 * 
 *  199711 for C++98,
    201103 for C++11
    201402 for C++14
    201703 for C++17
 */
{
    std::cout << "Standard: " << __cplusplus << std::endl;
    return 0;
}
