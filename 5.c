#include<stdio.h>
#include<stdlib.h>
int mystrlen();
int main(){
	char a[21];

	
	int i,j,k;
	char b[21];
	
	while(1){
		a[5]='0';
		a[21]='0';
		scanf("%s",a);
		//printf("%s %d",a,a[5]);
		k=mystrlen(a);
		if(a[5]!='0' && a[21]=='0'){
			//printf("ok\n");
			//printf("%c",a[21]);
			while(k>=0){
				b[k--]=a[i++];
			}
			for(j=0;j<=mystrlen(a);j++){
				printf("%c",b[j]);
			}
			break;
			
			
		}
		
		else{
			
			printf("��J���r�ꤣ��p��5�Τj��20,�Э��s��J\n");	
			continue;
		}
		
	}
	return 0;

}
//�p���J���r��ƶq 
int mystrlen(char *a){
	int i=0;
	while(i>=0){
		if(a[i]=='\0'){
			break;
		}
		else{
			i++;
		}
	}
	
	return i;
}

