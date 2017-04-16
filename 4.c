#include<stdio.h>
#include<stdlib.h>
int main(){
    char s[100];
    srand(time(NULL));
    int i,a=0,b=0,c=0,r=0;
    for(i=0;i<100;i++){
        r=rand()%3+1;
        //printf("%d|",r);
            if(r==1){
             s[i]='A';
             a++;
        
            } 
            else if(r==2){
                s[i]='B';
                b++;
            }
            else if(r==3){
        
                s[i]='C';
                c++;
            }
        
    }
    printf("A有%d個,B有%d個,C有%d個\n",a,b,c);
    printf("%s\n",s);
                       
}
