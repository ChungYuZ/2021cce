///week15-4.cpp �²��l(�禡�I�s�禡)
#include <stdio.h>
int box(int a,int b)
{       ///�Ѥj �ѤG
    if(a==0) return b;
    if(b==0) return a;
    return box(b,a%b);
}///�A�ݷs�Ѥj�s�ѤG
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int ans=box(a,b);
    printf("%d",ans);
}

