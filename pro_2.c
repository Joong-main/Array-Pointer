#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(void) {
	
	//변수 개수 인풋
	int cnt = 0;
	printf("출력할 난수의 개수를 입력하세요 : ");
	scanf_s("%d", &cnt);
	// 난수 범위 지정
	int max_num = 0;
	printf("출력할 난수의 최대 값을 입력하세요 :");
	scanf_s("%d", &max_num);
	//변수 저장 메모리 할당
	int* array;
	array = (int*)malloc(sizeof(int));
	//난수를 지정한 개수만큼 뽑아서 메모리에 저장 (반복문)
	srand(time(0));
	for (int i = 0; i < cnt; i++) {
		int num = 0;
		num = rand() % (max_num + 1);
		*(array + i) = num;
	}

	//메모리의 처음 부터 끝까지 저장 된 난수를 출력 ( 반복문 )

	for (int i = 0; i < cnt; i++) {
		printf("%d 번째 숫자 : %d\n", (i + 1), *(array + i));
	}
	//동적메모리 free
	free(array);

	return 0;
}