#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void menu();

void lucro();
void media();
void quantidade();
void novosTotais();
void divisoesCaderno();
void salario();
void algarismo();
void inversao();
void valoresInvertidos();
void fracionaria();

void aumentoSalarial();
void produtoDesconto();
void raizSegundoGrau();
void aprovacaoFaltas();
void parImpar();
void positivoNegativo();
void numerosCrescente();
void maiorDeIdade();
void quadradoPerfeito();
void investimentoHabitante();

void mediaSituacao();
void aumentoSalarialTempoCasa();
void opcoesCardapio();
void classificacaoPoligonos();
void descontoLivro();
void imc();
void maiorOuIguais();
void maior();
void calculadoraSimples();
void anoBissexto();

void produtoCodigo();
void codigoGenero();
void classificacaoTriangulo();
void planoDeSaude();
void aprovacaoAluno();

void menu(){
   int choice;
   
   printf("\t\tExercicios em C\n\n");
	printf("\t\tSelecione o que voce deseja utilizar:\n");
    printf("\t\t1 - Lucro da loja\n");
    printf("\t\t2 - Media final\n");
    printf("\t\t3 - Quantidade de tijolos\n"); 
    printf("\t\t4 - Novos totais produzidos\n");
    printf("\t\t5 - Divisoes de cadernos\n");
    printf("\t\t6 - Salario mensal\n");
	printf("\t\t7 - Algarismo das unidades\n");
    printf("\t\t8 - Inversao de algarismos\n");
    printf("\t\t9 - Valores invertidos\n");
    printf("\t\t10 - Parte fracionaria\n");
    printf("\t\t11 - Aumento salarial\n");
    printf("\t\t12 - Produto com desconto\n");
    printf("\t\t13 - Raizes reais de uma funcao de 2 grau\n");
    printf("\t\t14 - Aprovacao com percentual de faltas\n");
    printf("\t\t15 - Par ou impar\n");
    printf("\t\t16 - Positivo ou negativo\n");
    printf("\t\t17 - Tres numeros em ordem crescente (n1, n2, n3)\n");
    printf("\t\t18 - Verificacao maior de idade\n");
    printf("\t\t19 - Determinacao de numero quadrado perfeito\n");
    printf("\t\t20 - Investimento por habitante\n");
    printf("\t\t21 - Media e situacao de aluno\n");
    printf("\t\t22 - Aumento salarial com tempo de casa\n");
    printf("\t\t23 - Opcoes de cardapio\n");
    printf("\t\t24 - Classificacao de poligonos\n");
    printf("\t\t25 - Desconto de livro\n");
    printf("\t\t26 - IMC\n");
    printf("\t\t27 - Maior ou iguais\n");
    printf("\t\t28 - Maior numero\n");
    printf("\t\t29 - Operacao em calculadora simples\n");
    printf("\t\t30 - Verificacao de ano bissexto\n");
    printf("\t\t31 - Produto e codigo\n");
    printf("\t\t32 - Codigo do livro e seu genero\n");
    printf("\t\t33 - Classificacao de triangulo quanto aos angulos internos\n");
    printf("\t\t34 - Plano de saude\n");
    printf("\t\t35 - Aprovacao de aluno\n");
    printf("\t\t36 - Sair\n");    
    
    printf("Escolha = "); scanf("%d", &choice);
    
    switch(choice){
       case 1: lucro(); break;
       case 2: media(); break;
       case 3: quantidade(); break;
       case 4: novosTotais(); break;
       case 5: divisoesCaderno(); break;
       case 6: salario(); break;
       case 7: algarismo(); break;
       case 8: inversao(); break;
       case 9: valoresInvertidos(); break;
       case 10: fracionaria(); break;
       case 11: aumentoSalarial(); break;
       case 12: produtoDesconto(); break;
       case 13: raizSegundoGrau(); break;
       case 14: aprovacaoFaltas(); break;
       case 15: parImpar(); break;
       case 16: positivoNegativo(); break;
       case 17: numerosCrescente(); break;
       case 18: maiorDeIdade(); break;
       case 19: quadradoPerfeito(); break;
       case 20: investimentoHabitante(); break;
       case 21: mediaSituacao(); break;
       case 22: aumentoSalarialTempoCasa(); break;
       case 23: opcoesCardapio(); break;
       case 24: classificacaoPoligonos(); break;
       case 25: descontoLivro(); break;
       case 26: imc(); break;
       case 27: maiorOuIguais(); break;
       case 28: maior(); break;
       case 29: calculadoraSimples(); break;
       case 30: anoBissexto(); break;
       case 31: produtoCodigo(); break;
       case 32: codigoGenero(); break;
       case 33: classificacaoTriangulo(); break;
       case 34: planoDeSaude(); break;
       case 35: aprovacaoAluno(); break;
       case 36:
            system("exit");
			printf("\nFinalizando...\n\n");
			break;
       default:
            printf("\nComando invalido, tente novamente!\n"); 
            break;             
    }
                   
}

