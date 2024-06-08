#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//------------------------------
int isPrimes(int n){
	//Write your statements here
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
    	if (n % i == 0) return 0;
	}
	return 1;
	//End your statements 
}
//------------------------------
double average(int x){
	double avg;
	int i = 2; // duyet tu 2 -> vo cung
	int count = 0; // dem so luong so nguyen to
	double sum = 0;
	while (count < x) {
		if (isPrimes(i)) {
			sum += i;
			count++;
		}
		i++;
	}
	
	avg = sum / x;
	
	return avg;
}
/*
========================DO NOT EDIT GIVEN STATEMENTS IN THE MAIN FUNCTION.============================
===IF YOU CHANGE, THE GRADING SOFTWARE CAN NOT FIND THE OUTPUT RESULT TO SCORE, THUS THE MARK IS 0.===
*/
int main()
{ 
  system("cls");
  printf("\nTEST Q1 (2 marks):\n");
  int x;
  double r;
  printf("Enter x = "); scanf("%d",&x);   
  r = average(x);
  printf("\nOUTPUT:\n");
  printf("%.2lf",r);   
  printf("\n");
  system ("pause");
  return(0);  
}
//============================================================================== 
