// COMPARACION DE DOS NUMEROS ENTEROS Y MUESTRA EL MAYOR


#include <iostream>
#include <string>

int main()
{
  int num1,num2;
  
  std::cout << "COMPARACION DE DOS NUMEROS ENTEROS E INDICACION DEL MAYOR " <<std::endl;
  std::cout << "INGRESE EL PRIMER NUMERO ENTERO" << std::endl;
  std::cin >> num1;
  std::cout << "INGRESE EL SEGUNDO NUMERO ENTERO" << std::endl;
  std::cin >> num2;
  
  (num1>num2) ? std::cout << "EL NUMERO MAYOR ES: " <<num1 : std::cout <<"EL NUMERO MAYOR ES:" <<num2 << std::endl;
  
  return 0;

}
