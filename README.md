# ⚖️ Calculadora de Índice de Massa Corporal (IMC) em C++

Este é um projeto de uma **Calculadora de IMC** desenvolvida em **C++**. O programa coleta dados biométricos do usuário (peso e altura), calcula o índice de massa corporal utilizando funções matemáticas e classifica o resultado de acordo com as tabelas de saúde padrão da OMS.

O grande diferencial técnico deste código de console é o foco em **experiência do usuário (UX) e segurança**. O programa implementa uma robusta trava contra falhas de digitação, garantindo que letras ou caracteres inválidos não quebrem a execução do algoritmo.

## 🚀 Funcionalidades

* **Cálculo de Precisão:** Utiliza a biblioteca `<cmath>` (`pow`) para cálculo exponencial correto da altura ao quadrado com dados de ponto flutuante (`float`).
* **Tratamento Antifalhas (Input Validation):** Implementação de loops `while` combinados com `cin.clear()` e `cin.ignore()` para capturar erros de digitação e limpar o fluxo de entrada caso o usuário digite texto em vez de números.
* **Classificação Completa:** Estrutura condicional encadeada de `if / else if` que divide os resultados nas 6 faixas de peso tradicionais (desde abaixo do peso ideal até obesidade mórbida de grau III).

## 🛠️ Tecnologias Utilizadas

* **Linguagem:** C++
* **Bibliotecas Nativas:** `<iostream>`, `<cmath>` (para funções matemáticas) e `<limits>` (para gerenciamento do buffer).
* **Estruturas de Controle:** `if / else if / else` e laços de repetição `while`.

## 💻 Como Rodar o Projeto

1. Certifique-se de ter um compilador de C++ instalado (como o GCC).
2. Clone o repositório ou crie um arquivo chamado `imc.cpp` com o código.
3. Compile o arquivo pelo terminal:
   ```bash
   g++ imc.cpp -o calculadora_imc
   ```
4. Execute o programa:
   ```bash
   ./calculadora_imc
   ```
