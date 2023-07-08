#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char m[n];
        scanf("%s",&m);
        int a=m[1,n/2];
        int b = m[n/2+1,n];
        if(a==b && b==a){
            printf("NO");
        }
        else{
            printf("YES");
        }
    }
    return 0;
}