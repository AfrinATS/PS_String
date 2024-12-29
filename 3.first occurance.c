/*Write down a program that
searches for a letter in a
sentence. Both letter and
sentence will be input to
your program. Print first
position of the letter found
in the sentence*/
main(){
char t[80],ch;
int p = -1, i;
printf("Enter a Sentence:");
gets(t);
printf("What to search? ");
scanf("%c",&ch);
for(i = 0; i < strlen(t); i++)
if(t[i] == ch){
p = i;
break;
}
if(p == -1) printf("not found");
else printf("Found: %d", p);
}

