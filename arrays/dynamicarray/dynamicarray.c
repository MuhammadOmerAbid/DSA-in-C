#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    // create array of dynamic arrays
    int *arr[n];
    int size[n];

    for(int i = 0; i < n; i++) {
        arr[i] = NULL;
        size[i] = 0;
    }

    int lastAnswer = 0;

    int *answers = (int*)malloc(q * sizeof(int));
    int ansIndex = 0;

    for(int i = 0; i < q; i++) {
        int type, x, y;
        scanf("%d %d %d", &type, &x, &y);

        int idx = (x ^ lastAnswer) % n;

        if(type == 1) {
            // append
            arr[idx] = realloc(arr[idx], (size[idx] + 1) * sizeof(int));
            arr[idx][size[idx]] = y;
            size[idx]++;

        } else {
            // query
            int pos = y % size[idx];
            lastAnswer = arr[idx][pos];
            answers[ansIndex++] = lastAnswer;
        }
    }

    for(int i = 0; i < ansIndex; i++) {
        printf("%d\n", answers[i]);
    }

    return 0;
}