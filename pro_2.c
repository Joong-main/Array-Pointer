#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(void) {
	
	//���� ���� ��ǲ
	int cnt = 0;
	printf("����� ������ ������ �Է��ϼ��� : ");
	scanf_s("%d", &cnt);
	// ���� ���� ����
	int max_num = 0;
	printf("����� ������ �ִ� ���� �Է��ϼ��� :");
	scanf_s("%d", &max_num);
	//���� ���� �޸� �Ҵ�
	int* array;
	array = (int*)malloc(sizeof(int));
	//������ ������ ������ŭ �̾Ƽ� �޸𸮿� ���� (�ݺ���)
	srand(time(0));
	for (int i = 0; i < cnt; i++) {
		int num = 0;
		num = rand() % (max_num + 1);
		*(array + i) = num;
	}

	//�޸��� ó�� ���� ������ ���� �� ������ ��� ( �ݺ��� )

	for (int i = 0; i < cnt; i++) {
		printf("%d ��° ���� : %d\n", (i + 1), *(array + i));
	}
	//�����޸� free
	free(array);

	return 0;
}