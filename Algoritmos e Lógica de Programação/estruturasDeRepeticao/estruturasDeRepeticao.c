#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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
	printf("\t\t7 - Passagem de ônibus\n");
    printf("\t\t8 - Potência sem 'pow()'\n");
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
     
}

void qtdAnosBissextos(){
     
}

void cemProdutos(){
     
}

void somaImpar(){
     
}

void tabuada(){
     
}

void tabuadaInversa(){
     
}

void passagemOnibus(){
     
}

void potencia(){
     
}

void primoOuNao(){
     
}

void mdc(){
     
}

void quinzeNumeros(){
     
}

void vinteSalarios(){
     
}

void transferenciaVetorInverso(){
     
}

void transferenciaVetor(){
     
}

void vetorDistancia(){

} 
    
void vetorVendas(){
     
}

void predicaoVetor(){
     
}

void nSalarios(){
     
}

void impressaoNumerosInteiros(){
     
}

void gerarVetorCrescente(){
     
}

void matriz4por4(){
     
}

void matriz5por5(){
     
}

void matriz6por4(){
     
}

void matrizResultado(){
     
}

void trianguloInferior(){
     
}

void sorteioVetor(){
     
}

void matrizChar(){

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
