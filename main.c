#include <stdio.h>

int main() {
    char *s = "#include <stdio.h>\\n\\nint main() {\\n    char *s = \"%s%s\";\\n    printf(s, s);\\n    return 0;\n}\n\n\n";
    printf(s, s);
    return 0;
}
