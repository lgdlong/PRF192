#include <stdio.h>
#include <stdlib.h>
void average(int *a, int n){
	double avg;
	int i,count = 0;
	int sum = 0;
	//Write your statements here
	for (i = 0; i < n; i+=2) {
		if (a[i] % 2 != 0) {
			sum += a[i];
			count++;
		}
	}
	avg = 1.0*sum / count;
	printf("%.2lf", avg);
    //The output result is formatted in two decimal places
	//End your statements 
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
  printf("\nTEST Q1 (2 marks):\n");
  int a[50];
  int n;
  double r;
  printf("Enter n = "); scanf("%d",&n);   
  input(a,n);
  printf("\nOUTPUT:\n");
  average(a,n);
  printf("\n");
  system ("pause");
  return(0);  
}
//===========================================================================
