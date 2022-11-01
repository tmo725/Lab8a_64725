//64050725 สุภัชชา ทองสุข
/*Q1
  20! = 2432902008176640000 */

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
int main(void)
{
    pid_t pid = fork();
    if(pid==0){
        printf("child created\n");
        while(1);
        printf("this line should not be shown\n");
        exit(0);
    }else{
        sleep(4);
        kill(pid,SIGINT);
        printf("goodbye world\n");
    }
    return 0;
}
