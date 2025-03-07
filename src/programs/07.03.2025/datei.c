#include <inttypes.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int32_t arr[5] = {rand(), rand(), rand(), rand(), rand()};

    for (int32_t count0 = 0; count0 < 5; count0++)
    {
        for (int32_t count = 0; count < 5; count++)
        {
            if (arr[count] < arr[count + 1])
            {
                int32_t arr_count = arr[count];
                arr[count] = arr[count + 1];
                arr[count + 1] = arr_count;
            }
        }
    }

    for (int32_t count = 0; count < 5; count++)
    {
        printf("%d\n", arr[count]);
    }
    return 0;
}