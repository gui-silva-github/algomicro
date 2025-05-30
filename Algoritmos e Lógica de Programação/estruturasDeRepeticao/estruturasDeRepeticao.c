#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

void menu();

void qtdNumerosDivisiveis();
void qtdAnosBissextos();
void cemProdutos();
void somaImpar();
void tabuada();
void tabuadaInversa();
void passagemOnibus();
void potencia();
void primoOuNao();
void mdc();

void quinzeNumeros();
void vinteSalarios();
void transferenciaVetorInverso();
void transferenciaVetor();
void vetorDistancia();
void vetorVendas();
void predicaoVetor();
void nSalarios();
void impressaoNumerosInteiros();
void gerarVetorCrescente();

void matriz4por4();
void matriz5por5();
void matriz6por4();
void matrizResultado();
void trianguloInferior();

void sorteioVetor();
void matrizChar();

void menu(){
    int choice;
    
    printf("\t\tExercicios em C\n\n");
	printf("\t\tSelecione o que voce deseja utilizar:\n");
    printf("\t\t1 - Quantidade de numeros divisiveis entre limites\n");
    printf("\t\t2 - Quantidade de anos bissextos entre limites\n");
    printf("\t\t3 - Cadastro de 100 produtos\n"); 
    printf("\t\t4 - Soma de impares\n");
    printf("\t\t5 - Tabuada (do 1 ao 10)\n");
    printf("\t\t6 - Tabuada inversa (do 10 ao 1)\n");
	printf("\t\t7 - Passagem de onibus\n");
    printf("\t\t8 - Potencia sem 'pow()'\n");
    printf("\t\t9 - Numero primo ou nao\n");
    printf("\t\t10 - MDC (Maximo Divisor Comum)\n");
    printf("\t\t11 - Quinze numeros no vetor\n");
    printf("\t\t12 - Cadastro de 20 salarios\n");
    printf("\t\t13 - Transferencia para vetor no inverso\n");
    printf("\t\t14 - Transferencia para vetor\n");
    printf("\t\t15 - Vetor de distancia\n");
    printf("\t\t16 - Vetor de vendas\n");
    printf("\t\t17 - Predicao de valor no elemento do vetor\n");
    printf("\t\t18 - Armazenamento de salarios\n");
    printf("\t\t19 - Impressao de vetor em escada\n");
    printf("\t\t20 - Impressao vetor crescente\n");
    printf("\t\t21 - Matriz 4 por 4 com diagonal principal\n");
    printf("\t\t22 - Matriz 5 por 5 com numeros pares\n");
    printf("\t\t23 - Matriz 6 por 4\n");
    printf("\t\t24 - Soma de 2 matrizes\n");
    printf("\t\t25 - Impressao triangulo inferior da matriz\n");
    printf("\t\t26 - Sorteio de vetor\n");
    printf("\t\t27 - Vetor de char para achar na Matriz de char\n");
    printf("\t\t28 - Sair\n");
    
    printf("Escolha = "); scanf("%d", &choice);
    
    switch (choice){
        case 1: qtdNumerosDivisiveis(); break;   
        case 2: qtdAnosBissextos(); break;
        case 3: cemProdutos(); break;
        case 4: somaImpar(); break;
        case 5: tabuada(); break;
        case 6: tabuadaInversa(); break;
        case 7: passagemOnibus(); break;
        case 8: potencia(); break;
        case 9: primoOuNao(); break;
        case 10: mdc(); break;
        case 11: quinzeNumeros(); break;
        case 12: vinteSalarios(); break;
        case 13: transferenciaVetorInverso(); break;
        case 14: transferenciaVetor(); break;
        case 15: vetorDistancia(); break;
        case 16: vetorVendas(); break;
        case 17: predicaoVetor(); break;
        case 18: nSalarios(); break;
        case 19: impressaoNumerosInteiros(); break;
        case 20: gerarVetorCrescente(); break;
        case 21: matriz4por4(); break;
        case 22: matriz5por5(); break;
        case 23: matriz6por4(); break;
        case 24: matrizResultado(); break;
        case 25: trianguloInferior(); break;
        case 26: sorteioVetor(); break;
        case 27: matrizChar(); break;
        case 28:
             system("exit");
             printf("\nFinalizando...\n\n");
             break;
        default:
                printf("\nComando invalido, tente novamente!\n");
                break;
    }    
}

