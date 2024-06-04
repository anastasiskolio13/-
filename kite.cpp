#include <bits/stdc++.h>
using namespace std;

#define MAXN 2000000
int N, K, A[MAXN + 1], PS[MAXN + 1];

int main() {
    scanf("%d%d", &N, &K);
    for (int i = 1; i <= N; i++) {
        scanf("%d", &A[i]);
        PS[i] = PS[i - 1] + A[i];
    }
    int i = 1, ans = N + 1;
    for (int j = 1; j <= N; j++) {
        while (PS[j] - PS[i - 1] > K)
          i++;
        if (PS[j] - PS[i - 1] == K)
          ans = min(ans, j - i + 1);
    }
    printf("%d\n", ans * (ans != N + 1));
    return 0;
}
