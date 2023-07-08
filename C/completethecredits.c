#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int credits;
        scanf("%d",&credits);
        if(credits>65){
            printf("Overload\n");
        }
        else if(credits<35){
            printf("Underload\n");
        }
        else{
            printf("Normal\n");
        }
    }
    return 0;
}
