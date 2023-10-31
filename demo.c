#include <pthread.h>
#include <stdio.h>

void *thread_function(void *arg) {
  /* function to be multithreaded. Must return and accept a void pointer */
  printf("From thread: Hello World !\n");
  printf("Exiting: thread\n");
}

int main() {
  /* The thread id of the created thread */
  pthread_t thread_id;
  /* Create a thread to execute thread_function */
  pthread_create(&thread_id, NULL, thread_function, NULL);
  printf("From main: Hello World !\n");
  printf("Exiting: main\n");
  /* Exit the program once all threads have completed execution */
  pthread_exit(NULL);
}
