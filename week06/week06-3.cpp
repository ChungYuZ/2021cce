#include <stdio.h>
int main()
{
	int a,b,c;
	int temp;
	scanf("%d%d%d",&a,&b,&c);
	printf("現在a:%d b:%d c:%d\n",a,b,c);

	if(a>c)
	{
		temp=a;
		a=c;
		c=temp;
	}
	printf("現在a:%d b:%d c:%d\n",a,b,c);
	if(b>c)
	{
		temp=b;
		b=c;
		c=temp;
	}
	printf("現在a:%d b:%d c:%d\n",a,b,c);

}




#include <stdio.h>
int main()
{
	int a,b,c;
	int temp;
	scanf("%d%d%d",&a,&b,&c);

	if(a>c){
		temp=a;
		a=c;
		c=temp;
	}

	if(b>c){
		temp=b;
		b=c;
		c=temp;
	}

	if(a+b<=c) printf("錯誤");
	else if(a*a+b*b==c*c) printf("直角");
	else if(a*a+b*b<c*c) printf("鈍角");
	else if(a*a+b*b>c*c) printf("銳角");

}
