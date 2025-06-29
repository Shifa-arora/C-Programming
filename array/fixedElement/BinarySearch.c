#include <stdio.h>
int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; // Element found
        } else if (arr[mid] < target) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}


// without function

#include <stdio.h>

int main(){
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    
    int low = 0, high = n - 1, mid, ans = -1;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == x){
            ans = mid;
            break;
        }
        else if(arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf("%d\n", ans);
    return 0;
}


//using bubble sort with this

#include <stdio.h>

// A simple bubble sort for demonstration
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int n, int x) {
    int low = 0, high = n - 1, mid, ans = -1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == x) {
            ans = mid;
            break;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    
    // Sort the array first
    bubbleSort(arr, n);
    
    // Perform binary search on the sorted array
    int ans = binarySearch(arr, n, x);
    printf("%d\n", ans);
    return 0;
}
