#include<stdio.h>

struct 
{
    /* data */
};
void main(){
    int *A,n,ch,x,i,j;
    printf("ENter Dimension");
    scanf("%d",n);
    A=(int *)malloc(n*sizeof(int));
    do{
        //display menu
        printf("1.create,2.get,3.set,4.display:");
        scanf("%d",ch);
        switch (ch){
            case 1:for(int i=0;i<=n;i++){
                scanf("%d",&A[i-1]);
                break;
            }
            case 2:printf("enter indices");
                    
                    scanf("%d %d",&i,&j);
                    if(i==j){printf("%d",A[i-1]);}
                    else printf("0");
            case 3:printf("enter row coulumn element");
                    scanf("%d %d %d",&i,&j,&x);
                    if(i==j)A[-1]=x;
                    break;
            case 4:for(int i=1;i<=n;i++){
                        for(int j=1;j<=n;j++){
                            if(i==j){
                                printf(A[i]);
                            }
                            else{
                                printf("0");
                            }
                        }
                        printf("\n");

            }
        }
    }while (ch!=0);
    
    
        

}