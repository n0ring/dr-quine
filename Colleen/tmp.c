#include <stdio.h>

#define NEWLINE 10
#define Q_MARK 34

void showYouSelf() {
    char *s = "#include <stdio.h>%c%c#define NEWLINE 10%c#define Q_MARK 34%c%cvoid showYouSelf() {%c    char *s = %c%s%c;%c    printf(s, NEWLINE, NEWLINE, NEWLINE, NEWLINE, NEWLINE, NEWLINE, Q_MARK, s, Q_MARK, NEWLINE, NEWLINE, NEWLINE, NEWLINE, NEWLINE, NEWLINE, NEWLINE, NEWLINE, NEWLINE);%c}%c//One of the comments must be present outside of your program%cint main() {%c    //One of the comments must be present in the main function%c    showYouSelf();%c    return 0;%c}%c";
    printf(s, NEWLINE, NEWLINE, NEWLINE, NEWLINE, NEWLINE, NEWLINE, Q_MARK, s, Q_MARK, NEWLINE, NEWLINE, NEWLINE, NEWLINE, NEWLINE, NEWLINE, NEWLINE, NEWLINE, NEWLINE);
}
//One of the comments must be present outside of your program
int main() {
    //One of the comments must be present in the main function
    showYouSelf();
    return 0;
}
