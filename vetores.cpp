#include <iostream>
#include <conio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// Declaração
	int i;
	int vetor[5]; 
	
	// Atribuição de valor
	vetor[0] =  10;
	vetor[1] =  55;
	vetor[2] =  200;
	vetor[3] =  35;
	vetor[4] =  2;
	
	for ( i = 0; i <= 4 ; i++ ) {
	
	   printf("\nValue of the position %d equal is %d ", i, vetor[i] );  
		
	}
	
	printf("\n\n ======================= ");	
	
	return 0;
}
