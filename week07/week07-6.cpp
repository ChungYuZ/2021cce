#include <stdio.h>
int main()
{
    ///最簡單得基礎型 電腦
    for(int i=0;i<4;i++){
        printf("i:%d\n",i);
    }///跑4次:0 1 2 3

    ///最簡單基礎型 人類數數字
    for(int i=1;i<=4;i++){
        printf("人類的數法i:%d\n",i);
    }///跑4次:1 2 3 4
    ///奇怪的寫法可從基礎型演變
    for(int i=0;i<=4;i++){
        printf("怪怪的\n",i);
    }///跑5次:0 1 2 3 4
}
