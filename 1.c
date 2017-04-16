#include<stdlib.h>
#include<stdio.h>
#define MAX 10 //炸彈數量
#define COL 5 //幾列
#define ROW 5 //幾行
int main(){
    srand(time(NULL));
    int miner[ROW][COL];
    int i,j;
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            miner[i][j]=0;
        
        }
    }
    int count =0;
    while(count<MAX){
        
    
        int i=rand()%ROW;
        int j=rand()%COL;
        if(miner[i][j]!=-1){
            miner[i][j]=-1;
            ++count;
        
        }
    
    }
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            if(miner[i][j]==-1){
                printf("* ");
            
            }
            else
                    printf("0 ");
        }
        printf("\n");
    }


}
