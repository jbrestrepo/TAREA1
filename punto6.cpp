// ESTA APLICACION RECIBE 3 STRINGS Y
// MUESTRA CUAL ES EL PRIMERO ALFABETICAMENTE

#include <iostream>
#include <string>

int main()

{
    std::string word1,word2,word3;
    std::cout << "INGRESE LA PRIMERA PALABRA" << std::endl;
    getline(std::cin,word1);
    std::cout << "INGRESE LA SEGUNDA PALABARA" << std::endl;
    getline(std::cin,word2);
    std::cout << "INGRESE LA TERCERA PALABRA" << std::endl;
    getline(std::cin,word3);
    
    (word1<word2&&word1<word3) ? std::cout <<"LA PRIMERA PALABRA EN ORDEN ALFABETICO ES: " <<word1 : std::cout <<" ";
    (word2<word1&&word2<word3) ? std::cout <<"LA PRIMERA PALABRA EN ORDEN ALFABETICO ES: " <<word2 : std::cout <<" ";
    (word3<word1&&word3<word2) ? std::cout <<"LA PRIMERA PALABRA EN ORDEN ALFABETICO ES: " <<word3 : std::cout <<" ";
}
