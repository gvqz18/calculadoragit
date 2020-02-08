#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
#define PI 3.14159265

float angulo, sen, coss, tg, raiz, num;

int soma (int s1, int s2)
{
int resultado;
resultado = s1+s2;
return(resultado);
}
 
int subtra (int sub1, int sub2)
{
int resultado;
resultado = sub1-sub2;
return (resultado);
}
 
int multi (int m1, int m2)
{
int resultado;
resultado = m1*m2;
return (resultado);
}
 
int divi (int d1, int d2)
{
int resultado;
if (d1==0 && d2==0){
printf ("Nao é possivel dividir por zero!!!");
}
else{
resultado = d1/d2;
}
return (resultado);
}
 
int fatorial (int numfat)
{
int resultado, fat;
resultado=1;
for (fat=1;fat<=numfat;fat++)
{
resultado=resultado*fat;
}
return (resultado);
}
 
int potencia (int base, int exp)
{
int resultado;
if (exp==0)
return 1;
else if (exp==1)
return base;
 
return resultado=base*potencia(base, exp-1);
}

int Seno() {
  printf("\nDigite o angulo em graus.: ");
  scanf("%f", &angulo);
  sen = sin(angulo*PI/180);
  printf("\nO seno de %f = %f\n", angulo, sen); 
   
}

int Cosseno() {
  printf("\nDigite o angulo em graus.: ");
  scanf("%f", &angulo);
  coss = cos(angulo*PI/180);
  printf("\nO cosseno de %f = %f\n", angulo, coss);
   
}

int Tangente() {
  printf("\nDigite o angulo em graus.: ");
  scanf("%f", &angulo);
  tg = tan(angulo*PI/180);
  printf("\nO tangente de %f = %f\n", angulo, tg);
   
}

int Raiz(){
	printf("\nDigite um número: ");
	scanf ("%f",&num);
	raiz = sqrt(num);
	printf ("A raiz quadrada é: %f \n",raiz);
	
}
int main (void)
{
int op, num, num1, num2, numfato, bas, expo, resultado, raiz;
setlocale (LC_ALL, "Portuguese");

printf ("\n[1 - Adição (+)]\n");
printf ("[2 - Subtração (-)]\n");
printf ("[3 - Multiplicação (*)]\n");
printf ("[4 - Divisão (/)]\n");
printf ("[5 - Fatorial (!)]\n");
printf ("[6 - Potenciação (^)]\n");
printf ("[7 - Seno (+)]\n");
printf ("[8 - Cosseno (-)]\n");
printf ("[9 - Tangente (Tg)]\n");
printf ("[10 - Raiz Quadrada (/)]\n");
printf ("\nEscolha a operação a ser realizada:\n");
 
scanf ("%d", &op);
 
switch (op){
case 1: 
printf ("A operacao escolhida foi ADIÇÃO\n");
printf ("Insira o primeiro número:\n");
scanf ("%d", &num1);
printf ("Insira o segundo número:\n");
scanf ("%d", &num2);
resultado=soma(num1, num2);
printf ("O resultado da operação é: %d\n", resultado);
break;
 
case 2:
printf ("A operacao escolhida foi SUBTRAÇÃO\n");
printf ("Insira o primeiro número:\n");
scanf ("%d", &num1);
printf ("Insira o segundo número:\n");
scanf ("%d", &num2);
resultado=subtra(num1, num2);
printf ("O resultado da operação é: %d\n", resultado);
break;
 
case 3:
printf ("A operacao escolhida foi MULTIPLICAÇÃO\n");
printf ("Insira o primeiro número:\n");
scanf ("%d", &num1);
printf ("Insira o segundo número:\n");
scanf ("%d", &num2);
resultado=multi(num1, num2);
printf ("O resultado da operação é: %d\n", resultado);
break;
 
case 4:
printf ("A operacao escolhida foi DIVISÃO\n");
printf ("Insira o primeiro número:\n");
scanf ("%d", &num1);
printf ("Insira o segundo número:\n");
scanf ("%d", &num2);
resultado=divi(num1, num2);
printf ("O resultado da operacao é: %d\n", resultado);
break;
 
case 5:
printf ("A operacao escolhida foi FATORIAL\n");
printf ("Insira o numero a ter sua fatorial calculada:\n");
scanf("%d", &numfato);
resultado=fatorial(numfato);
printf ("O resultado da operacao é: %d\n", resultado);
break;
 
case 6:
printf ("A operacao escolhida foi POTENCIAÇÃO\n");
printf ("Insira a base:\n");
scanf ("%d", &bas);
printf ("Insira o expoente:\n");
scanf ("%d", &expo);
resultado=potencia(bas,expo);
printf("O resultado da operação é: %d\n", resultado);
break;

case 7:
printf ("A operação escolhida foi SENO\n");
Seno();
break;

case 8:
printf ("A operação escolhida foi COSSENO\n");
Cosseno();
break;

case 9:
printf ("A operação escolhida foi TANGENTE\n");
Tangente();
break;


case 10:
printf ("A operação escolhida foi RAIZ QUADRADA\n");
Raiz();
break;
 
default:
printf ("OPÇÃO INVÁLIDA!\n");
}
 
getch();
return 0;
}
