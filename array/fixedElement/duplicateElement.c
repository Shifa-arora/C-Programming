#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3,4, 5, 2 , 1};
    int count = 0;
    for(int i=0; i<7; i++){
        for (int j=i+1; j<7; j++){
            if(arr[i] == arr[j]){
                 count++;
                printf("%d is duplicate elemnt and repeat %d times\n", arr[i], count);
            }
        }
    }
    return 0;
}