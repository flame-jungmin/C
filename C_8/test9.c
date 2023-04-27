//정수형으로서의 char형
#include <stdio.h>

int main(void){
    char code='A';
    printf("%d %d %d\n",code,code+1,code+2);
    printf("%c %c %c\n",code,code+1,code+2);
    return 0;
}