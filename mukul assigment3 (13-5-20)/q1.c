#include<stdio.h>
int main()
{
    int m=20,a[m][m],i,j=0,r,max[10000],k,maximum;
    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d",&r,&k);
    printf("Enter the elements of the matrix\n");
    for(i=0;i<r;i++)
    for(j=0;j<k;j++)
	scanf("%d",&a[i][j]); 
    maximum = a[0][0];
    for(i=0;i<r;i++) {
        for (j = 0; j < k; j++)
        if (a[i][j] > maximum)
        maximum = a[i][j];
    }
    printf("Maximum element in the matrix is %d\n", maximum);
    for(i=0;i<r;i++){
     max[i]=a[i][j];
     for(j=0;j<k;j++)
     if(a[i][j]>max[i])
     max[i]=a[i][j];
    }
    for(i=0;i<r;i++)
        printf("\nMaximum element from %d row is:%d",i,max[i]);
    return 0;
}
    
