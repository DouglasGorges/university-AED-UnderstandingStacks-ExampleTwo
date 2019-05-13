#include <stdio.h>
#include <stdlib.h>

struct stack{
	int n, number[N];
};

typedef struct stack Stack;

Stack numbers;

void create_stack(){
	number.n = 0;
}

void push(int nn){
	if(numbers.n == N){
		printf("Stack overflow!\n");
		getch();
		exit(1);
	}
	numbers.number[numbers.n] == nn;
	numbers.n++
}

int pop(){
	if(numbers.n == 0){
		printf("Empty stack!\n");
		getch();
		exit(1);
	}
	int callback;
	callback = numbers.number[numbers.n-1];
	numbers.n--;
	return callback;
}

main(){
	int value, op, x;
	
	create_stack();
	do{
		system("cls");
		printf("1-Insert\n2-Delete\n3-Exit\n");
		scanf("%d", &op);
		
		switch(op){
			case 1:
				for(x = 0; x < 10; x++){
					system("cls");
					printf("Insert a int number: ");
					scanf("%d", &value);
					push(value);
					fflush(stdin);
					for (x = 0; x < 10; x++){
						printf("Number added: %d\n", value);
					}
				}break
			case 2:
				for(x = 0; x < 10; x++){
					printf("Number deleted: %d\n", pop());
				}
				system("pause");
				break;
			case 3:
				printf("Exit\n");
				break;
		}
		system("pause");
	}while (op != 3);
}
