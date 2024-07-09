#include <stdio.h>
#include <stdlib.h>
//The function used to find the smallest element in the array
int findMinElement(int *a,int n) {
	int min = a[0];
	for (int i = 1; i < n; i++) {
		if (min < a[i]) min = a[i];
	}
	return min;
}
//The function used to find the largest element in the array
int findMaxElement(int *a,int n) {
	int max = a[0];
	for (int i = 1; i < n; i++) {
		if (max > a[i]) max = a[i];
	}
	return max;
}
//----------------------------------------------------------
int sum(int *a, int n){
    int sum = 0;
    int MIN = findMinElement(a, n);
    int MAX = findMaxElement(a, n);
	//Write your statements here      
    for (int i = 0; i < n; i++) {
    	if (a[i] == MIN || a[i] == MAX) {
    		sum += a[i];
		}
	}
	//End your statements 	
	return sum;
}
//-----------------------------------------------------
//DO NOT ADD NEW OR CHANGE STATEMENTS IN THIS FUNCTION
void input(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}		
}
/*
========================DO NOT EDIT GIVEN STATEMENTS IN THE MAIN FUNCTION.============================
===IF YOU CHANGE, THE GRADING SOFTWARE CAN NOT FIND THE OUTPUT RESULT TO SCORE, THUS THE MARK IS 0.===
*/
int main()
{ 
  system("cls");
  printf("\nTEST Q3 (2 marks):\n");
  int a[50];
  int n,result; 
  printf("Enter n = "); scanf("%d",&n);   
  input(a,n); 
  result = sum(a,n);
  printf("\nOUTPUT:\n");
  printf("%d",result); 
  printf("\n");
  system ("pause");
  return(0);  
}
//===========================================================================
