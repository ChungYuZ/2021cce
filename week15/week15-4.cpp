///week15-4.cpp 黑盒子(函式呼叫函式)
#include <stdio.h>
int box(int a,int b)
{       ///老大 老二
    if(a==0) return b;
    if(b==0) return a;
    return box(b,a%b);
}///再問新老大新老二
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int ans=box(a,b);
    printf("%d",ans);
}

