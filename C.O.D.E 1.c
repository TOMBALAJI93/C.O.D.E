#include<stdio.h>
int main()
{
    int r,y,g;
    printf("Enter the Following:");
    printf("\nRed Light Duriation:");
    scanf("%d",&r);
    printf("Yellow Light Duriation:");
    scanf("%d",&y);
    printf("Green Light Duriation:");
    scanf("%d",&g);
    printf("\nTraffic Light:Red\n");
        for(int i=r;i>=0;i--){
            printf("\nTime Remaining:%d seconds",i);
        }
printf("\n\nTraffic Light:Yellow\n");

        for(int j=y;j>=0;j--){
            printf("\nTime Remaining:%d seconds",j);
        }
printf("\n\nTraffic Light:Green\n");
        for(int k=g;k>=0;k--){
            printf("\nTime Remaining:%d seconds",k);
        }




    return 0;
}
