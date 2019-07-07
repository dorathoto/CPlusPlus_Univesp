#include <iostream>

int main()
/*
 * Imprime o standard padrão do compilador.
 * Standards: c++89, c++03, c++11, c++14, c++17, etc.
 * No momento da compilação, podemos forçar um standard
 * com a opção -std=c++11, substituindo o standard desejado.
 */
{
    std::cout << "Standard: " <<  __cplusplus << std::endl;
    return 0;
}

