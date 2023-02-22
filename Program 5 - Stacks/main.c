// program to implement s stack using an array

#include <stdio.h>

#define MAX 10

int stk[MAX];
int top = -1;

void push();
void pop();
void display();

int main()
{
	int choice;
	char c;
	
	printf("Stack Operations: \n");
	printf("1. push\n2. pop\n3. display\n");
	
	do
	{	
		printf("\nEnter 1, 2 or 3 to perform a stack operation from the list above: ");
		scanf("%d", &choice);
	
		switch(choice)
		{
			case 1:
				{
					printf("\n\nEntered choice: %d\n", choice);
					push();
					break;
				}
			case 2:
				{
					printf("\n\nEntered choice: %d\n", choice);
					pop();
					break;
				}
			case 3:
				{
					printf("\n\nEntered choice: %d\n", choice);
					display();
					break;				
				}
			default:
				{
					printf("\n\nInvalid choice. Terminating...");
					break;
				}		
		}
		
	}while(c == 'y' || c == 'Y');
	
	return 0;
}

// push function
void push()
{
	int n;
	
	if(top == MAX - 1)
	{
		printf("stack overflow");
	}
	else
	{
		printf("Enter an integer: ");
		scanf("%d", &n);
		
		top++;
		stk[top] = n;
		
		printf("Value entered.");
	}
	
	return;
}

// pop function
void pop()
{
	int i;
	
	if(top == -1)
	{
		printf("stack underflow");
	}
	else
	{
		top--;
		for(i = top; i < MAX - 1; i++)
		{
			stk[i] = stk[i + 1];
		}
		
		printf("Value removed.");
	}
	
	return;
}

// display function
void display()
{
	int i;
	
	if(top == -1)
	{
		printf("empty stack");
	}
	else
	{
		printf("available stack: \n");
		for(i = 0; i <= top; i++);
		{
			printf("%d ", stk[i]);
		}
		
	}
	
	return;
}
