#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    /* 最初的内存分配 */
    char* str;
    str = (char*)malloc(15);
    strcpy(str, "hakuna matata!"); // this line should copy "hakuna matata!"
                             // into our char array
    printf("String = %s, Address = %u\n", str, str);
    
    /* 重新分配内存 */
    str = (char*)realloc(str,20);
    strcat(str, ".com");
    printf("String = %s, Address = %u\n", str, str);
    
    // Anything else?
    free(str);
    
    return 0;
}