void lucro(){
    float gasto, ganho, lucro;
    
    printf("\nGasto diario = "); scanf("%f", &gasto);
    
    printf("\nGanho diario = "); scanf("%f", &ganho);
    
    lucro = (ganho - gasto) * 5;
    printf("\nLucro = %.2f", lucro);    
}

void media(){
	float nota1, nota2, media;
	
	printf("\nNota 1 (40/100) = "); scanf("%f", &nota1);
	
	printf("\nNota 2 (60/100) = "); scanf("%f", &nota2);
	
	media = (nota1 * 0.4 + nota2 * 0.6);
	printf("\nMedia final = %.2f", media);
}

void quantidade(){
	float altura, largura, areaParede, comprimento, largura2, areaTijolo;
	int quantidade;
	
	printf("\nAltura da parede = "); scanf("%f", &altura);
	
	printf("\nLargura da parede = "); scanf("%f", &largura);
	
	printf("\nComprimento do tijolo = "); scanf("%f", &comprimento);
	
	printf("\nLargura do tijolo = "); scanf("%f", &largura2);
	
	areaParede = altura * largura;
	areaTijolo = comprimento * largura;
	
	if( (int)(areaParede / areaTijolo) == areaParede / areaTijolo){
		quantidade = areaParede / areaTijolo;
	} else {
		quantidade = areaParede / areaTijolo;
		quantidade++; 
	}
	
	printf("\nQuantidade de tijolos = %d", quantidade);
}

void novosTotais(){
	float peca1, peca2, nova1, nova2;
	
	printf("\nProducao de peca 1 = "); scanf("%f", &peca1);
	
	printf("\nProducao de peca 2 = "); scanf("%f", &peca2);
	
	nova1 = peca1 * 1.17;
	nova2 = peca2 * 1.26;
	printf("\nProducao 1 = %.2f, Producao 2 = %.2f", nova1, nova2);
}

void divisoesCaderno(){
	int quantidade, divisoes, valor;
	
	printf("\nQuantidade de cadernos = "); scanf("%d", &quantidade);
	
	printf("\nNumero de divisoes = "); scanf("%d", &divisoes);
	
	valor = quantidade * divisoes;
	printf("\nNumero total de divisoes = %d", valor);
}

void salario(){
	float salario, valorHora, horasExtras, valorExtra;
	int dias;
	
	printf("\nDias trabalhados = "); scanf("%d", &dias);
	
	printf("\nValor hora = "); scanf("%f", &valorHora);
	
	printf("\nHoras extras = "); scanf("%f", &horasExtras);
	
	valorExtra = horasExtras * (valorHora * 1.2);

	salario = ((dias * 8) * valorHora) + valorExtra;	
	printf("\nSalario mensal = %.2f", salario);
}

void algarismo(){
	int numero, algarismo = 0;
	
	printf("\nNumero = "); scanf("%d", &numero);
	
	if(numero > 9 && numero < 100){
		algarismo = numero % 10;
	}
	
	printf("\nAlgarismo da unidade = %d", algarismo);
}

void inversao(){
	int numero, dezena, unidade, inversao = 0;
	
	printf("\nNumero = "); scanf("%d", &numero);
	
	if(numero > 9 && numero < 100){
		dezena = numero / 10;
		unidade = numero % 10;
		
		inversao = unidade * 10 + dezena;
	}
	
	printf("\nNumero invertido = %d", inversao);
}

void valoresInvertidos(){
	int x, y, aux;
	
	printf("\nValor 1 = "); scanf("%d", &x);
	
	printf("\nValor 2 = "); scanf("%d", &y);
	
	aux = x;
	x = y;
	y = aux;
	
	printf("\nValor 1 invertido = %d, Valor 2 invertido = %d", x, y);
}

