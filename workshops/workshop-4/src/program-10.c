#include <stdio.h>
#include <stdlib.h>

void displayOptions() {
    printf("\n--------------MENU----------------\n");
    printf("1- Add a value\n");
    printf("2- Search a value\n");
    printf("3- Print out the array\n");
    printf("4- Print out values in a range\n");
    printf("5- Print out the array in ascending order\n");
    printf("0- Exit\n");
}

void inputOptions(int *option) {
    printf("Enter option: ");
    scanf("%d", option);
}

void addValue(int **arr, int *size, int *capacity) {
    int value;
    printf("Enter value: ");
    scanf("%d", &value);

    if (*size >= *capacity) {
        *capacity *= 2;
        *arr = realloc(*arr, *capacity * sizeof(int));
        if (*arr == NULL) {
            printf("Memory allocation failed\n");
            exit(1);
        }
    }

    (*arr)[*size] = value;
    (*size)++;
}

void findNum(int *arr, int size) {
    int value, count = 0;
    printf("Enter value need to find: ");
    scanf("%d", &value);

    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            count++;
        }
    }
    printf("Number of %d: %d\n", value, count);
}

void displayArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void displayRange(int *arr, int size) {
    int start, end;
    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter end: ");
    scanf("%d", &end);
    printf("Values in range: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] >= start && arr[i] <= end) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void displayAscending(int *arr, int size) {
    // Tạo một bản sao của mảng để không thay đổi mảng gốc
    int *temp = malloc(size * sizeof(int));
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    for (int i = 0; i < size; i++) {
        temp[i] = arr[i];
    }

    // Sắp xếp mảng sao chép theo thứ tự tăng dần
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (temp[i] > temp[j]) {
                int t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }

    // Hiển thị mảng đã sắp xếp
    displayArray(temp, size);

    // Giải phóng bộ nhớ đã cấp phát cho mảng sao chép
    free(temp);
}

void menu(int **arr, int *size, int *capacity) {
    int option;
    do {
        displayOptions();
        inputOptions(&option);
        switch(option) {
            case 1:
                addValue(arr, size, capacity);
                break;
            case 2:
                findNum(*arr, *size);
                break;
            case 3:
                displayArray(*arr, *size);
                break;
            case 4:
                displayRange(*arr, *size);
                break;
            case 5:
                break;
            case 0:
                break;
            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    } while (option != 0);
}

int main() {
    system("cls");
    int size = 0; // kích thước của mảng hiện tại
    int capacity = 2; // dung lượng ban đầu của mảng
    int *arr = malloc(capacity * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    menu(&arr, &size, &capacity);

    free(arr);
    return 0;
}