void qtdNumerosDivisiveis(){
     int numero, a, b, qtd = 0;
     int numeros[1000];
     
     printf("\nDigite o numero a ser divisivel = "); scanf("%d", &numero);
     
     printf("\nLimite inferior (a) = "); scanf("%d", &a);
     
     printf("\nLimite superior (b) = "); scanf("%d", &b);
     
     if (b <= a){
           printf("\nErro: o limite superior deve ser maior que o inferior.\n");
           return;
     }
     
    printf("\nNumeros divisiveis por %d entre %d e %d:\n\n", numero, a, b);
    
    int i;
    for (i = a; i <= b; i++) {
        if (i % numero == 0) {
            numeros[qtd] = i;
            printf("%d", numeros[qtd]);
            printf("\n");
            qtd++;
        }
    }
    
    printf("\n\nQuantidade total: %d\n", qtd);
}

void qtdAnosBissextos(){
     int ano1, ano2, qtd = 0;
     int anos[1000];
     
     printf("\nDigite o ano 1 = "); scanf("%d", &ano1);
     
     printf("\nDigite o ano 2 = "); scanf("%d", &ano2);
     
     if (ano2 <= ano1) return;
     
     printf("\nAnos bissextos entre %d e %d:\n\n", ano1, ano2);
     
     int i;
     for (i = ano1; i <= ano2; i++){
         if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)){
            anos[qtd] = i;
            printf("%d", anos[qtd]);
            printf("\n"); 
            qtd++;
         }   
     }
}

void cemProdutos(){
     int i, j;
     float produtos[100], valor = 0, media = 0;
     
     for (i = 0; i < 100; i++){
         printf("\nPreco do produto %d = ", i+1); scanf("%f", &produtos[i]);  
         if (produtos[i] > 150) produtos[i] *= 0.95;
         valor += produtos[i];  
     } 
     media = valor / 100;
     
     printf("\nA media dos precos foi de %.2f", media);
}

void somaImpar(){
     float numero, soma = 0;
     int i;
     
     printf("\nDigite o numero = "); scanf("%f", &numero);
     
     for (i = 1; i <= numero; i++){
         if (i % 2 == 1) soma += i;
     }
     
     printf("\nSoma dos impares = %.2f", soma);
}

void tabuada(){
     int numero, i;
     
     printf("\nDigite o numero = ");
     scanf("%d", &numero);
     
     if (numero <= 0) return;
     
     for (i = 1; i <= 10; i++){
         printf("\n %d x %d = %d \n", numero, i, numero*i);    
     }
}

void tabuadaInversa(){
     int numero, i;
     
     printf("\nDigite o numero = "); scanf("%d", &numero);
     
     if (numero <= 0) return;
     
     for (i = 10; i >= 1; i--){
        printf("\n %d x %d = %d \n", numero, i, numero*i); 
     }
}

void passagemOnibus(){
     int lugares, i, idade;
     float custoMinimo, arrecadado = 0, sete = 0, doze = 0, dezessete = 0, dezoito = 0;
     
     printf("\nDigite quantos lugares o onibus possui = "); scanf("%d", &lugares);
     
     float precoTotal[lugares];
     
     printf("\nDigite o custo minimo da passagem = "); scanf("%f", &custoMinimo);
     
     for (i = 0; i < lugares; i++){
         printf("\nLugar %d -> ", i+1);
         printf("Idade = ");
         scanf("%d", &idade);
         if (idade < 7){
           arrecadado += custoMinimo;
           sete += custoMinimo;
         } else if (idade >= 7 && idade <= 12){
           arrecadado += custoMinimo * 1.1;
           doze += custoMinimo * 1.1;
         } else if (idade > 12 && idade <= 17){
           arrecadado += custoMinimo * 1.2;
           dezessete += custoMinimo * 1.2;
         } else if (idade > 17){
           arrecadado += custoMinimo * 1.3;
           dezoito += custoMinimo * 1.3;
         }
     }
     
     printf("\nArrecadamento total = %.2f", arrecadado);
     printf("\n\nPor faixa etaria: Abaixo de 7 anos = %.2f, Entre 7 e 12 anos = %.2f, Acima de 12 ate 17 anos = %.2f, Acima de 17 anos = %.2f", sete, doze, dezessete, dezoito);
}

