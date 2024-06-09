#include <stdio.h>
#include <string.h>
int main() {
	char name[50];
	char birth[50];
	char address[50];
	
	printf("Nhap ten: ");
	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = '\0';
	
	printf("Nhap ngay sinh: ");
	fgets(birth, sizeof(birth), stdin);
	birth[strcspn(birth, "\n")] = '\0';
	
	printf("Nhap dia chi: ");
	fgets(address, sizeof(address), stdin);
	address[strcspn(address, "\n")] = '\0';
	
	printf("Ten: %s\n", name);
	printf("Ngay sinh: %s\n", birth);
	printf("Dia chi: %s\n", address);
	
	system("pause");
	
	return 0;
}
