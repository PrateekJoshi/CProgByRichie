#include<stdio.h>

int main() {
	int freqCh[128];
	printf("Enter the characters: \n");
	char ch;
	for(int i=0;i<128;i++){
		freqCh[i]=0;
	}
	while((ch=getchar())!=EOF){
        freqCh[ch]++;
	}

	//display
	for(int i=0;i<128;i++){
		//printf("%c",(int)freqCh[i]);
		putchar(i);
		//print freq of char
		for(int j=1;j<=freqCh[i];j++){
			printf("*");
		}
		printf("\n");
	}


	return 0;
}