void potencia(){
     int a, b, i, resultado = 1;
     
     printf("\nDigite o valor da potencia = "); scanf("%d", &a);
     
     printf("\nDigite o valor do expoente = "); scanf("%d", &b);
     
     for (i = 0; i < b; i++){
         resultado *= a;
     }
     
     printf("\nO valor da potencia = %d", resultado);
}

void primoOuNao(){
     int numero, i, qtd = 0;
     
     printf("\nDigite o numero inteiro = "); scanf("%d", &numero);
     
     for (i = 1; i <= numero; i++){
         if (numero % i == 0) qtd++;
     }
     
     if (qtd == 2){
        printf("\nNumero primo");        
     } else {
       printf("\nNao e um numero primo");
     }
}

void mdc(){
     int numero1, numero2;
     
     printf("\nDigite o numero 1 = "); scanf("%d", &numero1);
     
     printf("\nDigite o numero 2 = "); scanf("%d", &numero2);
     
     if (numero2 < numero1) return;
     
     while (numero1 != 0){
         int resto = numero2 % numero1;
         numero2 = numero1;
         numero1 = resto;
     }
     
     printf("\nO MDC = %d", numero2);
}

void quinzeNumeros(){
     int i, j, vetor[15];
     
     for (i = 0; i < 15; i++){
         printf("\nDigite o %d valor = ", i+1); scanf("%d", &vetor[i]);    
     }
     
     printf("\n\nSentido comum\n");
     for (j = 0; j < 15; j++){
         if (j == 14) printf("%d", vetor[j]);
         else printf("%d, ", vetor[j]);  
     }
     
     printf("\n\nSentido contrario\n");
     for (j = 14; j >= 0; j--){
         if (j == 0) printf("%d", vetor[j]);
         else printf("%d, ", vetor[j]);    
     }
}

void vinteSalarios(){
     float salarios[20], total = 0, media = 0;
     int i;
     
     for (i = 0; i < 20; i++){
         printf("\nDigite o %d valor = ", i+1); scanf("%f", &salarios[i]);
         total += salarios[i];     
     }
     media = total / 20;
     
     for (i = 0; i < 20; i++){
         if (media > 5000){
             salarios[i] *= 1.1;       
         } else {
             salarios[i] *= 1.15;    
         }    
     } 
     
     printf("\n\n");
     for (i = 0; i < 20; i++){
         if (i == 19){
            printf("%f", salarios[i]);
         } else {
            printf("%f, ", salarios[i]);
         }    
     }
     
     printf("\n\nMedia calculada = %.2f", media);
}

void transferenciaVetorInverso(){
     int n, i, j;
     
     printf("\nDetermine quantas posicoes = "); scanf("%d", &n);
     
     if (n<=0) return;
     
     int vetor1[n];
     int vetor2[n];
     
     printf("\n");
     for (i = 0; i < n; i++){
         printf("\nDigite o valor %d = ", i+1); scanf("%d", &vetor1[i]);     
     }
     
     i = 0;
     for (j = n-1; j >= 0; j--){
          vetor2[j] = vetor1[i];
          i++;
     }    
     
     printf("\n");
     for (i = 0; i < n; i++){
         if (i == n-1){
            printf("%d", vetor2[i]);
         } else {
            printf("%d, ", vetor2[i]);
         }      
     }
}

void transferenciaVetor(){
     int n, i, temp;
     
     printf("\nDetermine quantas posicoes = "); scanf("%d", &n);
     
     if (n<=0) return;
     
     int vetor1[n];
     
     printf("\n");
     for (i = 0; i < n; i++){
         printf("\nDigite o valor %d = ", i+1); scanf("%d", &vetor1[i]);      
     }
     
     for (i = 0; i < n/2; i++){
         temp = vetor1[i];
         vetor1[i] = vetor1[n - 1 - i];
         vetor1[n - 1 - i] = temp;
     }
     
     printf("\nVetor invertido\n\n");
     for (i = 0; i < n; i++){
         if (i == n-1){
            printf("%d", vetor1[i]);
         } else {
            printf("%d, ", vetor1[i]);
         }      
     } 
}

