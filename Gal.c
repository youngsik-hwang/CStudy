#include <stdio.h>
#define GAL 3.785
#define MIL 1.609
int main(void){
	
	float distance;
	float gasolConsum;

	printf("������ �Ÿ���  �Է��Ͻÿ�:");
	scanf("%f", &distance);
	printf("����� �Һ��� �ֹ��� ����  %0.1f GAL �Դϴ�.", distance * GAL);
	
	return 0; 	
}
