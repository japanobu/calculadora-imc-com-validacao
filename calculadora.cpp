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
 std::cout << "Seu IMC é:" << IMC << std::endl;
 if (IMC < 18.5){
     std::cout << "Abaixo do peso ideal" << std::endl;
 }
 else if (IMC <= 24.9){
     std::cout << "Peso normal" << std::endl;
 }
 
else if (IMC <= 29.9){
     std::cout << "Sobrepeso" << std::endl;
 }
 else if (IMC <= 34.9){
     std::cout << "Obesidade grau I" << std::endl;
 }
else if (IMC <= 39.9){
     std::cout << "Obesidade grau II" << std::endl;
 }
else {
     std::cout << " Obesidade grave/grau III" << std::endl;
 }    

 return 0;   
}
