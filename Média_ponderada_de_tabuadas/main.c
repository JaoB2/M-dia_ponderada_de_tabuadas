#include <stdio.h>

int positivo(int x, int y)
{
    int neg = 0;
    int pos = 0;
    if(x< 0 )
    {
      neg = neg +1;
    }
    if( y < 0)
    {
      neg = neg +1;
    }

    if(x> 0 )
    {
      pos = pos +1;
    }

    if(y > 0)
    {
      pos = pos +1;
    }

    printf("\nA quantidade de números positivos é: %i\n", pos);
    printf("A quantidade de números negativos é: %i\n", neg);
}

float mediaPon(float num, float num1, float num2)
{
  float media;
  media = (num*1+num1*3+num2*5)/(1+3+5);
  
  return media;
}
int tabuada(int valor, int valor1)
{
  int num2;
  int numTotal = 0;
  int numTotal5 = 0;
  int tabuadaC;
  
  for(int i = 0; i<= 10; i++)
  {  
    int numTotal1 = 0;
    
    numTotal1 = valor * i;
    
    printf("\n%i X %i = %i",valor ,i , numTotal1);
    for( int j = 1; j <= 10; j++ )
    {
      numTotal = (numTotal + numTotal1);
    }
  }
printf("\n\n");
for(int l = 0; l<=10; l++)
{
    int numTotal6 = 0;
  
    numTotal6 = valor1 * l;
    
    printf("\n%i X %i = %i",valor1, l, numTotal6);
    
    for( int t= 1; t <= 10; t++ )
    {
      numTotal5 = (numTotal5 + numTotal6);
    }
}

    num2 = (numTotal/10) + (numTotal5/10);
  
    tabuadaC = (valor*1+valor1*3+num2*5)/(1+3+5);
  return tabuadaC;
}

int main(void) {

/*
- Crie um procedimento com 2 parâmetros do tipo inteiro que recebam os valores que foram digitados.
Informe quantos valores são positivos(maiores que zero)equantos valores são
negativos(menores que zero).(sem retorno,com a saída no console-printf/cout/System.out.println- realizada pelo procedimento)
*/
/*
- Crie uma função que recebe 3 parâmetros do tipo float (teste passando que devem ser o primeiro e o segundo valores digitados pelo usuário e, como terceiro parâmetro,a soma do primeiroedo segundo valor).
Calcule a média ponderada dos 3 valores considerando, respectivamente, os pesos 1,3 e 5.
Esta função deve retornar a média final.
Esta média deve ser exibida no console, mas não pela função.
*/
  /*Crie uma função do tipo inteiro com dois valores inteiro como parâmetro, atribuindo os valores que foram digitados.
Mostre a tabuada dos dois valores(obrigatório usar uma estrutura de repetição para multiplicar os números de 1 até 10).
Afunção deverá retornar a soma dos resultados de todas as operações das duas tabuadas.
Esta função também deve apresentar a média ponderada(pesos 1,3 e 5)para os seguintes 3 valores:os dois valores usados como entrada desta função e a soma dos resultados de todas as operações.*/
  int resp;
  int i;

  int num;
  int num1;
  
  float pon;
  float pon1;
  float pon2;
  float media;

  int nMult;
  int nMult1;
  int tabuadaM;
  
  inicio:
  
  for(; ; )
  {
    printf("\n\n1) - Quantidade de numeros positivos e negativos.\n2) - Calcular a média ponderada.\n3) - Calculo de duas tabuadas e a média ponderadas das mesmas.\n0) - Sair\n");
  
    printf("\nEscolha a equação que você deseja realizar: ");
      scanf("%i",&resp);
    
    if(resp == 0)
    {
      return 0;
    }
    
    else
    {
      switch(resp)
      {
        case 1:
          printf("Digite um valor que calculara os numeros positivos e negativos: \n");
            scanf("%i", &num);
      
          printf("Digite um valor que calculara os numeros positivos e negativos: \n");
            scanf("%i", &num1);
      
          positivo(num,num1);
        break;
    
        case 2:
          printf("Digite um valor que será usado para calcular a média ponderada\n");
            scanf("%f", &pon); 
      
          printf("Digite outro valor que será usado para calcular a média ponderada\n");
            scanf("%f", &pon1); 
    
          pon2 = pon1 + pon;
    
          printf("A média ponderada dos valores é %.2f", media = mediaPon(pon, pon1, pon2));
        break;
    
        case 3:
          printf("Digite um numero que será usado para montar a sua tabuada ");
            scanf("%i", &nMult);
      
          printf("\n\nDigite mais um numero que será usado para montar a sua tabuada ");
            scanf("%i", &nMult1);
      
          printf("\n\nA média ponderada dos valores é %i", tabuadaM = tabuada(nMult, nMult1));
        break;
    
        default:
          printf("\nOpção inválida. Digite novamente\n");
          
          goto inicio;
        break;
      }
    }
  }
  return 0;
}