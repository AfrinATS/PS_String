/*Write down a program that prints how many times a letter appeared in a
sentence. Both letter and sentence will be input to your program. */
main(){
char t[80],ch;
int p = -1, i;
printf("Enter:");
gets(t);
printf("What to search? ");
scanf("%c",&ch);
for(i = 0; i < strlen(t); i++)
if(t[i] == ch){
p = i;
printf("Found: %d\n", p);
}
if(p == -1) printf("not found");
}
