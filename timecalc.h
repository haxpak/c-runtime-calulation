#include <time.h>
#include <stdio.h>
/*
* Created by haxpak
* haxpak@gmail.com
*/
struct timespec start, finish; 
long long int time_elapsed;


int time_difference(struct timespec *start, struct timespec *finish, 
                    long long int *difference) {
  long long int ds =  finish->tv_sec - start->tv_sec; 
  long long int dn =  finish->tv_nsec - start->tv_nsec; 

  if(dn < 0 ) {
    ds--;
    dn += 1000000000; 
  } 
  *difference = ds * 1000000000 + dn;
  return !(*difference > 0);
}


void startTimer(){
    clock_gettime(CLOCK_MONOTONIC, &start);
}

void endTimer(){
    clock_gettime(CLOCK_MONOTONIC, &finish);
    time_difference(&start, &finish, &time_elapsed);
    printf("\n[+] Time elapsed was %lldns or %0.9lfs\n", time_elapsed, 
            (time_elapsed/1.0e9));

}

long long int getTimeDifference()
{
    return time_elapsed;
}