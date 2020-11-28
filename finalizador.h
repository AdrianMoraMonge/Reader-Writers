#ifndef _H_FINALIZADOR
#define _H_FINALIZADOR


#include <stdbool.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <semaphore.h> 
#include <time.h> 



char* semaphores[2] = {"rw_mutex","process_sema"};


void deleteSemaforos();
void deleteShareMemory();


#endif