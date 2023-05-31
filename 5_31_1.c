#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int  main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int n = sizeof arr / sizeof arr[1];
	for (i = 0 ; i < n; i++)
	{
		int j = 0;
		for (j=0;j < n - i - 1 ;j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp = 0;
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
				
		     }
		}
	}
	int k = 0;
	for (k=0;k<10;k++)
	{
		printf("%d ", arr[k]);
	}
	


	return 0;
}