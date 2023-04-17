//#include <stdio.h>
//#include <stdlib.h>
//
//struct Element {
//	int data;
//	Element* next;
//};
//
//struct Queue {
//	Element* head = NULL, *tail = NULL;
//};
//
//void push(Queue& q, int d) {
//	Element* e = (Element*)malloc(sizeof(Element));
//	e->data = d;
//	e->next = NULL;
//
//	if (q.head == NULL) {
//		q.tail = e;
//		q.head = e;
//	}
//	else {
//		q.tail->next = e;
//		q.tail = e;
//	}
//}
//
//int pull(Queue& q) {
//	if (q.head == NULL) return 0;
//
//	int d = q.head->data;
//	if (q.head == q.tail)
//		q.tail = NULL;
//	Element* e = q.head;
//	q.head = q.head->next;
//	free(e);
//
//	return d;
//}
//
//void printQueue(const Queue& q) {
//	for (Element* cur = q.head; cur != NULL; cur = cur->next) {
//		printf("%d - ", cur->data);
//	}
//	printf("\b\b   \n");
//}
//
//int main() {
//	system("chcp 1251");
//	Queue q;
//	int choice;
//	while (true) {
//		printf("Выбор: 1 - Добавить новый элемент; 2 - Удалить элемент; 3 - Выход\n");
//		int tmp;
//		scanf_s("%d", &choice);
//
//		switch (choice)
//		{
//		case 1:
//			printf("Введите элемент ");
//			scanf_s("%d", &tmp);
//			push(q, tmp);
//			break;
//		case 2:
//			tmp = pull(q);
//			printf("Удаление элемента %d\n", tmp);
//			break;
//		case 3:
//			return 0;
//		}
//
//		printQueue(q);
//	}
//	return 0;
//}