#include <stdio.h>
int main(){
    int n,a=5;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d", a);
            
        }
        a=a-1;
        printf("\n");
    }
    return 0;
}