#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* lTrim(char* s);
char* rTrim(char* s);
char* trim(char* s);

int main() {
    system("cls");
    char str[] = "    hoa    anH     dAO    ";

    printf("%s\n", trim(str));

    return 0;
}

char* lTrim(char* s) {
	int i = 0;
	while (s[i] == ' ')	i++;
	if (i > 0) strcpy(&s[0], &s[i]);
	return s;
}

char* rTrim(char* s) {
	int i = strlen(s)-1;
	while (s[i] == ' ') i--;
	s[i+1] = '\0';
	return s;
}

char* trim(char* s) {
	rTrim(lTrim(s));
	char *ptr = strstr(s, "  ");
	while (ptr != NULL) {
		strcpy(ptr, ptr+1);
		ptr = strstr(s, "  ");
	}
	return s;
}