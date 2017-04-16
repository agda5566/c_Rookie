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
	printf("\nmax in position: %d\n",pos);
	return 0;
}
int findMax(int *a){
	int i,max;
	max=a;
	for(i=1;i<10;i++){
		if(*max<*(a+i)){
			max=a+i;		
		}
	}	
	
	return max;
}

