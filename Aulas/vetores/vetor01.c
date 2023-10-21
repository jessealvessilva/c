#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// Declaração
	int Mark[5]; 	 
	int i;
	
	// Atribuição de valor
	Mark[0]  =  10;
	Mark[1]  =  5;
	Mark[2]  =  8;
	Mark[3]  =  3;
	Mark[4]  =  6;
    
	for( i = 0; i < 5; i++){ 
	
		if( Mark[i] >= 7 ) {
		
			printf("\n\nO aluno %d tirou %d e esta Aprovado", i, Mark[i] );
		
		}else{
			printf("\n\nO aluno %d tirou %d e esta Reprovado", i, Mark[i] );
		}
	} 
	
	printf("\n\n\n\n");
	return 0;
} 
