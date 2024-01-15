#include <stdio.h>

int main(void) {
	int item;

	//Меню выбора
	printf(
		"1. Learning C lang\n"
		"2. Learning C++\n"
		"3. Learning Python\n"
		"4. Learning Java\n"
		"5. Learning JavaScript\n"
	);
	if(scanf("%d", &item) != 1){
		printf("n/a");
		return 0;
	}

	switch(item){
		case 1:
			printf("learning C lang");
			break;
		case 2:
			printf("learning C++");
			break;
		case 3:
			printf("learning Python");
			break;
		case 4:
			printf("learning Java");
			break;
		case 5:
			printf("learning JavaScript");
			break;					
	}

	return 0;
}
