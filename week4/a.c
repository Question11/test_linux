#include"ch03.h"
int main()
{
int d1,d2;
char buf[10]="abcdefghij";
memset(buf,0,10);
d1=open("theboy.hole",O_CREAT|O_WRONLY,0644);
d2=dup(d1);
lseek(d1,10,SEEK_SET);
read(d2,buf,4);
printf("buf:%s\n",buf);
return 0;
}
