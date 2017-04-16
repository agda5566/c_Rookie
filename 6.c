#include<stdio.h>
#include<stdlib.h>
void swap(int *,int *);
int main(){
	int a=100;
	int b=-2;
	swap(&a,&b);
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
void swap(int *p1,int *p2){
	int tmp=*p1;
	*p1=*p2;
	*p2=tmp;
}
