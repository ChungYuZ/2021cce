#include <stdio.h>
void printstar(int n)
{
    for(int i=0;i<n;i++) printf("*");

}

void printspace(int n)

{
    for(int i=0;i<n;i++) printf(" ");
}

int main()
{
    for(int i=0;i<10;i++){
        printspace(9-i);
        printstar(i);
        printf("\n");
    }

}

