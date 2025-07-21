#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], n;
    float temp;
    char ch;
    int choice, searchElement;
    int found = 0;

    // Input array size
    printf("Enter size of the array (1 to %d): ", MAX_SIZE);
    if (scanf("%f%c", &temp, &ch) != 2 || ch != '\n' || (int)temp != temp || temp <= 0 || temp > MAX_SIZE) {
        printf("Invalid array size. Please enter a valid positive integer.\n");
        return 1;
    }
    n = (int)temp;

    // Input array elements
    printf("Enter %d integer elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%f%c", &temp, &ch) != 2 || ch != '\n') {
            printf("Invalid input. Enter only integers.\n");
            return 1;
        }
        if ((int)temp != temp) {
            printf("Float detected. Please enter integers only.\n");
            return 1;
        }
        arr[i] = (int)temp;
    }

    // Ask sorting choice
    printf("\nChoose sorting method:\n");
    printf("1. Bubble Sort\n2. Selection Sort\nEnter choice (1 or 2): ");
    if (scanf("%d", &choice) != 1 || (choice != 1 && choice != 2)) {
        printf("Invalid sorting choice.\n");
        return 1;
    }

    // Sorting
    if (choice == 1) {
        // Bubble Sort
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int tempInt = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tempInt;
                }
            }
        }
        printf("\nArray sorted using Bubble Sort.\n");
    } else {
        // Selection Sort
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex])
                    minIndex = j;
            }
            if (minIndex != i) {
                int tempInt = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = tempInt;
            }
        }
        printf("\nArray sorted using Selection Sort.\n");
    }

    // Print sorted array
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Input element to search
    printf("Enter the element to search: ");
    if (scanf("%f%c", &temp, &ch) != 2 || ch != '\n' || (int)temp != temp) {
        printf("Invalid search input. Enter an integer only.\n");
        return 1;
    }
    searchElement = (int)temp;

    // Binary Search
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == searchElement) {
            found = 1;
            break;
        } else if (arr[mid] < searchElement) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found)
        printf("Element %d found at index %d (0-based).\n", searchElement, mid);
    else
        printf(" Element %d not found in the array.\n", searchElement);

    return 0;
}
