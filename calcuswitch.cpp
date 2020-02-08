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
printf ("Nao � possivel dividir por zero!!!");
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
	printf("\nDigite um n�mero: ");
	scanf ("%f",&num);
	raiz = sqrt(num);
	printf ("A raiz quadrada �: %f \n",raiz);
	
}
int main (void)
{
int op, num, num1, num2, numfato, bas, expo, resultado, raiz;
setlocale (LC_ALL, "Portuguese");

printf ("\n[1 - Adi��o (+)]\n");
printf ("[2 - Subtra��o (-)]\n");
printf ("[3 - Multiplica��o (*)]\n");
printf ("[4 - Divis�o (/)]\n");
printf ("[5 - Fatorial (!)]\n");
printf ("[6 - Potencia��o (^)]\n");
printf ("[7 - Seno (+)]\n");
printf ("[8 - Cosseno (-)]\n");
printf ("[9 - Tangente (Tg)]\n");
printf ("[10 - Raiz Quadrada (/)]\n");
printf ("\nEscolha a opera��o a ser realizada:\n");
 
scanf ("%d", &op);
 
switch (op){
case 1: 
printf ("A operacao escolhida foi ADI��O\n");
printf ("Insira o primeiro n�mero:\n");
scanf ("%d", &num1);
printf ("Insira o segundo n�mero:\n");
scanf ("%d", &num2);
resultado=soma(num1, num2);
printf ("O resultado da opera��o �: %d\n", resultado);
break;
 
case 2:
printf ("A operacao escolhida foi SUBTRA��O\n");
printf ("Insira o primeiro n�mero:\n");
scanf ("%d", &num1);
printf ("Insira o segundo n�mero:\n");
scanf ("%d", &num2);
resultado=subtra(num1, num2);
printf ("O resultado da opera��o �: %d\n", resultado);
break;
 
case 3:
printf ("A operacao escolhida foi MULTIPLICA��O\n");
printf ("Insira o primeiro n�mero:\n");
scanf ("%d", &num1);
printf ("Insira o segundo n�mero:\n");
scanf ("%d", &num2);
resultado=multi(num1, num2);
printf ("O resultado da opera��o �: %d\n", resultado);
break;
 
case 4:
printf ("A operacao escolhida foi DIVIS�O\n");
printf ("Insira o primeiro n�mero:\n");
scanf ("%d", &num1);
printf ("Insira o segundo n�mero:\n");
scanf ("%d", &num2);
resultado=divi(num1, num2);
printf ("O resultado da operacao �: %d\n", resultado);
break;
 
case 5:
printf ("A operacao escolhida foi FATORIAL\n");
printf ("Insira o numero a ter sua fatorial calculada:\n");
scanf("%d", &numfato);
resultado=fatorial(numfato);
printf ("O resultado da operacao �: %d\n", resultado);
break;
 
case 6:
printf ("A operacao escolhida foi POTENCIA��O\n");
printf ("Insira a base:\n");
scanf ("%d", &bas);
printf ("Insira o expoente:\n");
scanf ("%d", &expo);
resultado=potencia(bas,expo);
printf("O resultado da opera��o �: %d\n", resultado);
break;

case 7:
printf ("A opera��o escolhida foi SENO\n");
Seno();
break;

case 8:
printf ("A opera��o escolhida foi COSSENO\n");
Cosseno();
break;

case 9:
printf ("A opera��o escolhida foi TANGENTE\n");
Tangente();
break;


case 10:
printf ("A opera��o escolhida foi RAIZ QUADRADA\n");
Raiz();
break;
 
default:
printf ("OP��O INV�LIDA!\n");
}
 
getch();
return 0;
}