void fracionaria(){
	float numero, parteInteira, parteFracionaria;
	
	printf("\nDigite um numero com parte fracionaria = "); scanf("%f", &numero);
    
    parteInteira = (int) numero;
    
    parteFracionaria = numero - parteInteira;
    printf("\nA parte fracionaria = %.2f", parteFracionaria);
}

void aumentoSalarial(){
     float salario;
     
     printf("\nDigite o salario mensal = "); scanf("%f", &salario);
     
     if (salario > 5000){
           salario *= 1.12;     
     } else {
           salario *= 1.15;
     }    
     
     printf("\nSalario com aumento = %.2f", salario);
}

void produtoDesconto(){
     float preco;
     int dia;
     
     printf("\nDigite o preco do produto = "); scanf("%f", &preco);
     
     printf("\nDigite o dia do mes = "); scanf("%d", &dia);    
     
     if (dia <= 15){
       preco *= 0.92;      
     } else {
       preco *= 0.94;
     }
     
     printf("\nPreco do produto com desconto = %.2f", preco);
}

void raizSegundoGrau(){
     float a, b, c, delta, xi, xii;
     
     printf("\nDigite o ax elevado a 2 = "); scanf("%f", &a);
     
     printf("\nDigite o bx = "); scanf("%f", &b);
     
     printf("\nDigite o c = "); scanf("%f", &c);
     
     delta = (b * b) - 4 * a * c;
     
     xi = (-b + sqrt(delta)) / 2 * a;
     xii = (-b - sqrt(delta)) / 2 * a;
     
     printf("\nOs valores de x sao = %.2f e %.2f", xi, xii);
}

void aprovacaoFaltas(){
    int aprovado;
    float aulas, faltas, percentual;
    
    printf("\nNumero de aulas dadas = "); scanf("%f", &aulas);
    
    printf("\nNumero de faltas = "); scanf("%f", &faltas);

    percentual = (faltas / aulas) * 100;      
        
    if (percentual > 25){
       printf("\nO aluno foi reprovado com %.2f por cento de faltas", percentual);       
    } else {
        printf("\nO aluno foi aprovado com %.2f por cento de faltas", percentual); 
    }
}

void parImpar(){
     int numero;
     
     printf("\nDigite o numero = "); scanf("%d", &numero); 
     
     if (numero % 2 == 0){
       printf("\nPar!");        
     } else {
       printf("\nImpar!");
     }   
}

void positivoNegativo(){
     int numero;
     
     printf("\nDigite o numero = "); scanf("%d", &numero);

     if (numero >= 0){
        printf("\nNumero positivo!");               
     } else {
        printf("\nNumero negativo!");      
     }    
}

void numerosCrescente(){
     int numero1, numero2, numero3, aux;    
     
     printf("\nDigite o primeiro numero = "); scanf("%d", &numero1);
     
     printf("\nDigite o segundo numero = "); scanf("%d", &numero2);
     
     printf("\nDigite o terceiro numero = "); scanf("%d", &numero3);
     
     if (numero1 > numero2){
        aux = numero1;
        numero1 = numero2;
        numero2 = aux;           
     }
     
     if (numero1 > numero3){
        aux = numero1;
        numero1 = numero3;
        numero3 = aux;            
     }
     
     if (numero2 > numero3){
        aux = numero2;
        numero2 = numero3;
        numero3 = aux;            
     }
     
     printf("\nOrdem crescente: N1 = %d, N2 = %d, N3 = %d", numero1, numero2, numero3);
}

void maiorDeIdade(){
     int idade;
     
     printf("\nDigite a idade = ");
     scanf("%d", &idade);
     
     if (idade < 18){
        printf("\nMenor de idade");          
     } else {
        printf("\nMaior de idade");    
     }     
}

void quadradoPerfeito(){
     int numero, raiz;
     
     printf("\nDigite o numero = "); scanf("%d", &numero);
     
     if (numero < 0) {
        numero *= -1;
    }    
    
    raiz = sqrt(numero);
    if (raiz * raiz == numero){
        printf("\nO numero %d e um quadrado perfeito. Raiz = %d", numero, raiz);     
    } else {
        printf("\nO numero nao e um quadrado perfeito");     
    }
}

