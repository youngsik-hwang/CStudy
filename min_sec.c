#include <stdio.h>
#define SEC_PER_MIN 60
int main(void){
	int sec, min, left;
	
	printf("�� ���� �־����� �ð��� �а� �ʷ� ��ȯ�մϴ�!\n");
	printf("�� ���� �Է��Ͻÿ� (<=0�̸� ��):\n");
	scanf("%d",&sec);
	while (sec>0){
		min = sec / SEC_PER_MIN;
		left = sec % SEC_PER_MIN;
		printf("%d �ʴ� %d ��, %d ���Դϴ�.\n", sec, min, left);
		printf("���� �� ���� �Է��Ͻÿ�(<=0�̸� ��):\n");
		scanf("%d",&sec);
	}
	printf("��!\n");
	
	return 0;
}
