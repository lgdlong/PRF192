#include <stdio.h>
#include <stdlib.h>

//-----------------------------------------------

void resetZero(int a[],int *pn){
	//Begin your statements here
   	for (int i = 0; i < *pn; i++) {
   		if (a[i] < 0) a[i] = 0;
	}
   	//End your statements
}
//DO NOT ADD NEW OR CHANGE STATEMENTS IN THIS FUNCTION
void input(int *a,int* pn){
	printf("n=");
	scanf("%d",pn);
	int i;
	printf("Array:\n");
	for(i=0;i<*pn;i++)
		scanf("%d",&a[i]);
}
void output(int a[],int* pn){
	int i;
	for(i=0;i<*pn;i++)
		printf("%d\t",a[i]);
}
//==========DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main(){
  	system("cls");
  	printf("\nTEST Q3 (2 marks):\n");
  	int a[100],n, count,x;
  	input(a,&n);
  	
  	printf("OUTPUT:\n");
  	resetZero(a,&n);
  	output(a,&n);
  	system("pause");
  	return 0;
  	//============================================================
}

