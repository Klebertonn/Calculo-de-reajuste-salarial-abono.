#include <stdio.h>
#include<stdlib.h>


 int main () 
 {
 	float salario, reajuste,abono,reajustesalario;
 printf("////////////////////////////////////////////////////////\n");
 printf("digite o salario liquido\n");
 scanf("%f", &salario);
 
 reajuste = salario *0.075;
 abono = 150;
 printf("reajuste %f\n",reajuste);
 printf("abono salarial %f\n",abono);
    if (salario <= 1750) {	
 	printf("projecao de salario ate 1750 = %f",salario*0.075+150+salario);
     }
	 else{
     	printf("projecao de salario sem abono =%f",salario+reajuste);
		  }
 	
 return(0);
 	
 }


