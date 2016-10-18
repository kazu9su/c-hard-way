#include <stdio.h>
#include <stdlib.h>

int num_of_one(int value) {
    int ret;
    for (ret=0; value > 0; value /=10) {
        if (value % 10 == 1) {
            ret++;
        }
    }
    return ret;
}

int main(void) {
    int i;

    scanf("%d", &i);
    printf("%d中には1は%d個含まれています\n", i, num_of_one(i));

    return 1;
}
