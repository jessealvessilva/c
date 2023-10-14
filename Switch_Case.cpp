#include <iostream>
#include <conio.h>
#include<stdio.h>


int main() {
	
	int day = 0 ;
	
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
				printf("You chose Sunday \n" ); 
				break;
			
			case 2 :
				printf("You chose Monday \n");
				break;
			
			case 3:
				printf("You chose Tuesday \n");
				break;
			
			case 4 :
				printf("You chose Wednesday \n" );
				break;
				
			case 5 :
				printf("You chose Thursday \n");
				break;
			
			case 6 :
				printf("You chose Friday \n");
				break;
			
			case 7 :
				printf("You chose Saturday \n");
				break;
					
			default: printf("\n Invalid option \n");
		}
		
		
	} while( day >= 1 &&  day < 8  );
	
	
	return 0;
}

