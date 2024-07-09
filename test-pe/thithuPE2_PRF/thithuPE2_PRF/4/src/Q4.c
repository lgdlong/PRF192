#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	system("cls");
  	printf("\nTEST Q4 (3 marks):\n");
    char s1[100], s2[100];

    printf("Enter the first string (s1): ");
    gets(s1);

    printf("Enter the second string (s2): ");
    gets(s2);
    int count = 0;
	//Begin your statements here
	int length = strlen(s2);

// Má không có hiểu
    // for (int i = 0; i < strlen(s1); i++) {
    //     if (s1[i] == s2[0]) {
    //         int j = 0;
    //         for (; j < length; j++) {
    //             if (s1[i + j] != s2[j]) {
    //                 break;
    //             }
    //         }
    //         if (j == length) {
    //             count++;
    //         }
    //     }
    // }
    
   
	//End your statements
	printf("OUTPUT:\n");
    printf("%d\n", count);
	system("pause");
    return 0;
}

/*
The given file Q4.c already contains statements to input 2 strings s1 and s2. You should write statements to print out the count of how many times s2 appears in s1.
*/
