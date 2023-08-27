#include <stdio.h>
#include <stdlib.h>

#define NL 10
#define QM 34

int main() {
    char sourceName[20];
    int i = 5;
    if (i < 1) return 0;
    sprintf(sourceName, "Sully_%d.c", i);
    FILE *fptr = fopen(sourceName, "w");
    if (fptr == NULL) return 0;
    fprintf(fptr, s,             NL,                 NL, NL,           NL,            NL,NL,          NL,                       NL,                       NL,                       NL, QM, QM, NL, QM, QM, NL, NL, QM, s, QM, NL, NL, NL, NL, NL, NL);
    char *s = "#include <stdio.h>%c#include <stdlib.h>%c%c#define NL 10%c#define QM 34%c%cint main() {%c    char sourceName[20];%c    int i = 5;%c    if (i < 1) return 0;%c    sprintf(sourceName, %cSully_\%d.c%c, i);%c    FILE *fptr = fopen(sourceName, %cw%c);%c    if (fptr == NULL) return 0;%c    char *s = %c%s%c;%c    fprintf(fptr, s, s, i);%c    fclose(fptr);%c    return 0;%c}%c%c";
    fclose(fptr);
    return 0;
	
}



sully i = 5
bin
sully_5 i = 5
bin
sully_4 i = 4
bin
sully_3 i = 3
bin
sully_2 i = 2
bin
sully_1 i = 1
bin
sully_0 i = 0