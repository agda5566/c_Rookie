#include<stdio.h>
#include<stdlib.h>
int main(){
   
	char a[4]="8126"; //�]�w���� 

    int m,n;
    char b[4];
    int i,j;
    
    printf("�п�J�Ʀr\n");
    while(1){
        m=0,n=0;
        scanf("%4s",b); 

        for(i=0;i<=3;i++){
            for(j=0;j<=3;j++){
                if(a[i]==b[j]){
                    if(j==i){
                        m++;
                    }
                    else{
                        n++;
                    }
                }
            
            } 

        }
        if(m==4){
            printf("%dA%dB\n",m,n);
            break;
        }
        else{
            printf("%dA%dB\n",m,n);
            continue;
        }

        
           
    }
    return 0;





}
