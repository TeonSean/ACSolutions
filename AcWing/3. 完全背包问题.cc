#include <cstdio>
#include <algorithm>

constexpr int max_size = 1001;
int re[max_size] = {0};

int main() {
    int n, v;
    int value;
    int volumn;
    scanf("%d%d", &n, &v);
    for (int i = 1; i <= n; i++) {
        scanf("%d%d", &volumn, &value);
        for (int j = volumn; j <= v; j++) {
            re[j] = std::max(re[j], re[j - volumn] + value);
        }
    }
    printf("%d", re[v]);
    return 0;
}