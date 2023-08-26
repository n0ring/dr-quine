#include <stdio.h>
#include <stdlib.h>

int main() {
    char sourceName[20];
    char execName[20];
    char compileCall[256];
    char execCall[256];
    int i = 5;
    if (i < 1) return 0;
    sprintf(sourceName, "Sully_%d.c", i);
    sprintf(execName, "Sully_%d", i);
    sprintf(compileCall, "clang %s -o %s", sourceName, execName);
    sprintf(execCall, "./%s", execName);
    FILE *fptr = fopen(sourceName, "w"); // change name
    if (fptr == NULL) return 0;
    char *s = "#include <stdio.h>\n int main(){printf(\"hello %d\"); return 0;}";
    fprintf(fptr, s, i - 1);
    fclose(fptr);
    system(compileCall);
    system(execCall);
    return 0;
} 