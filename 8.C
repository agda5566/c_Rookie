#include<stdio.h>
#include<stdlib.h>
int findMax(int *);
int main(){
	//srand(time(NULL));
	int data[10];
	int i;
	for(i=0;i<10;i++){
		data[i]=rand()%10;
		printf("%d, ",data[i]);
	}
	int pos=findMax(data);
	printf("\nmax in position: %d\n",&pos);
	return 0;
}
int findMax(int *a){
	int num=*(a+0);
	//printf("a=%d",a);
	int i;
	//int max=a;
	for(i=1;i<10;i++){
		if(*(a+i)>num){
			num=*(a+i);
			
		}
	}
	return num;
}

