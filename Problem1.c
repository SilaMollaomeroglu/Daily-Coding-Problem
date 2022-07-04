#include <stdio.h>

int main()
{
	int n,a,i,j,k;
	scanf("%d",&n);
	int list[n];
 	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		list[i] = a;
	}
	scanf("%d",&k);

	for(i=0;i<n;i++)
	{
	for(j=1;j<n;j++){
 	
		if(list[i] + list[j] == k)  
		{
			return 1;
//			printf("%d ",list[i]);
//			printf("%d",list[j]);
		}
	}
}
	return 0;
}

