#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d %d",&x,&y);
        for (int i = 0; i < x; i++)
        {
            y =y +i;
            if(y>=x){
                printf("%d\n",i);
                break;
            }
        }
        
    }
    return 0;
}