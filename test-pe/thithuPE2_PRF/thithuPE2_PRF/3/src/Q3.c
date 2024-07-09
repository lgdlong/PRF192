#include <stdio.h>
#include <stdlib.h>

//-----------------------------------------------

int countEvenGreaterX(int a[],int n,int x){
	//Begin your statements here
	int count = 0;
    for (int i = 0; i < n; i++) {
    	if (a[i] > x && a[i] % 2 == 0) count++;
	}
    return count;
	//End your statements
}
//DO NOT ADD NEW OR CHANGE STATEMENTS IN THIS FUNCTION
void input(int a[],int* pn,int *px){
	printf("n=");
	scanf("%d",pn);
	int i;
	printf("Array:");
	for(i=0;i<*pn;i++)
		scanf("%d",&a[i]);
	printf("x=");	
	scanf("%d",px);
}
//==========DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main(int argc, char* argvs[]){
  	system("cls");
  	printf("\nTEST Q3 (2 marks):\n");
  	int a[100],n, count,x;
  	input(a,&n,&x);
  	count = countEvenGreaterX(a,n,x);
  	printf("OUTPUT:\n");
  	printf("%d\n",count);
  	system("pause");
  	return 0;
  	//============================================================
}

