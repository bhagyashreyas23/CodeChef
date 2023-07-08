#include<stdio.h>

int main(){
    int t,s=0,r=0;
    scanf("%d",&t);
    while(t--){
        int a[7];
        for (int i = 0; i < 7; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i = 0; i < 7; i++)
        {
            if(a[i]==1){
                s+=1;
            }
            else{
                r+=1;
            }
        }
        if(s>r){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

        
        

    }
    return 0;

}