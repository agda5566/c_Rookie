#include<stdio.h>
#include<stdlib.h>

void toUpper(char s[]);
int main(){
    char str[21];
    printf("請輸入字串，長度小於20\n");
    scanf("%[^\n]20s",str);
    //fgets(str,256,stdin);
    //gets(str);
    toUpper(str);
    printf("轉換後: %2s\n",str);
    return 0;

}

void toUpper(char s[]){

    int i=0;
    while(s[i]!='\0'){
        if(s[i]>=97 && s[i]<=122){
        
            s[i]=s[i]-32;
        }
        else{
        
            s[i]=s[i]+32;
        }
        i++;
    }
}
