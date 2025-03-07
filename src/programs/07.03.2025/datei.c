#include <inttypes.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ARR_SIZE 10

int main()
{
    srand(time(NULL));
    int32_t arr[ARR_SIZE];

    for (int32_t count = 0; count < ARR_SIZE; count++)
    {
        arr[count] = rand();
    }

    for (int32_t count0 = 0; count0 < ARR_SIZE; count0++)
    {
        for (int32_t count = 0; count < ARR_SIZE; count++)
        {
            if (arr[count] < arr[count + 1])
            {
                int32_t arr_count = arr[count];
                arr[count] = arr[count + 1];
                arr[count + 1] = arr_count;
            }
        }
    }

    for (int32_t count = 0; count < ARR_SIZE; count++)
    {
        printf("%d\n", arr[count]);
    }
    return 0;
}