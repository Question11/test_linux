#include "ch2.h"
int main(){

int ret;
printf("2-2 is running\n");
ret =write(1,"Hello world\n",13);
sleep(10);
exit(0);
}
