#include <stdio.h>
int main() {
	int num, sum = 0;
	printf("n의 값을 입력하시오: ");
	scanf("%d", &num);
	for(int i = 1;i<=num;i++){
		sum += i*i;
	}
	printf("계산값은 %d입니다.\n", sum);
	return 0;
}