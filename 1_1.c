#include<stdlib.h>
#include<stdio.h>
#define MAX 10 //���u�ƶq
#define COL 5 //�X�C 
#define ROW 5 //�X�� 
int main(){
    //�إ߽L�� 
    srand(time(NULL));
    int miner[6][6];
    int i,j,b,m;
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            miner[i][j]=0;
        }
    }
   //��ʳ]�w���u 
    miner[0][0]=88;
    miner[0][2]=88;
    miner[0][4]=88;
    miner[1][2]=88;
    miner[2][1]=88;
    miner[2][4]=88;
    miner[3][1]=88;
    miner[3][3]=88;
    miner[4][0]=88;
    miner[4][4]=88;
     
    //�H�����u 
    /*int sum=0;
    while(sum<MAX){
        int i=rand()%5;
        int j=rand()%5;
        if(miner[i][j]!=-1){
            miner[i][j]=88;
            ++sum;
        }
    }*/ 
   //��X�L�� 
   
    int count=0;
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            if(miner[i][j]==88){
               printf(" *");
               
            }
            else if(miner[i][j]!=88){
                for(b=-1;b<=1;b++){
                    for(m=-1;m<=1;m++){
                        if(miner[b+i][m+j]==88){
                            count+=1;
                            if(count!=0){
                              miner[i][j]=count;
                            }
                        }
                    }
                }
                printf(" %d",miner[i][j]);
                count=0;

            }


        }
        printf("\n");
    }
    return 0;

}
