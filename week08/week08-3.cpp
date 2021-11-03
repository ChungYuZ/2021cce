#include <stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	for(int now=2;now<=m;now++){
		int bad=0;
		for(int i=2;i<now;i++){
			if(now%i==0) bad=1;
		}
		if(bad==00) printf("%d ",now);
	}

}
