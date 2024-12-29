/*Write down a program that searches for a word in a sentence. Both word and
sentence will be input to your program. Print first position of the word found
in the sentence*/
/*main()
{
    char t[80],x[80],j;
    int i,p= -1;
    printf("Enter a Sentence:");
    gets(t);
    printf("Which word? ");
    gets(x);
    for(i = 0; i < strlen(t); i++)
        if(t[i] == x[0])
        {
            for(j = 1; j < strlen(x); j++)
                if(t[i+j] != x[j])
                    break;
            if(j == strlen(x))
            {
                p = i;
                break;
            }
        }
    if(p == -1) printf("Sorry not found");
    else printf("Found at position: %d", p);
}*/
/*Enter a Sentence:the sky is the k
Which word? sky
Found at position: 4*/

main()
{
    char t[80],x[80],j,ch;
    int i,p= -1;
    printf("Enter a Sentence:");
    gets(t);
    printf("Which word? ");
    gets(x);
    for(i = 0; i < strlen(t); i++){
            for(j = 0; j < strlen(x); j++){
                if(x[j]==t[i+j]){
                        continue;
                        }
                else break;
            }
            if(j == strlen(x))
            {
                p = i;
                break;
            }
    }
    if(p == -1) printf("Sorry not found");
    else printf("Found at position: %d", p);
}
