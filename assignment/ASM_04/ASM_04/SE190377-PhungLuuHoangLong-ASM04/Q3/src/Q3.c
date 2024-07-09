#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//The function used to check whether n is prime or not
int isPrime(int n) {
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}
double average(int *a, int n,int x){
	int count = 0,sum = 0;
	double avg;	
	//Write your statements here  
    for (int i = 0; i < n; i++) {
    	if (isPrime(a[i]) && a[i] > x) {
    		sum += a[i];
    		count++;
		}
	}
	avg = 1.0*sum / count;
	//End your statements 	
	return avg;
}
//----------------------------------------------------
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
  int n,x;
  double result; 
  printf("Enter n = "); scanf("%d",&n);   
  input(a,n);
  printf("Enter x = "); scanf("%d",&x);   
  result = average(a,n,x);
  printf("\nOUTPUT:\n");
  printf("%.2lf",result); 
  printf("\n");
  system ("pause");
  return(0);  
}
//===========================================================================
