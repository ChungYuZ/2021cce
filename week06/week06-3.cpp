#include <stdio.h>
int main()
{
	int a,b,c;
	int temp;
	scanf("%d%d%d",&a,&b,&c);
	printf("�{�ba:%d b:%d c:%d\n",a,b,c);

	if(a>c)
	{
		temp=a;
		a=c;
		c=temp;
	}
	printf("�{�ba:%d b:%d c:%d\n",a,b,c);
	if(b>c)
	{
		temp=b;
		b=c;
		c=temp;
	}
	printf("�{�ba:%d b:%d c:%d\n",a,b,c);

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

	if(a+b<=c) printf("���~");
	else if(a*a+b*b==c*c) printf("����");
	else if(a*a+b*b<c*c) printf("�w��");
	else if(a*a+b*b>c*c) printf("�U��");

}
