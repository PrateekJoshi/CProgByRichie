#include <stdio.h>

int main(int argc, char **argv) {
    printf("Enter the number: ");
    int n;
    int count=0;
    scanf("%d",&n);
    while(n!=0){
    	count=count+(n&1);
    	n=n>>1;
    }
    printf("\n The number of 1's are: %d",count);
	return 0;
}
