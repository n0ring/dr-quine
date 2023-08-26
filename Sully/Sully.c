#include <stdio.h>
#include <stdlib.h>

#define I 5
#define NL 10
#define QM 34

int main() {
    char sourceName[20];
    char execName[20];
    char compileCall[256];
    char execCall[256];
    int i = I;
    if (i < 1) return 0;
    sprintf(sourceName, "Sully_%d.c", i);
    sprintf(execName, "Sully_%d", i);
    sprintf(compileCall, "clang %s -o %s", sourceName, execName);
    sprintf(execCall, "./%s", execName);
    FILE *fptr = fopen(sourceName, "w");
    if (fptr == NULL) return 0;
                                 NL,                  NL,NL,       i-1,NL,           NL,            NL,NL,          NL,                       NL,                     NL,                         NL,                      NL,             NL,                       NL                        QM,     QM, NL, QM, QM, NL, QM, QM, NL, QM, s, QM, NL, QM, QM, NL, NL, QM, QM, NL, NL, NL, NL, NL, NL, NL, NL, i - 1
    char *s = "#include <stdio.h>%c#include <stdlib.h>%c%c#define I %d%c#define NL 10%c#define QM 34%c%cint main() {%c    char sourceName[20];%c    char execName[20];%c    char compileCall[256];%c    char execCall[256];%c    int i = I;%c    if (i < 1) return 0;%c    sprintf(sourceName, %cSully_%d.c%c, i);%c    sprintf(execName, %cSully_%d%c, i);%c    sprintf(compileCall, %cclang %s -o %s%c, sourceName, execName);%c    sprintf(execCall, %c./%s%c, execName);%c    FILE *fptr = fopen(sourceName, %cw%c);%c    if (fptr == NULL) return 0;%c    char *s = %c%s%c;%c    fprintf(fptr, s, i - 1);%c    fclose(fptr);%c    system(compileCall);%c    system(execCall);%c    return 0;%c} %c%c";
    fprintf(fptr, s, NL, NL, NL, NL, NL, NL, NL, NL, NL, NL, NL, NL, QM, QM, NL, QM, QM, NL, QM, QM, NL, QM, s, QM, NL, QM, QM, NL, NL, QM, QM, NL, NL, NL, NL, NL, NL, NL, NL, i - 1);
    fclose(fptr);
    system(compileCall);
    system(execCall);
    return 0;
} 