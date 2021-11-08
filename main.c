#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N ,M ,X,found=0;
    printf("Enter the number of rows : ");
    scanf("%d",&N);
    printf("Enter the number of columns : ");
    scanf("%d",&M);
    int array[N][M];
    for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
		    array[i][j]=rand()%10;// rand()%10 use to put random number from 0 to 9
		    printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Enter the number 'x' that you want to search for : ");
	scanf("%d",&X);
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++){
		   if (X==array[i][j]){
            printf("Found the number %d in the array\n",X);
           found++;
           break;// using break to prevent to print "Found the number %d in the array" many times if the number(X) found many times

		   }

		}
	}

	if(found==0)    /*using boolean found if X found boolean found  will be 1
                        and this condition not occur */

    printf("Didn't Found the number %d in the array \n",X);


    return 0;
}
