#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void expr(int a, int b, char _sym)
{
	int c = 0;
	
	printf("\nCalculating... \n");
	sleep(1);
	switch(_sym){
		case '+':
		c = a + b;	
		break;
		
		case '-':
		c = a - b;	
		break;
		
		case '*':
		case 'x':
		c = a * b;	
		break;
		
		case '/':
		c = a / b;	
		break;
		
		case '%':
		c = a % b;	
		break;
		
		default:
		printf("Invalid expression\n\n");
	}
	 
	
	printf("\nResult: %d\n\n", c);
	
	sleep(2);
}         
	
  
void MainMethod()
{
	int x;
	int y;
	char sym;
	
	
	printf("Please enter computation symbols (+  -  x  *  / %%): ");
	scanf("%s", &sym);
	
	printf("Please enter 1st number: ");
	scanf("%d", &x);
	
	printf("Please enter 2nd number: ");
	scanf("%d", &y);
	
	
	expr(x, y, sym);
	
	printf("Switching back to main menu...\n\n");
	sleep(2);
	
}


int main(int argc, char *argv[]) {
	
	// Simple Calculator	 
	
	int quit = 0;
	int ch;
	while(quit != 1){
		
		printf("Welcome to Simple Calculator \n\n");
		                                        
		printf("Please choose on the ff.\n\n1. Calculate number\n2. Quit\n\n>> ");
		
		scanf(" %d", &ch);
		
		switch(ch){
			case 1:
			system("cls");
			printf("\nLaunching Main Method...\n\n");
			sleep(2);
			MainMethod();	
			break;
			
			case 2:
			printf("\nBye!!!");
			quit = 1;	
			break;
			
			default:
			printf("Invalid choice");
			quit = 1;
		}
	}
	
	
	/*
	
	int a = 5, b = 5, c = 0;
	
	c = (a * b) - 5;
	
	if(c == 25)
		printf("Equals to: %d", + c);
	else
		printf("Not 25\n");
		
	// Loop
	int i = 0;
	while(i != c)
	{
		i++;
		printf("%d\n", i);            
	} 
	*/
	
	/*
	printf("\n\n");
	
	int j = 0;
	do{
		j++;
		
		printf("%d\n", j);
	}
	while(j != c);
	
	printf("\n\n");
	
	for(int k = 1; k <= c; k++)
	{	
		printf("%d\n", k);
	}
	 */
	return 0;
}