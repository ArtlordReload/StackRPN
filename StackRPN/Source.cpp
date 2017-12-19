//programa de uso de Stacks o Pilas o LIFO (no es uso de  QUEUES o COLAS o FIFO)
#include<stdio.h>
#include<stack>
#include<conio.h>
#include<Windows.h>


#include "Stack.h"

Stack *top = NULL;

void main()
{
	Stack rpn;
	char c;
	do
	{
		system("cls");
		printf("Ingrese la cadena RPN o POLACA INVERSA\n");
		printf("Utilize teclas 0-9 o * / + -\n");
		printf("Ejemplo- 23*54*+9-=17\n");
		printf("Esta listo? s-si n-no\n");
		c = _getch();
	} while (c != 's');
	system("cls");
	//printf("Me gusta que este listo\n");
	//printf("Ingrese la cadena RPN o POLACA INVERSA\n");
	//printf("Utilize teclas 0-9 o * / + -\n");
	//42* 43+ 45- 47/

	//23*54*+9-
	//int cont = 1;
	do
	{
		do
		{
			c = _getch();
			
		} while ((c < 48 || c > 57)!=(c==42||c==43||c==45||c==47||c==13));
		printf("%c", c);
		if (c >= 48 && c <= 57)
		{
			rpn.Push(c - 48);
			//printf("%d", rpn.Show());
		}

		//53*
		//42*
		else if (c == 42)
		{
			int num = 0;
			num=rpn.Show();
			rpn.Pop();
			num = rpn.Show()*num;
			rpn.Pop();
			rpn.Push(num);
		}
		else if (c == 47)
		{
			int num = 0;
			num = rpn.Show();
			rpn.Pop();
			num = rpn.Show()/num;
			rpn.Pop();
			rpn.Push(num);
		}
		else if (c == 43)
		{
			int num = 0;
			num = rpn.Show();
			rpn.Pop();
			num = rpn.Show()+num;
			rpn.Pop();
			rpn.Push(num);
		}
		else if (c == 45)
		{
			int num = 0;
			num = rpn.Show();
			rpn.Pop();
			num = rpn.Show()-num;
			rpn.Pop();
			rpn.Push(num);
		}
		
	} while (c != 13);
	printf("\n%d\n",rpn.Show());
}