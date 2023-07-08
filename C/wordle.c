#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n--){
        char a[5],b[5],c[5];
        scanf("%s",&a);
        scanf("%s",&b);
        for (int i = 0; i < 5; i++)
        {
            if(a[i]==b[i]){
                printf("G");
            }
            else{
                printf("B");
            }
        }
        printf("\n");
    }
    return 0;
}


    