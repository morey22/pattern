#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a = 1;
    int d = a+64;
    char ch = (char)d;
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            printf("%d", ch);
        }
        printf("\n");
        a++;
    }
    return 0;
}