void vetorDistancia(){
     int i, cidades, n, aux = 0;
     
     printf("\nQuantas cidades tem na estrada = "); scanf("%d", &cidades);
     
     if (cidades < 2) return;
     
     n = cidades * 2 - 1;
     
     int vetor[n];
     
     printf("\n");
     for (i = 0; i < cidades; i++){
        printf("Localizacao de entrada %d em km = ", i+1);
        if (i == 0){
           scanf("%d", &vetor[0]);     
            if (vetor[0] <= 0) {
                printf("\nA primeira localização deve ser maior que zero.\n");
                return; 
            }
        } else {
          aux += 2;
          scanf("%d", &vetor[aux]);    
          if (vetor[aux] <= vetor[aux - 2]) {
                printf("\nAs localizacoes devem estar em ordem crescente.\n");
                return;
            }       
        }     
     }
     
     for (i = 1; i < n; i+=2){
         vetor[i] = vetor[i+1] - vetor[i-1];
     }
     
     printf("\n\n");
     for (i = 0; i < n; i++){
        printf("%d ", vetor[i]);   
     }
} 
    
void vetorVendas(){
     int diasDaSemana[7], i, indice;
     float preco, valores[7], maior = 0;
     
     printf("\nDigite o preco do produto = "); scanf("%f", &preco);
     
     for (i = 0; i < 7; i++){
         switch (i){
           case 0: printf("\nQuantidade vendida no domingo = "); scanf("%d", &diasDaSemana[0]); break;  
           case 1: printf("\nQuantidade vendida na segunda = "); scanf("%d", &diasDaSemana[1]); break;  
           case 2: printf("\nQuantidade vendida na terca = "); scanf("%d", &diasDaSemana[2]); break;  
           case 3: printf("\nQuantidade vendida na quarta = "); scanf("%d", &diasDaSemana[3]); break;      
           case 4: printf("\nQuantidade vendida na quinta = "); scanf("%d", &diasDaSemana[4]); break;  
           case 5: printf("\nQuantidade vendida na sexta = "); scanf("%d", &diasDaSemana[5]); break;  
           case 6: printf("\nQuantidade vendida no sabado = "); scanf("%d", &diasDaSemana[6]); break;  
         }    
     }
     
     for (i = 0; i < 7; i++){
        valores[i] = diasDaSemana[i] * preco;      
     }
     
     printf("\n\nQuantidades vendidas = ");
     for (i = 0; i < 7; i++){
         printf("%d ", diasDaSemana[i]);     
     }
     
     printf("\n\nValor das vendas = ");
     for (i = 0; i < 7; i++){
         printf("%d -> %f ", i+1, valores[i]);     
     }
     
     for (i = 0; i < 7; i++){
         if (valores[i] > maior){
            maior = valores[i];
            indice = i;
         }
     }
     
     printf("\n\nDia com maior valor de venda\n\n");
     switch (indice){
           case 0: printf("Domingo"); break;  
           case 1: printf("Segunda"); break;   
           case 2: printf("Terca"); break;    
           case 3: printf("Quarta"); break;  
           case 4: printf("Quinta"); break;    
           case 5: printf("Sexta"); break;    
           case 6: printf("Sabado"); break;  
     } 
}

void predicaoVetor(){
     int t, i, aux = 0;
     
     printf("\nDigite o tamanho do vetor = "); scanf("%d", &t);
     
     if (t < 2 || t % 2 == 1) return;
     
     int vetor1[t], vetor2[t/2];
     
     printf("\nVetor original\n");
     for (i = 0; i < t; i++){
         printf("\nValor %d = ", i+1); scanf("%d", &vetor1[i]);    
     }
     
     printf("\nSomas do vetor original\n");
     for (i = 0; i < t/2; i++){
         vetor2[i] = vetor1[aux] + vetor1[aux+1];    
         aux += 2;
     }
     
     printf("\nVetor 1\n");
     for (i = 0; i < t; i++){
         printf("%.2d\t", vetor1[i]);
     }
     
     printf("\nVetor 2\n");
     for (i = 0; i < t/2; i++){
         printf("%.2d\t", vetor2[i]);
     }
}

