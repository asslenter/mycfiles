#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    int i,j;
    scanf("%[^\n]s",a);
    for(i=0;i<strlen(a);i++){
        for(j=0;j<=i;j++){
            printf("%c",a[j]);
        }
        printf("\n");
    }
    return 0;
}