#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<string.h>
#include<sys/utsname.h>
#include<unstd.h>
int gethostname(char *name,size_t size);
int sethostname(conset char *name,size_t length);
int uname(struct utsname *info);
#include<errno.h>
