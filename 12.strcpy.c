#include <stdio.h>
#include <string.h>
int main() {
char s1[30] = "Bad";
char s2[30] = "Good";
strcpy(s1, s2);
printf("%s",s1);
return 0;
}
