#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int checkTriangle(float side1, float side2, float side3)
{
	if(side1+side2>side3 && side2+side3>side1 && side3+side1>side2)
		return 1;
	return 0;
}

int  isoscelesTriangle(float a, float b, float c)
 {
 	//Write your statements here
   	if (a == b || b == c || c == a) return 1;
   	else return 0;
    //End your statements 
    
}

int main() {
 //=============DO NOT ADD NEW OR CHANGE THIS STATEMENTS========
 	system("cls");
 	printf("\nTEST Q1 (2 marks):\n");
    float side1, side2, side3;
    printf("Side 1= ");
	scanf("%f", &side1);
	
	printf("Side 2= ");
	scanf("%f", &side2);
	
	printf("Side 3= ");
	scanf("%f", &side3);
	
	printf("\nOUTPUT:\n");
	if(checkTriangle(side1,side2,side3)==0)
		printf("Not triangle\n");
	else if(isoscelesTriangle(side1,side2,side3))
		printf("YES\n");
	else
		printf("NO\n");	
		
    system ("pause");
  	return(0);
  //============================================================ 
}






