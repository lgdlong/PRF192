#include <stdio.h>
#include <stdlib.h>
//---------------------------------
long sum(int n, int x){	
	long sum = 0;
	//Write your statements here
    //.......
	//End your statements 
     return sum;
}
/*
========================DO NOT EDIT GIVEN STATEMENTS IN THE MAIN FUNCTION.============================
===IF YOU CHANGE, THE GRADING SOFTWARE CAN NOT FIND THE OUTPUT RESULT TO SCORE, THUS THE MARK IS 0.===
*/
int main()
{ 
  system("cls");
  printf("\nTEST Q2 (3 marks):\n");
  int n,x;
  long r;
  printf("Enter n = "); scanf("%d",&n);   
  printf("Enter x = "); scanf("%d",&x);   
  r = sum(n,x);
  printf("\nOUTPUT:\n");
  printf("%ld",r);
  printf("\n");
  system ("pause");
  return(0);  
}
//============================================================================
