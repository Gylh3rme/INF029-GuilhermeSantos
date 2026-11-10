# Trabalho 2 - Estrutura de Dados com Ponteiros e Alocação Dinâmica

**Disciplina:** INF029 - Laboratório de Programação  
**Curso:** Análise e Desenvolvimento de Sistemas (ADS)  
**Instituição:** Instituto Federal de Educação, Ciência e Tecnologia da Bahia (IFBA)  

---

## 📌 Descrição do Projeto

Este projeto consiste no desenvolvimento de um programa em **Linguagem C** capaz de simular e gerenciar uma estrutura de dados dinâmica composta por uma **estrutura principal de 10 posições fixas**[cite: 1]. 

Cada uma destas posições pode apontar para uma **estrutura auxiliar de tamanho variável** que armazena números inteiros[cite: 1]. O objetivo central é praticar a utilização de ponteiros, alocação dinâmica de memória, funções e manipulação de arrays[cite: 1, 2].

---

## 🛠️ Funcionalidades

O programa disponibiliza um menu interativo com as seguintes opções:

1. **Inserir elemento (1 por vez):**
   - O utilizador informa a posição da estrutura principal (1 a 10) onde deseja inserir o número[cite: 1].
   - Caso a estrutura auxiliar ainda não tenha sido criada, é solicitado ao utilizador o tamanho total desejado para alocá-la[cite: 1].
   - Notifica o utilizador caso não haja mais espaço disponível[cite: 1].

2. **Listar os números de todas as estruturas:**
   - Exibe o tamanho alocado e os elementos atualmente armazenados em cada estrutura auxiliar ativa[cite: 1].

3. **Listar os números ordenados para cada estrutura auxiliar:**
   - Apresenta os elementos de cada estrutura auxiliar individualmente ordenados[cite: 1].

4. **Listar todos os números de forma ordenada:**
   - Consolida e exibe todos os números armazenados em todas as estruturas de forma globalmente ordenada[cite: 2].

5. **Excluir um elemento:**
   - O utilizador especifica a posição na estrutura principal e o número que deseja remover[cite: 2].
   - Remove a primeira ocorrência do número informado[cite: 2].
   - A memória alocada para a estrutura não é reduzida com a remoção[cite: 2].

6. **Aumentar o tamanho de uma estrutura auxiliar:**
   - Permite expandir a capacidade de uma estrutura auxiliar existente, adicionando novas posições dinamicamente[cite: 2].

7. **Sair:**
   - Finaliza a execução do programa e liberta a memória alocada[cite: 2].

---

## ⚙️ Regras e Requisitos do Projeto

- **Trabalho Individual**[cite: 2].
- **Variáveis Globais:** É estritamente proibida a criação de parâmetros ou variáveis globais[cite: 2].
- **Modularização:** O código deve ser estruturado utilizando funções e boas práticas de programação[cite: 2].
- **Gestão de Memória:** Uso correto de ponteiros e alocação/realocação dinâmica de memória (`malloc`, `realloc`, `free`).

---

## 📂 Estrutura Visual da Dados

```text
Estrutura Principal (1 a 10 posições fixas)[cite: 1]
[1] -> [ 4 |   ] (Tamanho: 2)[cite: 1]
[2] -> [ 5 | 3 |   |   ] (Tamanho: 4)[cite: 1]
[3] -> NULL
[4] -> [ 2 | 35 | 23 | ... ] (Tamanho variável)[cite: 1]
...