#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// Declaração
	int vetor[5]; 	
	int i;
	
	// Atribuição de valor
	vetor[0]  =  10;
	vetor[1]  =  55;
	vetor [2] =  200;
	vetor [3] =  35;
	vetor [4] =  2;
    
	for( i = 0; i <= 5; i++){ 
	
		 printf("\n\nValue of the position is %d equal is %d ", i, vetor[i] * 2 );	  
	} 
	
	printf("\n\n\n\n");
	return 0;
}
