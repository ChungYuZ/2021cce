#include <stdio.h>
int main()
{
    ///��²��o��¦�� �q��
    for(int i=0;i<4;i++){
        printf("i:%d\n",i);
    }///�]4��:0 1 2 3

    ///��²���¦�� �H���ƼƦr
    for(int i=1;i<=4;i++){
        printf("�H�����ƪki:%d\n",i);
    }///�]4��:1 2 3 4
    ///�_�Ǫ��g�k�i�q��¦���t��
    for(int i=0;i<=4;i++){
        printf("�ǩǪ�\n",i);
    }///�]5��:0 1 2 3 4
}
