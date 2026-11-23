#include<stdio.h>
#include<conio.h>
int main()
{
FILE*fp;
char line[300];
clrscr();
fp=fopen("feedback.txt","w");
if(fp==NULL)
{
printf("File cannot be opened");
getch();
return 1;
}
fprintf(fp,"FEEDBACK ABOUT C PROGRAMMING LANGUAGE\n");
fclose(fp);
fp=fopen("feedback.txt","a");
if(fp==NULL)
{
printf("File cannot be opened");
getch();
return 1;
}
fprintf(fp,"1. Even if I don't understand what my mentor was saying,I still can code in C programming language.\n");
fprintf(fp,"2. My mentor's notes were the one that helped me code and solve mock tests and helped me to pass the examinations.\n");
fprintf(fp,"3. his notes are very easy to understand.\n");
fprintf(fp,"4. Overall,the classes are amazing.\n");
fclose(fp);
fp=fopen("feedback.txt","r");
if(fp==NULL)
{
printf("File cannot be opened");
getch();
return 1;
}
while(fgets(line,sizeof(line),fp)!=NULL)
{
printf("%s",line);
}
fclose(fp);
getch();
return 0;
}
