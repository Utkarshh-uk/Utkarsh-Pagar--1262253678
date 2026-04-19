#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, length;
    int isPalindrome = 1;

    // Input
    printf("Enter a string: ");
    scanf("%s", str1);

    printf("Enter another string for equality check: ");
    scanf("%s", str2);

    // 1. Length of string
    length = strlen(str1);
    printf("Length of string = %d\n", length);

    // 2. Reverse string
    printf("Reversed string = ");
    for(i = length - 1; i >= 0; i--) {
        printf("%c", str1[i]);
    }
    printf("\n");

    // 3. Palindrome check
    for(i = 0; i < length / 2; i++) {
        if(str1[i] != str1[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("The string is a Palindrome\n");
    else
        printf("The string is not a Palindrome\n");

    // 4. Equality check
    if(strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // 5. Substring check
    if(strstr(str1, str2) != NULL)
        printf("Substring found in main string\n");
    else
        printf("Substring not found\n");

    return 0;
}