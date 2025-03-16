    #include <stdio.h>
    int main()
    {
        int x = 0, y = 2;
        int z = ~x & y;
        printf("%d\n", z);
    }