void investimentoHabitante(){
     float valorBase;
     int habitantes;
     
     printf("\nDigite o valor base = "); scanf("%f", &valorBase);     
     
     printf("\nDigite o numero de habitantes = "); scanf("%d", &habitantes);   
     
     if (habitantes > 10000){
        valorBase *= 1.2;
     } else {
       valorBase *= 1.15;       
     }
     
     printf("\nA cidade precisa investir %.2f reais", valorBase);  
}

void mediaSituacao(){
     float nota1, nota2, media;
  
     printf("\nDigite a primeira nota = "); scanf("%f", &nota1);
     
     printf("\nDigite a segunda nota = "); scanf("%f", &nota2);
  
      media = (nota1 + nota2) / 2;
      if (media >= 6){
         printf("\nAprovado com media %.2f", media);
      } else if (media >= 3 && media < 6){
         printf("\nEm exame...");       
      } else {
        printf("\nReprovado com media %.2f", media);       
      }
}

void aumentoSalarialTempoCasa(){
     float salario;
     int tempoCasa;
     
     printf("\nDigite o salario atual = "); scanf("%f", &salario);
     
     printf("\nDigite o tempo de casa = "); scanf("%d", &tempoCasa);
     
     if (tempoCasa < 5){
        salario *= 1.05;              
     } else if (tempoCasa >= 5 && tempoCasa <= 10){
        salario *= 1.10;
     } else if (tempoCasa > 10 && tempoCasa <= 20){
        salario *= 1.20;       
     } else if (tempoCasa > 20){
        salario *= 1.25;       
     }
     
     printf("\nSalario final = %.2f", salario);
}

void opcoesCardapio(){
     float precoBasico, precoFinal;
     int opcao, sobremesa;
     
     printf("\nDigite o preco basico = "); scanf("%f", &precoBasico);
     
     printf("\nSelecione a opcao de cardapio: 1 - peixe, 2 - carne bovina, 3 - frango, 4 - vegetariano = "); scanf("%d", &opcao);
     
     switch (opcao){
         case 1:
              precoFinal = precoBasico * 1.10; break;
         case 2:
              precoFinal = precoBasico * 1.20; break;         
         case 3: 
              precoFinal = precoBasico * 1.15; break;
         case 4: 
              precoFinal = precoBasico * 1.05; break;
         default:
              precoFinal = precoBasico * 1; break;
     }
     
     printf("\nDeseja sobremesa? 0 - nao, 1 - sim = "); scanf("%d", &sobremesa);
     
     if (sobremesa){
        precoFinal += (precoBasico * 0.05);           
     }
     
     printf("\nPrato escolhido = %d, Sobremesa = %d, Preco prato = %.2f, Preco final = %.2f", opcao, sobremesa, precoBasico, precoFinal);
}

void classificacaoPoligonos(){
     int lados;
     
     printf("\nDigite o numero de lados = "); scanf("%d", &lados);
     
     if (lados < 3){
        printf("\nNao se trata de um poligono");
     } else if (lados > 6){
        printf("\nO poligono esta alem de um hexagono");
     } else if (lados == 3){
       printf("\nTriangulo");     
     } else if (lados == 4){
        printf("\nQuadrado");
     } else if (lados == 5){
       printf("\nPentagono");
     } else if (lados == 6){
       printf("\nHexagono");     
     } else {
       printf("\nPoligono = ...");       
     }
}

void descontoLivro(){
   int codigo;
   float preco = 80;
   
   printf("\nDigite o codigo do livro = "); scanf("%d", &codigo);    
   
   if (codigo < 30){
      preco *= 0.94;
      printf("\nGenero = Suspense, Preco = %.2f", preco);
   } else if (codigo >= 31 && codigo <= 45){
      preco *= 0.92;
      printf("\nGenero = Terror, Preco = %.2f", preco);       
   } else if (codigo >= 46 && codigo <= 60){
      preco *= 0.88;
      printf("\nGenero = Biografia, Preco = %.2f", preco);       
   } else if (codigo >= 61){
      preco *= 0.85;
      printf("\nGenero = Didatico, Preco = %.2f", preco);
   } else {
      printf("\nGenero = ..., Preco = %f", preco);    
   }
}

