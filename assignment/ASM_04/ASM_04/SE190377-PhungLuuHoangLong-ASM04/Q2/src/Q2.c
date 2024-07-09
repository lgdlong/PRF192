#include <stdio.h>
#include <stdlib.h>
//The function used to find smallest element in the array
int findMinElement(int *a,int n) {
	int min = a[0];
	
	for (int i = 1; i < n; i++) {
		if (a[i] < min)
			min = a[i];
	}
	return min;
}
int count(int *a, int n){
	int count = 0;
	//Write your statements here
	int MIN = findMinElement(a, n);
	
    for (int i = 0; i < n; i++) {
    	if (a[i] == MIN) count++;
	}
	//End your statements 	
	return count;
}
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
  printf("\nTEST Q2 (3 marks):\n");
  int a[50];
  int n,result; 
  printf("Enter n = "); scanf("%d",&n);   
  input(a,n);
  result = count(a,n);
  printf("\nOUTPUT:\n");
  printf("%d",result); 
  printf("\n");
  system ("pause");
  return(0);  
}
//===========================================================================
