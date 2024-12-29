//String Input/Output(using scanf)
/*main(){
char t[80];
scanf("%[^\n]",t);
printf("You have entered:%s",t);
}*/


//String Input/Output(using gets)
/*main(){
char t[80];
gets(t);
printf("You have entered:%s",t);
}*/


//String Input/Output(using fgets)
#include<stdio.h>
main(){
char t[80];
fgets(t,sizeof(t),stdin);
puts(t);
}
