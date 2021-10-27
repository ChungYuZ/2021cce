///week07 step03-1
///了解for迴圈
#include <stdio.h>
int main()
{
    int i;///1973年c發明者寫法，1989年ANSI c規範
    for(i=0;i<=3;i++){
        printf("課本寫法次數\n");
    }///課本寫法不好!!!
    ///1998-1999 新版c++/c寫法
    for(int i=0;i<3;i++){
        printf("老師教法次數\n");
    }///跑3次
}
