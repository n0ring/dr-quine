#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define NL 10
#define QM 34

int main() {
    char sourceName[20];
    char execName[20];
    char compileCall[256];
    char execCall[256];
    int i = 5;
    if (!access("Sully_5.c", F_OK)) i--;
    sprintf(sourceName, "Sully_%d.c", i);
    sprintf(execName, "Sully_%d", i);
    sprintf(compileCall, "clang %s -o %s", sourceName, execName);
    sprintf(execCall, "./%s", execName);
    FILE *fptr = fopen(sourceName, "w");
    if (fptr == NULL) return 0;
    char *s = "#include <stdio.h>%c#include <stdlib.h>%c#include <unistd.h>%c%c#define NL 10%c#define QM 34%c%cint main() {%c    char sourceName[20];%c    char execName[20];%c    char compileCall[256];%c    char execCall[256];%c    int i = %d;%c    if (!access(%cSully_5.c%c, F_OK)) i--;%c    sprintf(sourceName, %cSully_%%d.c%c, i);%c    sprintf(execName, %cSully_%%d%c, i);%c    sprintf(compileCall, %cclang %%s -o %%s%c, sourceName, execName);%c    sprintf(execCall, %c./%%s%c, execName);%c    FILE *fptr = fopen(sourceName, %cw%c);%c    if (fptr == NULL) return 0;%c    char *s = %c%s%c;%c    fprintf(fptr, s, NL, NL, NL, NL, NL,NL, NL, NL, NL, NL, NL, NL, i, NL, QM, QM, NL, QM, QM, NL, QM, QM, NL, QM, QM, NL, QM, QM, NL, QM, QM, NL, NL, QM, s, QM, NL, NL, NL, NL, NL, NL, NL, NL, NL);%c    fclose(fptr);%c    system(compileCall);%c    if (i < 1) return 0;%c    system(execCall);%c    return 0;%c}%c%c";
    fprintf(fptr, s, NL, NL, NL, NL, NL,NL, NL, NL, NL, NL, NL, NL, i, NL, QM, QM, NL, QM, QM, NL, QM, QM, NL, QM, QM, NL, QM, QM, NL, QM, QM, NL, NL, QM, s, QM, NL, NL, NL, NL, NL, NL, NL, NL, NL);
    fclose(fptr);
    system(compileCall);
    if (i < 1) return 0;
    system(execCall);
    return 0;
}
