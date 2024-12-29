/*Write down a program that prints how many words, letters, vowels, words,symbols and consonants exist in a
sentence. The sentence will be input to your program.*/
//The sky is the limit!
main(){
char t[80],ch;
int w, v, c, s, n,i;
printf("Enter a Sentence:");
gets(t);
w = v = c = s = 0;
n= strlen(t);
for(i = 0; i < n; i++){
ch = tolower(t[i]);
if(ch == ' '){ w++;
while(t[i]==' ') i++;
i--;
}
else if ( ch== 'a' || ch == 'e' ||
ch == 'i'|| ch == 'o' || ch == 'u')
v++;
else if (ch>='a' && ch<='z') c++;
else s++;
}
printf("Number of words: %d \n",w+1);
printf("Number of letters: %d \n",v+c);
printf("Number of vowels: %d \n",v);
printf("Number of consonants: %d \n",c);
printf("Number of symbol: %d \n",s);
}
