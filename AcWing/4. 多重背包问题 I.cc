#include <cstdio>
#include <algorithm>

constexpr int max_size = 1001;
int re[max_size] = {0};

int main() {
    int n, v;
    int value;
    int volumn;
    int cnt;
    scanf("%d%d", &n, &v);
    for (int i = 1; i <= n; i++) {
        scanf("%d%d%d", &volumn, &value, &cnt);
        for (int j = v; j > 0; j--) {
            for (int k = j - volumn, sum = value, l = 1; k >= 0 && l <= cnt; k -= volumn, sum += value, l++) {
                re[j] = std::max(re[j], re[k] + sum);
            }
        }
    }
    printf("%d", re[v]);
    return 0;
}