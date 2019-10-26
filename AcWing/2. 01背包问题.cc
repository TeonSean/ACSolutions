#include <cstdio>
#include <memory.h>
#include <algorithm>

constexpr int max_size = 1001;
int re[max_size] = {0};

int main() {
    int n, v;
    scanf("%d%d", &n, &v);
    int volumn, value;
    for (int i = 1; i <= n; i++) {
        scanf("%d%d", &volumn, &value);
        for (int j = v; j >= 1; j--) {
            if (j >= volumn) {
                re[j] = std::max(re[j], re[j - volumn] + value);
            }
        }
    }
    printf("%d", re[v]);
    return 0;
}