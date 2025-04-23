
#include <stdio.h>

int sterlen(char *s){
    int count=0;
    
    while (s[count] != '\0'){
        count ++;
    }
    
    return count;
}
int main() {
    char string[] = "palavra";
    
    int num = sterlen(string);
    printf("A palavra %s tem  %d caracteres.", string, num);

    return 0;
}