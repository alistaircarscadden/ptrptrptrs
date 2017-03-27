#include <stdio.h>
#include <stdlib.h>

int main(int n, char** args) {
    FILE* file = fopen("out.c", "w+");
    
    int num = atoi(args[1]);
    int i;
    
    fprintf(file, "#include <stdio.h>\nint main(void) {\n");
    
    fprintf(file, "    long a = 5;\n");
    for(i = 0; i < num; i++) {
        fprintf(file, "    long");
        
        int j;
        for(j = 0; j <= i; j++) {
            fprintf(file, "*");
        }
        
        fprintf(file, " a");
        for(j = 0; j <= i; j++) {
            fprintf(file, "_ptr");
        }
        
        fprintf(file, " = &a");
        for(j = 0; j <= i - 1; j++) {
            fprintf(file, "_ptr");
        }
        
        fprintf(file, ";\n");
    }
    
    fprintf(file, "\n    printf(\"a: %%ld\\n\", ");
    for(i = 0; i < num; i++) {
        fprintf(file, "*");
    }
    fprintf(file, "a");
    for(i = 0; i < num; i++) {
        fprintf(file, "_ptr");
    }
    fprintf(file, ");\n}\n");
    
    return 0;
}
