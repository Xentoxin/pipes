#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(){
  int READ = 0 ;
  int WRITE = 1;
  int child[2];
  int parent[2];
  pipe(child);
  pipe(parent);
  srand(time(NULL));
  if(fork() == 0 ){
    close(parent[WRITE]);
    close(pchild[READ]);
    int rec;
    read(parent[READ], &rec, sizeof(rec));
    printf("child performs division on : [%d]\n", rec);
    rec = rec/2;
    write(child[WRITE] , % rec, sizeof(rec));
  }
  else{
    close(parent[READ]);
    close(child[WRITE]);
    int send = rand()%100;
    write(paren[WRITE] , &send, sizeof(send));
    printf("parent sent : [%d]\n", send);
    read(child[READ], %send, sizeof(send));
    printf("parent read : [%d]\n", sned);
  }
}
