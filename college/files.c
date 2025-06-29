#include <stdio.h>
#include <string.h>

#define SIZE 1000

int main() {
    FILE *fptr, *temp;
    char str[SIZE], find[50], replace[50];
    int count = 0;

    fptr = fopen("input.txt", "r");
    temp = fopen("temp.txt", "w");

    if (fptr == NULL || temp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter word to find: ");
    scanf("%s", find);
    printf("Enter word to replace: ");
    scanf("%s", replace);

    while (fgets(str, SIZE, fptr)) {
        char *pos = str;
        while ((pos = strstr(pos, find)) != NULL) {
            count++;
            int len = strlen(find);
            char buffer[SIZE];
            int idx = pos - str;

            strcpy(buffer, pos + len);
            str[idx] = '\0';
            strcat(str, replace);
            strcat(str, buffer);
            pos = str + idx + strlen(replace);
        }
        fputs(str, temp);
    }

    fclose(fptr);
    fclose(temp);

    remove("input.txt");
    rename("temp.txt", "input.txt");

    printf("Replaced %d occurrence(s) of \"%s\" with \"%s\".\n", count, find, replace);

    return 0;
}