void imc(){
  float peso, altura, imc;
  
  printf("\nDigite o peso em kg = "); scanf("%f", &peso);
  
  printf("\nDigite a altura em m = "); scanf("%f", &altura);
  
  imc = peso / (altura * altura);
  
  if (imc < 20){
     printf("\nIMC = %.2f, Classificacao = Subnormal", imc);        
  } else if (imc >= 20 && imc < 25){
     printf("\nIMC = %.2f, Classificacao = Normal", imc);              
  } else if (imc >= 25 && imc < 30){
    printf("\nIMC = %.2f, Classificacao = Sobrepeso", imc);               
  } else if (imc >= 30 && imc < 35){
    printf("\nIMC = %.2f, Classificacao = Obesidade leve", imc);               
  } else if (imc >= 35 && imc < 40){
    printf("\nIMC = %.2f, Classificacao = Obesidade moderada", imc);               
  } else if (imc >= 40){
    printf("\nIMC = %.2f, Classificacao = Obesidade morbida", imc);               
  } else {
    printf("\nIMC = ..., Classificacao = ...", imc);               
  }
}

void maiorOuIguais(){
    int n1, n2;
    
     printf("\nDigite o numero 1 = "); scanf("%d", &n1);
  
     printf("\nDigite o numero 2 = "); scanf("%d", &n2);  
     
     if (n1 > n2){
        printf("\nO numero 1 -> %d e o maior", n1);
     } else if (n1 == n2){
        printf("\nOs dois numeros sao iguais");
     } else {
        printf("\nO numero 2 -> %d e o maior", n2);      
     }     
}

void maior(){
     int n1, n2, n3;
     
     printf("\nDigite o numero 1 = "); scanf("%d", &n1);
  
     printf("\nDigite o numero 2 = "); scanf("%d", &n2);     
     
     printf("\nDigite o numero 3 = "); scanf("%d", &n3);
     
     if (n1 > n2){
            if (n1 > n3){
                   printf("\nO maior numero e o n1 = %d", n1);
            } else {
                   printf("\nO maior numero e o n3 = %d", n3);
            }
     } else {
            if (n2 > n3){
                   printf("\nO maior numero e o n2 = %d", n2);
            } else {
                   printf("\nO maior numero e o n3 = %d", n3);
            }       
     }
}

void calculadoraSimples(){
    float numero1, numero2, resultado;
    int operacao;
    
    printf("\nDigite o primeiro numero = "); scanf("%f", &numero1);
    
    printf("\nDigite o segundo numero = "); scanf("%f", &numero2);
    
    printf("\nEscolha a operacao: 1 - Adicao, 2 - Subtracao, 3 - Multiplicacao, 4 - Divisao = "); scanf("%d", &operacao);
    
    switch (operacao){
        case 1: resultado = numero1 + numero2; break;
        case 2: resultado = numero1 - numero2; break;
        case 3: resultado = numero1 * numero2; break;
        case 4:
             if(numero2 == 0){
                printf("\nNao e possivel dividir por 0");
                return;           
             } else {
                resultado = numero1 / numero2;       
             }          
             break;
        default: printf("\nOperacao invalida!"); break;
    }
    
    printf("\nO resultado foi de = %.2f", resultado);
}

void anoBissexto(){
    int ano;
    
    printf("\nDigite o ano = "); scanf("%d", &ano);
    
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
       printf("\nAno bissexto");
    } else {
       printf("\nAno comum");
    }
}

void produtoCodigo(){
   float preco;
   int codigo; 
   
   printf("\nDigite o preco do produto = "); scanf("%f", &preco);
    
   printf("\nDigite o codigo do produto = "); scanf("%d", &codigo);
   
   if (preco > 100 && (codigo >= 50 && codigo <= 70)){
      preco *= 0.9;          
   } else {
      preco *= 0.95;       
   }
   
   printf("\nO preco final e de = %.2f reais", preco);
}

void codigoGenero(){
     int codigo;
     
     printf("\nDigite o codigo do livro = "); scanf("%d", &codigo);
     
     if (codigo < 100 || codigo > 300){
        printf("\nGenero Ficcao");
     } else {
        printf("\nGenero Biografia");       
     }
}

