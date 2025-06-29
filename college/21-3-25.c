#include <stdio.h>
int main(){
    int arr[5];
    for (int i=0; i<5; i++){
        scanf("%d\n" , &arr[i]);
    }
    for (int i=0; i<5; i++){
        printf("%d/n", arr[i]);
    }
    return 0;
}


#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the %d elements\n:", n);
    for (int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("the elements you entered:");
    for(int i=0; i<n; i++){
        printf("%d", arr[i]);
    }
    return 0;
}


#include <stdio.h>
int main() {
    int n, i, arr[100], min, max;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    min = max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("Smallest: %d\nLargest: %d\n", min, max);
    return 0;
}

#include <stdio.h>
int main() {
    int a[50], b[50], c[100], n1, n2, i, j, k = 0;
    
    scanf("%d %d", &n1, &n2);
    for (i = 0; i < n1; i++) scanf("%d", &a[i]);
    for (i = 0; i < n2; i++) scanf("%d", &b[i]);

    for (i = 0; i < n1; i++) c[k++] = a[i];
    for (i = 0; i < n2; i++) {
        for (j = 0; j < k; j++) if (b[i] == c[j]) break;
        if (j == k) c[k++] = b[i];
    }

    for (i = 0; i < k; i++) printf("%d ", c[i]);
}
