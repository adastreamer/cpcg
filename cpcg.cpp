#include <cuda_runtime.h>
#include <helper_cuda.h>

#include <iostream>
#include <memory>
#include <string>

int *pArgc = NULL;
char **pArgv = NULL;


int main() {
    int deviceCount = 0;
    cudaError_t error_id = cudaGetDeviceCount(&deviceCount);

    if (error_id != cudaSuccess) {
        printf("cudaGetDeviceCount returned %d\n-> %s\n", static_cast<int>(error_id), cudaGetErrorString(error_id));
        printf("Result = FAIL\n");
	exit(EXIT_FAILURE);
    }

    printf("Detected %d CUDA Capable device(s)\n", deviceCount);

    return 0;
}

