#include <stdio.h>
int f(int N)
{//step04 寫出一函式
	int sum=0;//step02加起來
	while(N>0){//step02迴圈，剝光
		sum+=N%10;//step01 N%10餘數step03加
		N=N/10;//step01 N/10除法step02變小

	}
	return sum;
}
int main()
{
	int N;
	while(scanf("%d",&N)==1){//step06讀資料
		if(N==0)break;//step06 while配break
		int ans=f(f(f(N)));//step05多叫幾次\
		printf("%d\n",ans);
	}
}
