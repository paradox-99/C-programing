#include<stdio.h>

struct cmp
{
	int r[2],i[2];
	int sum[2];
};

void main()
{
	struct cmp comp;
	int i;
	for(i=0; i<2; i++)
	{	
		printf("Enter the %d th real and imagine number: ",i+1);
    	scanf("%d%d", &comp.r[i], &comp.i[i]);
	}
	comp.sum[0] = (comp.r[0]*comp.r[1])+(comp.i[0]*comp.i[1]);
	comp.sum[1] = (comp.r[0]*comp.i[1])+(comp.i[0]*comp.r[1]);
	if (comp.sum[1] > 0)
		printf("\n%d+%di",comp.sum[0],comp.sum[1]);
	else
		printf("\n%d%di",comp.sum[0],comp.sum[1]);
}