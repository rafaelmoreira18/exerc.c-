/*
Faça um programa que receba a idade, a altura e o peso de 25 pessoas. Calcule e mostre :
- A quantidade de pessoas com idade superior a 50 anos.
- A média das alturas das pessoas com idade entre 10 e 20 anos.
- A percentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas.
*/

#include<stdio.h>

main()
{
	
	int i, idade, cont50 = 0, contPeso = 0, cont10_20 = 0;
	float altura , peso, media, somaAltura = 0;
	
	for(i=1; i<=25; i++){
		printf("\nDigite a sua idade : ");
		scanf("%i",&idade);
	    printf("Digite a sua altura : ");
		scanf("%f",&altura);
	    printf("Digite o seu peso : ");
		scanf("%f",&peso);
		
		if(idade>50){
			cont50 = cont50 + 1;
		}
		if( idade >= 10 && idade <= 20){
			cont10_20 = cont10_20 + 1;
			somaAltura = somaAltura + altura;
		}
		
		if(peso<40){
		   contPeso = contPeso + 1;
		}
		
		
	}
	media = somaAltura / cont10_20;
	printf("\nA quantidade de pessoas acima de 50 anos : %i", cont50);
	printf("\nA media de pessoas de 10 a 20 anos e : %.2f", media);
	printf("\nA quantidade de pessoas com peso inferior a 40kg e : %i", contPeso);
	
	
	
	
	
}
