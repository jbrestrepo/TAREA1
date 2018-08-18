// ESTA APLICACIÓN DETERMINA SI UN NUMERO ENTERO ES PAR O IMPAR


#include <iostream>
#include <string>

int main()
{
  int numero,operacion;
  
  std::cout << "IDENTIFICACION DE UN NUMERO PAR O IMPAR " <<std::endl;
  std::cout << "INGRESE UN NUMERO ENTERO" << std::endl;
  std::cin >> numero;
    
  operacion=numero%2;
  
  (operacion==0&&numero!=0) ? std::cout << "EL NUMERO ES PAR" : std::cout <<"" ;
  (operacion!=0&&numero!=0) ? std::cout << "EL NUMERO ES IMPAR" : std::cout <<"";
  (numero==0) ? std::cout <<"EL NUMERO ES CERO" : std::cout <<"";
  
  return 0;

}
