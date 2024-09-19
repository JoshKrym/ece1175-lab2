#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

void ohNo(int signum){
    if(signum==SIGALRM){
        printf("OH NO!!!! I received a sigalrm!!!!\n");
    }
    else {
        printf("You screwed up so bad that I am just going to stop\n");
        abort();
    }
    return;
}

int main(int argc, char** argv){
    if(argc>=2)
        printf("%s\n", argv[1]);
    const struct sigaction mySigaction = {
        .sa_handler = ohNo
    };
    const struct itimerval myItimerval = {
        .it_interval = {.tv_sec = 5.0, .tv_usec = 0.0},
        .it_value = {.tv_sec = 5.0, .tv_usec = 0.0}
    };
    sigaction(int sig, const struct sigaction *restrict act, struct sigaction *restrict oact)
}
