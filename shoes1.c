#include <stdio.h>
#define ADJUST 7.31
int main(void){
	const double SCALE = 0.333;
	double shoe, foot;
	
	shoe = 9.0;
	foot = SCALE * shoe + ADJUST;
	printf("�Ź� ������(���ڿ�) �߱���\n");
	printf("%10.1f %15.2f ��ġ\n", shoe, foot);
	
	return 0;
}
