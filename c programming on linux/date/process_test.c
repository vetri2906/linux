#include <stdlib.h>

int main(void)
{
 system("date");
 system("touch newfile.c");
 system("echo \"#include <stdlib.h>\n \
int main(void)\n \
{\n \
    system(\\\"date\\\");\n \
    return 0;\n\
}\" > newfile.c");

//  system("vim newfile.c #include <stdlib.h> int main(void){ system(\"date\"); return 0;}");
 return 0;
}
