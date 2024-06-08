#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void countConsonant(char c1,char c2,int *count){
	//Begin your statements here	
	//The result after processing will be stored in the *count variable

  *count = 0;

  c1 = tolower(c1);
  c2 = tolower(c2);

  if (c1 > c2) {
    char temp = c1;
    c1 = c2;
    c2 = temp;
  }

  for (char i = c1; i <= c2; i++) {
    if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') {
      continue;
    } else {
      (*count)++;
    }
  }
	//End your statements here	
}
/*
========================DO NOT EDIT GIVEN STATEMENTS IN THE MAIN FUNCTION.============================
===IF YOU CHANGE, THE GRADING SOFTWARE CAN NOT FIND THE OUTPUT RESULT TO SCORE, THUS THE MARK IS 0.===
*/
int main()
{ 
  system("cls");
  printf("\nTEST Q3 (2 marks):\n");
  int count; 
  char c1, c2;
  printf("Enter c1 = "); scanf("%c%*c",&c1);   
  printf("Enter c2 = "); scanf("%c",&c2);   
  countConsonant(c1,c2,&count);
  printf("\nOUTPUT:\n"); 
  printf("%d",count);
  printf("\n");
  system ("pause");
  return(0);  
}
//===========================================================================
