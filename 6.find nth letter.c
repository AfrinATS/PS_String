/*Write down a program that will print n-th letter in a
sentence entered by a user. n will be input to your program*/
main(){
char t[80];
int n, len;
printf("Enter a Sentence:");
gets(t);
len = strlen(t);
printf("Total char in sentence is:%d\n", len);
printf("Which position?");
scanf("%d",&n);
if(n < len) printf("The letter is: %c", t[n]);
else printf("No letter at such position");
}
/*Enter a Sentence:hello
Total char in sentence is:5
Which position?3
The letter is: l*/
