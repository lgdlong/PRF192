#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//-----------------------------------------------

int checkPrime(int n){
	//Begin your statements here
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
    	if (n % i == 0) return 0;
	}
	return 1;
   	//End your statements
}
int countPrime(int a[][100],int row,int col)
{
	//Begin your statements here
	int count = 0;
 	for (int i = 0; i < col; i++) {
 		for (int j = 0; j < row; j++) {
 			if (checkPrime(a[i][j])) count++;
		 }
	 }
 	return count;
   	//End your statements
}

//DO NOT ADD NEW OR CHANGE STATEMENTS IN THIS FUNCTION
void input(int a[][100],int row,int col){
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

//==========DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main(){
  	system("cls");
  	printf("\nTEST Q3 (2 marks):\n");
  	int a[100][100],row,col, count=0;
  	printf("Enter row: ");scanf("%d",&row);
  	printf("Enter column: ");scanf("%d",&col);
  	input(a,row,col);
  	
  	printf("OUTPUT:\n");
  	count=countPrime(a,row,col);
  	printf("%d",count);
  	system("pause");
  	return 0;
  	//============================================================
}

