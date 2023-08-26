#include <stdio.h>

/*
    one comment is here
*/

#define NEWLINE 10
#define Q_MARK 34
#define FT(NL, QM, SC)int main() {\
    FILE *fptr = fopen("Grace_kid.c", "w");\
    if (fptr == NULL) return 0;\
    char *s = "#include <stdio.h>%c%c/*%c    one comment is here%c*/%c%c#define NEWLINE 10%c#define Q_MARK 34%c#define FT(NL, QM, SC)int main() {%c%c    FILE *fptr = fopen(%cGrace_kid.c%c, %cw%c);%c%c    if (fptr == NULL) return 0;%c%c    char *s = %c%s%c;%c%c    fprintf(fptr, s, NL, NL, NL, NL, NL, NL, NL, NL, SC, NL, QM, QM, QM, QM, SC, NL, SC, NL, QM, s, QM, SC, NL, SC, NL, SC, NL, SC, NL, NL, NL, NL, NL);%c%c    fclose(fptr);%c%c    return 0;%c%c} %c%c %cFT(NEWLINE, Q_MARK, 92)%c";\
    fprintf(fptr, s, NL, NL, NL, NL, NL, NL, NL, NL, SC, NL, QM, QM, QM, QM, SC, NL, SC, NL, QM, s, QM, SC, NL, SC, NL, SC, NL, SC, NL, NL, NL, NL, NL);\
    fclose(fptr);\
    return 0;\
} 

 
FT(NEWLINE, Q_MARK, 92)
