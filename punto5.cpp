// COMPARAR 3 FLOAT Y MOSTRAR EL MAYOR
#include <string>
#include <iostream>

int main()

{
  float numero1,numero2,numero3;
  
  std::cout << "INGRESE EL PRIMER NUMERO TIPO FLOAT" << std::endl;
  std::cin >> numero1;
  
  std::cout <<"INGRESE EL SEGUNDO NUMERO TIPO FLOAT" << std::endl;
  std::cin >> numero2;
  
  std::cout <<"INGRESE EL TERCER NUMERO TIPO FLOAT" << std::endl;
  std::cin >> numero3;
  
  (numero1>numero2&&numero1>numero3)?std::cout<<"el numero mayor es:"<<numero1: std::cout<<"";
  (numero2>numero1&&numero2>numero3)?std::cout<<"el numero mayor es:"<<numero2: std::cout<<"";
  (numero3>numero1&&numero3<numero2)?std::cout<<"el numero mayor es:"<<numero3: std::cout<<"";
}
