#include <stdio.h>
#include <cuda_runtime.h>

void printDeviceProperties();

#define CPE(val, msg, err_code) \
	if(val) { fprintf(stderr, msg); fprintf(stderr, " Error %d \n", err_code); \
	exit(err_code);}