void nSalarios(){
     int n, i;
     float maior = 0, menor = 0, media = 0;
     
     printf("\nQuantos funcionarios = "); scanf("%d", &n);
     
     if (n <= 0) return;
     
     float salarios[n];
     
     for (i = 0; i < n; i++){
         printf("\nSalario %d = ", i+1); scanf("%f", &salarios[i]);
         if (salarios[i] > maior) maior = salarios[i];
         if (menor == 0){
            menor = salarios[i];           
         } 
         if (salarios[i] < menor) menor = salarios[i];
         media += salarios[i];
     }
     
     media /= n;
     
     printf("\n\nMaior valor = %.2f", maior);
     printf("\n\nMenor valor = %.2f", menor);
     printf("\n\nMedia = %.2f", media);
}

void impressaoNumerosInteiros(){
     int n, i, aux;
     
     do {
         printf("\nDigite quantos valores terao o vetor = "); scanf("%d", &n); 
     } while (n < 5);
          
     int vetor[n];

     for (i = 0; i < n; i++){
         printf("\nValor %d = ", i+1); scanf("%d", &vetor[i]);    
     }
     
     printf("\nImpressao do vetor\n");
     for (aux = n; aux >= 1; aux--){
         printf("\n");
         for (i = 0; i < aux; i++){
             printf("%d ", vetor[i]);     
         }
     }
}

void gerarVetorCrescente(){
     int n, i, j, temp;
     
     do {
         printf("\nDigite o tamanho do vetor = "); scanf("%d", &n);
     } while (n <= 0);
     
     int vetor1[n], vetor2[n];
     
     for (i = 0; i < n; i++){
         printf("\nValor %d = ", i+1); scanf("%d", &vetor1[i]);    
         vetor2[i] = vetor1[i];
     }
     
     for (i = 0; i < n-1; i++){
         for (j = 0; j < n-1; j++){
             if (vetor2[j] > vetor2[j+1]){
                temp = vetor2[j];
                vetor2[j] = vetor2[j+1];
                vetor2[j+1] = temp;              
             }    
         }    
     }
     
    printf("\nVetor original: ");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor1[i]);
    }

    printf("\nVetor ordenado: ");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor2[i]);
    }
}

void matriz4por4(){
     int i, j, matriz[4][4], vetor[4];
     
     printf("\n");
     for (i = 0; i < 4; i++){
         for (j = 0; j < 4; j++){
              printf("\nLinha %d - Coluna %d = ", i+1, j+1); scanf("%d", &matriz[i][j]);
              if (i == j){
                 vetor[i] = matriz[i][j];
              }    
         }   
     }
     
     printf("\n");
        for(i = 0; i < 4; i++){
           printf("\n"); 
           for (j = 0; j < 4; j++){
               printf("%.2d\t", matriz[i][j]);    
           }        
        }
     printf("\n");
     
     printf("\n");
     for (i = 0; i < 4; i++){
         printf("%d ", vetor[i]);    
     }
}

void matriz5por5(){
     int i, j, matriz[5][5], vetor[25];
     
     for (i = 0; i < 5; i++){
         printf("\n");
         for (j = 0; j < 5; j++){
             printf("\nLinha %d - Coluna %d = ", i+1, j+1); scanf("%d", &matriz[i][j]);    
         }    
     }
     
     printf("\n");
        for(i = 0; i < 5; i++){
           printf("\n"); 
           for (j = 0; j < 5; j++){
               printf("%.2d\t", matriz[i][j]);    
           }        
        }
     printf("\n");
     
     printf("\nNumeros pares: ");
     for (i = 0; i < 5; i++){
         for (j = 0; j < 5; j++){
             if (matriz[i][j] % 2 == 0) printf("%d ", matriz[i][j]);    
         }    
     }
}

