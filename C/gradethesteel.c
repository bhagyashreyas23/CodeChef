#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        float h,c,s;
        scanf("%f %f %f",&h,&c,&s);
        if(h>50 && c<0.7 && s>5600){
            printf("10\n");
        }
        else if(h>50 && c<0.7){
            printf("9\n");
        }
        else if(c<0.7 && s>5600){
            printf("8\n");
        }
        else if(h>50 && s>5600){
            printf("7\n");
        }
        else if(h>50 || c<0.7 || s>5600){
            printf("6\n");
        }
        else{
            printf("5\n");
        }


    }
    return 0;
}
