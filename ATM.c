#include<stdio.h>

void main(){
    int para,a=0,b=0,c=0,d=0,f=0;
    printf("Warning You Can pick only bankot(10,20,50,100,200)!\n");
    printf("Enter Your Money : ",para);
    scanf("%d",&para);

    if(para % 10 == 0 || para == 10 && para != 0){
        for(int j = 0;j<2; j++){
            if(para>=200 && para > 100){
                para = para - 200;
                a++;
                j = 0;
            }
            else if (para>=100 && para > 50)
            {
                para = para - 100;
                b++;
                j = 0;
            }
            else if (para >= 50 && para > 20)
            {
                para = para - 50;
                c++;
                j = 0;
            }
            else if (para >= 20 && para > 10)
            {
                para = para - 20;
                d++;
                j = 0;
            }
            else if(para >= 10 && para > 0){
                para = para - 10;
                f++;
            }
            }
        }
    printf("200 of number : %d\n",a);
    printf("100 of number : %d\n",b);
    printf("50 of number : %d\n",c);
    printf("20 of number : %d\n",d);
    printf("10 of number : %d",f);
}
