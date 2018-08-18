// ESTE PROGRAMA CONVIERTE DE ENTERO A FLOTANTE (SIN PERDIDA DE INFORMACIÓN)
// Y DE FLOTANTE A ENTERO (CON PERDIDA DE INFORMACIÓN
//(CAMBIO DE TIPO EXPLICITO E IMPLICITO)

#include <iostream>
#include <string>

int main()

{
    int numberE;
    float number2F;
    
    std::cout << "CONVERTIDOR DE UN NUMERO ENTERO A FLOTANTE Y VICEVERSA" << std::endl;
    std::cout << "INGRESE UN NUMERO ENTERO" << std::endl;
    std::cin >> numberE;
    
    float numberF =numberE;    //CONVERSION DE TIPO IMPLICITA
    
    std::cout << "LA CONVERSION DE SU NUMERO ENTERO A FLOTANTE ES:  " << numberF << std::endl;
    std::cout << "NO HAY PERDIDA DE INFORMACION" << std::endl;
    
    std::cout << "AHORA INGRESE UN NUMERO FLOTANTE" << std::endl;
    std::cin >> number2F;
    
    int number2E;
    number2E = int (number2F);   //CONVERSION DE TIPO EXPLICITA - NOTACION FUNCIONAL
    
    std::cout << "LA CONVERSION DE SU NUMERO FLOTANTE A ENTERO ES: " << number2E << std::endl;
    std::cout << "HAY PERDIDA DE INFORMACION" << std::endl;
            
}
