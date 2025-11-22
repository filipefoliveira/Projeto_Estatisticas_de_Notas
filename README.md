# 📊 Calculadora de Estatísticas de Notas em C

Este projeto implementa uma calculadora de estatísticas de notas em linguagem C, desenvolvida para cumprir os objetivos de um trabalho acadêmico que visa praticar conceitos de **estruturas de controle**, **arrays (vetores)** e **modularização (funções)**.
Projeto da disciplina de Algoritmos e Pensamento Computacional da UDF - Centro Universitário.

## ✨ Funcionalidades

O programa permite ao usuário inserir notas de alunos (entre 0,0 e 10,0) de forma interativa e, em seguida, calcular e exibir as principais estatísticas descritivas.

* **Entrada Interativa:** Permite o cadastro contínuo de notas através de *loops* (`do-while`).
* **Validação de Dados:** Verifica se cada nota inserida está no intervalo válido de **0,0 a 10,0**.
* **Armazenamento em Vetor:** Utiliza um *array* (`float notas[]`) para guardar todas as notas válidas.
* **Modularização:** Cálculos são realizados por funções separadas, garantindo código limpo e reutilizável.
* **Menu de Estatísticas:** Interface em modo texto para escolher qual estatística exibir (`switch`).

---

## 🚀 Como Compilar e Executar

Para utilizar o projeto, você precisará de um compilador C (como o GCC).

1.  **Salve o código:** Salve o conteúdo do código em um arquivo, por exemplo, `main.c`.
2.  **Compile:** Abra o terminal ou prompt de comando no diretório do arquivo e use o GCC para compilar:
    ```bash
    gcc main.c -o estatisticas
    ```
3.  **Execute:** Rode o programa executável gerado:
    ```bash
    ./estatisticas
    ```
4.  **Interação:** Siga as instruções na tela para cadastrar as notas e, posteriormente, consultar as estatísticas.

---

## 💻 Estrutura do Código (`main.c`)

O código está dividido em duas partes principais, conforme a boa prática de modularização: a definição das funções de cálculo e a função principal (`main`) que gerencia a entrada de dados e a interface do usuário.

### Funções de Cálculo (Modularização)

| Função | Objetivo | Conceito |
| :--- | :--- | :--- |
| `calcularMedia()` | Calcula a soma das notas dividida pelo número total de notas. | Média Aritmética |
| `maiorNota()` | Encontra o maior valor no vetor de notas. | Estrutura de Repetição |
| `menorNota()` | Encontra o menor valor no vetor de notas. | Estrutura de Repetição |

### Implementação de Destaque

* **Entrada e Validação:** Um *loop* (`do-while`) gerencia a entrada contínua. Estruturas de decisão (`if/else`) validam a nota. É feita uma conversão de vírgula para ponto (`strchr`, `atof`) para garantir a leitura correta de números decimais no *locale* português.
* **Exibição das Estatísticas:** Após o cadastro, um segundo *loop* e um `switch` exibem as opções do menu e chamam as funções de cálculo.

---

## 📈 Etapas de Desenvolvimento (Progressão Acadêmica)

Este projeto foi estruturado em 5 etapas para introduzir gradualmente os conceitos de programação:

| Etapa | Foco Principal | Conceitos Abordados |
| :---: | :--- | :--- |
| **1** | Estrutura Sequencial | Entrada e saída de dados. |
| **2** | Estruturas de Decisão | `if-else` para validação (`0,0` a `10,0`). |
| **3** | Estruturas de Repetição | `do-while` para cadastro em *loop*. |
| **4** | Dados Compostos Homogêneos | `Arrays` (vetores) para armazenamento. |
| **5** | Modularização | Criação e uso de **Funções** e **Menu** (`switch`). |

---

## 👤 Equipe

**Projeto Desenvolvido por:** Amigos do Filipe

**Integrantes:**

* Daniel Miranda
* Filipe Fernandes
* Guilherme Vieira
* Paulo Sousa
