// ESTE PROGRAMA SEPARA UN NÚMERO ENTERO DE 5 DIGITOS EN SUS DIGITOS
#include <iostream>
#include <string>

int main()

{
  int entero;
  int dig1,dig2,dig3,dig4,dig5;
  
  std::cout << "INGRESE UN NUMERO ENTERO DE 5 DIGITOS " << std::endl;
  std::cin >> entero;
  
  dig1=entero/10000;
  dig2=(entero%10000)/1000;
  dig3=(entero%1000)/100;
  dig4=(entero%100)/10;
  dig5=entero%10;
  
  (entero>=10000)? std::cout << "EL NUMERO SEPARADO POR DIGITOS ES:  "  << dig1 <<"   " << dig2 << "   " << dig3 << "   " << dig4 <<"   " << dig5 : std::cout << "EL NUMERO NO ES DE 5 DIGITOS" << std::endl;
}
