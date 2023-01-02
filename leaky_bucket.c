#include<stdio.h>
int BSIZE= 10;
int FFlow =4;

void main(){
    int BF, curr_amt=0;
    while(1){
        printf("\nËnter the Burst Flow here:\n");
        scanf("%d",&BF);
        curr_amt=curr_amt+BF-FFlow;
        if(curr_amt>=BSIZE){
            printf("\nBucket is Full.\n");
            curr_amt=BSIZE;
        }
        else if(curr_amt<=0){
            printf("\nBucket is Empty.\n");
            curr_amt=0;
        }
        else{
            printf("\nThe buffer left is %d units.\n",curr_amt);
        }
    }
}