void matriz6por4(){
     int i, j, matriz[6][4];
     
     for(i = 0; i < 4; i++){
           printf("\n");
         for (j = 0; j < 6; j++){
             printf("\nColuna %d - Linha %d = ", i+1, j+1); scanf("%d", &matriz[j][i]);
         }      
     }
     
     printf("\n\n");
     for (i = 0; i < 6; i++){
         printf("\n");
         for (j =  0; j < 4; j++){
             printf("%.2d\t", matriz[i][j]);
         }    
     }
}

void matrizResultado(){
     int i, j, matriz1[3][4], matriz2[3][4], matriz3[3][4];
     
     printf("\nMatriz 1\n");
     for (i = 0; i < 3; i++){
         for (j = 0; j < 4; j++){
             printf("\nLinha %d - Coluna %d = ", i+1, j+1); scanf("%d", &matriz1[i][j]);    
         }    
     }
     
     printf("\nMatriz 2\n");
     for (i = 0; i < 3; i++){
         for (j = 0; j < 4; j++){
            printf("\nLinha %d - Coluna %d = ", i+1, j+1); scanf("%d", &matriz2[i][j]);    
         }    
     }
     
     printf("\nSoma da Matriz 1 e Matriz 2\n");
     for (i = 0; i < 3; i++){
         for (j = 0; j < 4; j++){
             matriz3[i][j] = matriz1[i][j] + matriz2[i][j];    
         }     
     }
     
     printf("\nMatriz 3\n\n");
     for (i = 0; i < 3; i++){
         printf("\n");
         for (j = 0; j < 4; j++){
             printf("%.2d\t", matriz3[i][j]);    
         }    
     } 
}

void trianguloInferior(){
     int n, i, j;
     
     printf("\nDigite o valor de n na matriz quadrada = "); scanf("%d", &n);
     
     int matriz[n][n];
     
     for (i = 0; i < n; i++){
         printf("\n");
         for (j = 0; j < n; j++){
             printf("\nLinha %d - Coluna %d = ", i+1, j+1); scanf("%d", &matriz[i][j]);
         }    
     }
     
     for (i = 0; i < n; i++){
         printf("\n");
         for (j = 0; j < n; j++){
            printf("%d ", matriz[i][j]);
            if (i == j){
               break;      
            }     
         }    
     }
}

void sorteioVetor(){
    int n, i, j; srand(time(NULL));
    
    do{
        printf("\nTamanho do vetor = "); scanf("%d", &n);
    } while (n <= 0); 
    
    int v[n], m[n][n]; printf("\n\n");
    
    for (i = 0; i < n; i++){
        v[i] = rand()%100;
        printf("%.2d\t", v[i]);    
    }
    
    printf("\n");
    for(i = 0; i < n; i++){
       printf("\n"); 
       for (j = 0; j < n; j++){
           if (i == 0) m[i][j] = v[j];
           else m[i][j] = m[i-1][j]-1;
           printf("%.2d\t", m[i][j]);    
       }        
    }
    printf("\n");
}

void matrizChar(){
     char m[][6] = { {'b', 'a', 'l', 'a', 'o', '\0'},
                     {'t', 'i', 'm', 'e', 's', '\0'},
                     {'c', 'o', 's', 't', 'a', '\0'},
                     {'t', 'r', 'e', 'n', 'a', '\0'},
                     {'p', 'o', 's', 't', 'e', '\0'},
                     {'t', 'r', 'e', 'n', 'a', '\0'},
                     {'b', 'a', 'l', 'a', 'o', '\0'},
                   };
     
     char v[6];
     printf("\nDigite a palavra a procurar = "); scanf("%s", v); v[5]='\0'; int c=0, i; printf("\n");
     
     for(i = 0; i < 7; i++){
         if (strcmp(v, m[i])==0) c++;   
         printf("\n%s", m[i]);
     }
      
      printf("\n\nQuantidade de ocorrencias = %d", c);   
}

int main(){
    int repetir = 1;
    
    while (repetir){
       system("cls");
       menu();      
       
       printf("\n\nDeseja sair? (0 para sair, 1 para continuar): ");
       scanf("%d", &repetir);
    }
        
    return 0;
}
