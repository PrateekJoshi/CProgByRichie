#include <stdio.h>
// program to count the number of occurrences of each digit
//http://stackoverflow.com/questions/1118957/c-how-to-simulate-an-eof
int main() {
	int digits[10];
	char ch;
	for(int i=0;i<10;i++){
		digits[i]=0;
	}
	while((ch=getchar())!=EOF){
       if(ch>='0' && ch<='9'){
           digits[ch-'0']++;
       }
	}

	//printf("Frequency:\n");
	for(int i=0;i<10;i++){
		printf("%d %d\n",i,digits[i]);
	}
	return 0;
}