void classificacaoTriangulo(){
    float medida1, medida2, medida3, somaMedidas;
     
    printf("\nDigite a medida 1 do angulo interno do triangulo = "); scanf("%f", &medida1);
    
    printf("\nDigite a medida 2 do angulo interno do triangulo = "); scanf("%f", &medida2);
    
    printf("\nDigite a medida 3 do angulo interno do triangulo = "); scanf("%f", &medida3);
     
    somaMedidas = medida1 + medida2 + medida3;
    
    if (somaMedidas == 180){
        if (medida1 < 90 && medida2 < 90 && medida3 < 90){
           printf("\nMediante os angulos internos foi formado um triangulo: acutangulo.");
        } else if (medida1 == 90 || medida2 == 90 || medida3 == 90){
           printf("\nMediante os angulos internos foi formado um triangulo: retangulo.");
        } else if (medida1 > 90 || medida2 > 90 || medida3 > 90){
           printf("\nMediante os angulos internos foi formado um triangulo: obtusangulo.");
        }
    } else {
         printf("\nNao foi possivel obter um triangulo. A soma dos angulos deve dar 180 graus.");    
    }
}

void planoDeSaude(){
     float valorBase = 822.75, valorFinal;
     int idade, dependentes;
     char sexo, resgateAereo;
     
     printf("\nDigite a idade = "); scanf("%d", &idade);
     
     if (idade < 0) idade *= -1;
     
     printf("\nSexo: m - Masculino, f - Feminino = "); scanf(" %c", &sexo);
     
     if (sexo != 'm' && sexo != 'f') sexo = 'm';         
     
     printf("\nNumero de dependentes = "); scanf("%d", &dependentes);
     
     if (dependentes < 0) dependentes *= -1;          
     
     printf("\nDireito a resgate aereo: s - Sim, n - Nao = "); scanf(" %c", &resgateAereo);
     
     if (resgateAereo != 's' && resgateAereo != 'n') resgateAereo = 's';         
     
     if (idade > 59 && (sexo == 'm' || resgateAereo == 's')){
         valorBase *= 2;
         valorFinal = valorBase + (dependentes * 400);
     
         if (resgateAereo == 's') valorFinal += 150;
         printf("\nValor = %.2f reais, Plano 1", valorFinal);
     } else if (idade > 59 && sexo == 'f' && resgateAereo == 'n'){
        valorBase *= 1.85;
        
        valorFinal = valorBase + (dependentes * 400);
        
        printf("\nValor = %.2f reais, Plano 2", valorFinal);       
     } else if (idade >= 30 && idade <= 59){
        valorBase *= 1.4;
        valorFinal = valorBase + (dependentes * 400);
     
         if (resgateAereo == 's') valorFinal += 150;
         printf("\nValor = %.2f reais, Plano 3", valorFinal);             
     } else if (idade < 30){
        valorBase *= 1.2;
        valorFinal = valorBase + (dependentes * 400);
     
         if (resgateAereo == 's') valorFinal += 150;
         printf("\nValor = %.2f reais, Plano 4", valorFinal);
     }
}

void aprovacaoAluno(){
     float nota1, nota2, media, percentual;
     int aulas, presencas;
     
     printf("\nDigite a primeira nota = "); scanf("%f", &nota1);
     
     printf("\nDigite a segunda nota = "); scanf("%f", &nota2);
     
     printf("\nQuantidade de aulas = "); scanf("%d", &aulas);
     
     if (aulas <= 0) {
        printf("\nErro: a quantidade de aulas deve ser maior que zero.\n");
        return;
    }
     
     printf("\nQuantidade de presencas = "); scanf("%d", &presencas);
     
     if (presencas < 0) presencas = 0;
     if (presencas > aulas) presencas = aulas;
  
     media = (nota1 + nota2) / 2;
     
     percentual = ((float) presencas / aulas) * 100;
     
     if (media >= 7 && percentual >= 75){
        printf("\nAprovado, Percentual de presenca = %.2f, Media = %.2f", percentual, media);
     } else if (media < 7 && media >= 3 && percentual >= 75){
       printf("\nEm exame..., Percentual de presenca = %.2f, Media = %.2f", percentual, media);       
     } else if (media < 3 || percentual < 75){
       printf("\nReprovado, Percentual de presenca = %.2f, Media = %.2f", percentual, media);
     }
}

int main(){
    int repetir = 1;
    
    while (repetir) {
        system("cls");
        menu();
        
        printf("\n\nDeseja sair? (0 para sair, 1 para continuar): "); 
        scanf("%d", &repetir);
    }
   
   return 0;   
}
