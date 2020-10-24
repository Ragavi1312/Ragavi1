#include <stdio.h>

int main(void) {
	int n;
        printf("Enter number A \n");
	scanf("%d",&n);
	if(n%2==0)
	printf("A num is even");
	else if(n%2<0)
	printf("A num is invalid");
	else
	printf("A num is odd");
	return 0;
}
