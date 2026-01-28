#include <stdio.h>

int main()
{
    int i, j, count;
    count = 0;
    i = 0;
    
    for (j = -3; j <= 3; j++)
    {
    	printf("nilai i di dalam loop biasa: %d\n", i);
    	printf("nilai j di dalam loop: %d\n", j);
        if ((j >= 0) && (i++))
        {
            count = count + j;
            printf("nilai count di dalam if di dalam loop : %d\n", count);
            printf("nilai i didalam loop dan if: %d\n", i);
        }
    }

    
    printf("nilai i setelah loop selesai : %d\n", i);
    count = count + i;
    printf("nilai setelah semua proses: %d\n", count);
    
    return 0;
}
