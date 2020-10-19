#include"ch03.h"
int main()
{
int d1;
d1=open("test1",O_CREAT|O_TRUNC|O_WRONLY,0644);
/*fcntl(d1,F_SETFD,0);*/
/*	d1=dup(STDOUT_FILENO);*/
printf("fcntl reacting!\n");
fcntl(d1,F_SETFD,0);
return 0;
}
