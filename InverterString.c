#include <stdio.h>
#include <string.h>




int main() {
    
    char string[50];
    char invertida[50];
    
    scanf("%[^\n]", string);
    
    int j = 0;
    
    for(int i = strlen(string)-1; i >= 0; i--) {
        invertida[j] = string[i];
        j += 1;
    }

    invertida[j] = '\0';

    printf("%s", invertida); 
    return 0;
}