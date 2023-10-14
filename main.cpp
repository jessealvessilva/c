#include <iostream>
#include <conio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int day = 0 ;
	 int valor[40];
    
    valor[0] = 1 ;
    
    printf("valor[0] = %d ", valor[0]);

    return 0;
	
	do 
	{
			
		printf("Day of week : \n\n");
		
		printf("1 - Sunday \n");
		printf("2 - Monday \n");
		printf("3 - Tuesday \n");
		printf("4 - Wednesday \n");
		printf("5 - Thursday \n");
		printf("6 - Friday \n");					
		printf("7 - Saturday \n");
		
		printf("\n\n\n");
		
		printf("Choose one day of the week \n");
		
		scanf("%d",&day); 
		
		switch( day )
		{ 
			case 1 :
				printf("\nYou chose Sunday \n" ); 
				break;
			
			case 2 :
				printf("\nYou chose Monday \n");
				break;
			
			case 3:
				printf("\nYou chose Tuesday \n");
				break;
			
			case 4 :
				printf("\nYou chose Wednesday \n" );
				break;
				
			case 5 :
				printf("\nYou chose Thursday \n");
				break;
			
			case 6 :
				printf("\nYou chose Friday \n");
				break;
			
			case 7 :
				printf("\nYou chose Saturday \n");
				break;
					
			default: printf("\n Invalid option \n");
		}
		
		
	} while( day > 0  &&  day < 8  ); 
	
	
	return 0;
}
