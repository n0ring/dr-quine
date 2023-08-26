#include <stdio.h>

#define NL 10
#define QM 34

void showYouSelf() {
    char *s = "#include <stdio.h>%c%c#define NL 10%c#define QM 34%c%cvoid showYouSelf() {%c    char *s = %c%s%c;%c    printf(s, NL, NL, NL, NL, NL, NL, QM, s, QM, NL, NL, NL, NL, NL, NL, NL, NL, NL, NL, NL, NL, NL, NL);%c}%c/*%c    One of the comments must be present outside of your program%c*/%cint main() {%c    /*%c        One of the comments must be present in the main function%c    */%c    showYouSelf();%c    return 0;%c}%c";
    printf(s, NL, NL, NL, NL, NL, NL, QM, s, QM, NL, NL, NL, NL, NL, NL, NL, NL, NL, NL, NL, NL, NL, NL);
}
/*
    One of the comments must be present outside of your program
*/
int main() {
    /*
        One of the comments must be present in the main function
    */
    showYouSelf();
    return 0;
}
