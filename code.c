#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <float.h>

#define MAX_NOTAS 100
#define MAX_INPUT_LEN 10 

// ===============================================
//           DEFINIÇÃO DAS FUNÇÕES
// ===============================================

float calcularMedia(float notas[], int count) {
    if (count == 0) return 0.0;
    float soma = 0.0;
    for (int i = 0; i < count; i++) {
        soma += notas[i];
    }
    return soma / count;
}

float maiorNota(float notas[], int count) {
    if (count == 0) return 0.0;
    float maximo = notas[0]; 
    for (int i = 1; i < count; i++) {
        if (notas[i] > maximo) {
            maximo = notas[i];
        }
    }
    return maximo;
}

float menorNota(float notas[], int count) {
    if (count == 0) return 0.0;
    float minimo = notas[0]; 
    for (int i = 1; i < count; i++) {
        if (notas[i] < minimo) {
            minimo = notas[i];
        }
    }
    return minimo;
}

// ===============================================
//           FUNÇÃO PRINCIPAL (MAIN)
// ===============================================
int main() {
    setlocale(LC_ALL, "Portuguese"); 

    float notas[MAX_NOTAS];
    char input_buffer[MAX_INPUT_LEN]; 

    float nota_atual;
    int opcao_cadastro;
    int opcao_estatistica;
    int count = 0;
    
    float media, maior, menor;

    printf("|----------------------------------------|\n");
    printf("|  Calculadora de Estatisticas de Notas  |\n");
    printf("|         (Projeto Completo)             |\n");
    printf("|----------------------------------------|\n\n");

    do {
        if (count >= MAX_NOTAS) {
            printf("AVISO: Limite maximo de %d notas atingido. Encerrando...\n", MAX_NOTAS);
            break;
        }

        printf("------------------------------------------\n");
        printf("Cadastrando a nota numero %d (0,0 a 10,0):\n", count + 1); 
        printf("Digite a nota (use ponto ou virgula): ");
        
        if (scanf("%9s", input_buffer) != 1) { 
             printf("ERRO: Entrada invalida. Por favor, insira um valor.\n");
             while (getchar() != '\n'); 
             continue; 
        }

        char *virgula = strchr(input_buffer, ','); 
        if (virgula != NULL) {
            *virgula = '.'; 
        }

        nota_atual = atof(input_buffer); 

        if (nota_atual >= 0.0 && nota_atual <= 10.0) {
            notas[count] = nota_atual; 
            count++;                   
            printf("--> Nota %.2f cadastrada com sucesso.\n", nota_atual);
        } else {
            printf("ERRO: Nota %.2f invalida. A nota deve ser entre 0,0 e 10,0.\n", nota_atual);
        }
        
        do {
            printf("\nOpcoes:\n");
            printf(" [1] Adicionar mais uma nota\n");
            printf(" [2] Encerrar a insercao\n");
            printf("Escolha uma opcao: ");
            
            if (scanf("%d", &opcao_cadastro) != 1) {
                 printf("ERRO: Opcao invalida. Tente novamente.\n");
                 while (getchar() != '\n');
                 opcao_cadastro = 0; 
                 continue;
            }

            if (opcao_cadastro == 2) {
                break; 
            } else if (opcao_cadastro != 1) {
                printf("Opcao invalida. Digite 1 ou 2.\n");
            }
        } while (opcao_cadastro != 1); 

    } while (opcao_cadastro != 2); 
    
    printf("\n==========================================\n");
    
    if (count == 0) {
        printf("Nenhuma nota valida foi cadastrada.\n");
    } else {
        printf("Cadastro encerrado. Total de %d notas validas inseridas.\n", count);
        
        media = calcularMedia(notas, count);
        maior = maiorNota(notas, count);
        menor = menorNota(notas, count);
        
        do {
            printf("\nMENU DE ESTATISTICAS:\n");
            printf(" [1] Exibir Media\n");
            printf(" [2] Exibir Maior Nota\n");
            printf(" [3] Exibir Menor Nota\n");
            printf(" [4] Exibir Todas as Estatisticas\n");
            printf(" [5] Sair do Programa\n");
            printf("Escolha uma opcao: ");
            
            if (scanf("%d", &opcao_estatistica) != 1) {
                 printf("ERRO: Opcao invalida. Tente novamente.\n");
                 while (getchar() != '\n');
                 opcao_estatistica = 0; 
                 continue;
            }

            printf("------------------------------------------\n");
            switch (opcao_estatistica) {
                case 1:
                    printf("Media Aritmetica: %.2f\n", media);
                    break;
                case 2:
                    printf("Maior Nota: %.2f\n", maior);
                    break;
                case 3:
                    printf("Menor Nota: %.2f\n", menor);
                    break;
                case 4:
                    printf("Media Aritmetica: %.2f\n", media);
                    printf("Maior Nota: %.2f\n", maior);
                    printf("Menor Nota: %.2f\n", menor);
                    break;
                case 5:
                    printf("Encerrando o programa de estatisticas...\n");
                    break;
                default:
                    printf("Opcao invalida. Tente novamente.\n");
            }
            printf("------------------------------------------\n");
            
        } while (opcao_estatistica != 5);

        printf("\nNotas Cadastradas: ");
        for (int i = 0; i < count; i++) {
            printf("%.2f", notas[i]);
            if (i < count - 1) {
                printf(", ");
            }
        }
        printf("\n");
    }
    printf("==========================================\n");

    return 0
