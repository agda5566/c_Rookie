#include<stdio.h>
#include<stdlib.h>

void toUpper(char s[]);
int main(){
    char str[21];
    printf("�п�J�r��A���פp��20\n");
    scanf("%[^\n]20s",str);
    //fgets(str,sizeof(str),stdin);
    //gets(str);
    toUpper(str);
    printf("�ഫ��: %s\n",str);
    //puts(str);
	return 0;

}

void toUpper(char s[]){

    int i=0;
    while(s[i]!='\0'){
        if(s[i]>=97 && s[i]<=122){
        
            s[i]=s[i]-32;
            
        }
        else if(s[i]==32){
        	//�קK�ť�ascii+32�ܦ�@ 
		}
        
        else{
        
            s[i]=s[i]+32;
        }
        i++;
    }
}
