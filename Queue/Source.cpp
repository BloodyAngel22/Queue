#include "Queue.h"
#include "Stack.h"

void loopQueue() {
	Queue q;
	int choice;
	while (true) {
		printf("Выбор: 1 - Добавить новый элемент; 2 - Удалить элемент; 3 - Выход\n");
		int tmp;
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("Введите элемент ");
			scanf_s("%d", &tmp);
			push(q, tmp);
			break;
		case 2:
			tmp = pull(q);
			printf("Удаление элемента %d\n", tmp);
			break;
		case 3:
			return;
		}

		printQueue(q);
	}
}

void loopStack() {
	Stack q;
	int choice;
	while (true) {
		printf("Выбор: 1 - Добавить новый элемент; 2 - Удалить элемент; 3 - Выход\n");
		int tmp;
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("Введите элемент ");
			scanf_s("%d", &tmp);
			push(q, tmp);
			break;
		case 2:
			tmp = pull(q);
			printf("Удаление элемента %d\n", tmp);
			break;
		case 3:
			return;
		}

		printQueue(q);
	}
}

int main() {
	system("chcp 1251");
	loopStack();
	return 0;
}