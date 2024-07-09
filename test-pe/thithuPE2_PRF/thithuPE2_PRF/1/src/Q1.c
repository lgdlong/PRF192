#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int checkSign(float a, float b)
 {
 	int result;
 	//Write your statements here
   
   	if ((a < 0 && b < 0) || (a > 0 && b > 0) || (a == 0 && b == 0)) result = 1;
   	else result = 0;
   
   
    //End your statements 
    return result;
}

int main() {
 //=============DO NOT ADD NEW OR CHANGE THIS STATEMENTS========
 	system("cls");
 	printf("\nTEST Q1 (2 marks):\n");
    float a, b;
    printf("a= ");
    scanf("%f", &a);

    printf("b= ");
    scanf("%f", &b);
  
	int r=checkSign(a, b);
	printf("\nOUTPUT:\n");
    if(r==1)
    	printf("The two numbers have the same sign");
    else
    	printf("The two numbers do not have the same sign");
    printf("\n");
    system ("pause");
  	return(0);
  //============================================================ 
}






