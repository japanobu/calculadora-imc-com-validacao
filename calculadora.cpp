#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main()
{
 float peso, altura, IMC;
 std::cout << "Insira o valor do seu peso em kg:" << std::endl;
 std::cin >> peso;
 std::cout << "Insira o valor da sua altura em metros:" << std::endl;
 std::cin >> altura;
 IMC = peso/pow(altura,2);
 if (IMC < 18.5){
     std::cout << "Abaixo do peso ideal" << std::endl;
 }
 if ( 18.5<=IMC && IMC<= 24.9){
     std::cout << "Peso normal" << std::endl;
 }
 
 if (25<= IMC && IMC <= 29.9){
     std::cout << "Sobrepeso" << std::endl;
 }
 if (30<=IMC && IMC <= 34.9){
     std::cout << "Obesidade grau I" << std::endl;
 }
 if (35<= IMC && IMC <= 39.9){
     std::cout << "Obesidade grau II" << std::endl;
 }
 if (IMC > 40){
     std::cout << " Obesidade grave/grau III" << std::endl;
 }    
 
 return 0;   
}
