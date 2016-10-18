#include <stdio.h>
#include <stdlib.h>

int num_of_one(unsigned long value) {
    int ret;
    if (value==0) {
        return 0;
    }
    if (value % 10 == 1) {
        ret = 1;
    } else {
        ret = 0;
    }

    return ret + num_of_one(value / 10);
}

int main(void) {
    int i;

    scanf("%d", &i);
    printf("%d中に1は、%d個含まれています\n", i, num_of_one(i));
}
