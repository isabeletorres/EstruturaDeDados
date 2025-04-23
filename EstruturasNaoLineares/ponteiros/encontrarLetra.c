#include <stdio.h>

int sterlen(char *s, char a){
    int count=0;
    
    while (s[count] != '\0'){
        if(s[count] == a){
            return count;
        }
        count ++;
    }
    return -1;
}
int main() {
    char string[] = "palavra", a = 'a';
    
    int num = sterlen(string, a);
    
    if (num >0){
        printf("O caractere %c foi encontrado na posição: %d", a, num);
    } else {
        printf("O caractere %c não foi encontrado.", a);
    }

    return 0;
}