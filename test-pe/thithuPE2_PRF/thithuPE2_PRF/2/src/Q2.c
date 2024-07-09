#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int smallPositive(int m){	
	//Write your statements here
    int res = 0;
    int count = 1;
    while (1) {
    	res+= (++count);
    	if (res > m) return count;
	}
	//End your statements   
}
/*
========================DO NOT EDIT GIVEN STATEMENTS IN THE MAIN FUNCTION.============================
===IF YOU CHANGE, THE GRADING SOFTWARE CAN NOT FIND THE OUTPUT RESULT TO SCORE, THUS THE MARK IS 0.===
*/
int main()
{ 
	system("cls");
	printf("\nTEST Q2 (3 marks):\n");
	int m;
	int r;
	printf("Enter m = "); scanf("%d",&m);   
	r = smallPositive(m);
	
	printf("\nOUTPUT:\n");
	printf("%d",r);
	printf("\n");
	system ("pause");
	  return(0);
}
//======================================================================
