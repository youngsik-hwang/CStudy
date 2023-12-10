#include <stdio.h>
#define GAL 3.785
#define MIL 1.609
int main(void){
	
	float distance;
	float gasolConsum;

	printf("주행한 거리를  입력하시오:");
	scanf("%f", &distance);
	printf("당신이 소비한 휘발유 량은  %0.1f GAL 입니다.", distance * GAL);
	
	return 0; 	
}
