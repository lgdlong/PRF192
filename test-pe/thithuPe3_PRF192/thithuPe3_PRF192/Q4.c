#include <stdio.h>
#include <ctype.h>
#include <string.h>
char* lTrim(char* s);
char* rTrim(char* s);
char* trim(char* s);

//----------------------------------------
char* convertToUpper(char* s){		
	  //Begin your statements here
	  int i;
	  for ( i = 0; s[i]!='\0'; i++) {
        if (s[i] == 'a') {
            s[i] = toupper(s[i]);
        }
    }
	  return s; 	 
	  //End your statements	
}
 //===============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION===========
int main() {
 
  char s[50],*s1;  
  system("cls");
  printf("\nTEST Q4 (3 marks):\n");
  printf("\nPlease enter a string:");
  scanf("%50[^\n]",s); 
  trim(s);
  s1 = convertToUpper(s);	    
  //=====DO NOT ADD NEW OR CHANGE STATEMENTS AFTER THIS LINE=====
  //==THE OUTPUT AFTER THIS LINE WILL BE USED TO MARK YOUR PROGRAM== 
  printf("\nOUTPUT:\n");
  printf("%s", s1); 
  printf("\n");
  system ("pause");
  return(0);
}
//=== Do not add new or change statements in this function.===
char* lTrim(char* s) {
	int i = 0;
	while (s[i] == ' ')	i++;
	if (i > 0) strcpy(&s[0], &s[i]);
	return s;
}
//=== Do not add new or change statements in this function.===
char* rTrim(char* s) {
	int i = strlen(s)-1;
	while (s[i] == ' ') i--;
	s[i+1] = '\0';
	return s;
}
//=== Do not add new or change statements in this function.===
char* trim(char* s) {
	rTrim(lTrim(s));
	char *ptr = strstr(s, "  ");
	while (ptr != NULL) {
		strcpy(ptr, ptr+1);
		ptr = strstr(s, "  ");
	}
	return s;
}
