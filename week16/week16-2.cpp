#include <stdio.h>
char line[100];

int main()
{
    printf("Please inpute a line: ");
    scanf("%s",line);///只讀到空格
    printf("%s\n",line);
}
