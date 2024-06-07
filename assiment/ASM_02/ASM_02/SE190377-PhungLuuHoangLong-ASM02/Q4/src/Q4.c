#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b){
	//Begin your statements here
	while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
	//End your statements
}
//--------------------------------------------------------
int lcm(int a,int b){
	//Begin your statements here
	return (a * b / gcd(a, b));
	//End your statements
}
/*
========================DO NOT EDIT GIVEN STATEMENTS IN THE MAIN FUNCTION.============================
===IF YOU CHANGE, THE GRADING SOFTWARE CAN NOT FIND THE OUTPUT RESULT TO SCORE, THUS THE MARK IS 0.===
*/
int main()
{ 
  system("cls");
  printf("\nTEST Q4 (3 marks):\n");
  int n,m, l, g; 
  printf("Enter n = "); scanf("%d",&n);   
  printf("Enter m = "); scanf("%d",&m);   
  g = gcd(n,m);
  l = lcm(n,m);
  printf("\nOUTPUT:\n"); 
  printf("%d;%d",g,l);
  printf("\n");
  system ("pause");
  return(0);  
}
//============================================================ 

