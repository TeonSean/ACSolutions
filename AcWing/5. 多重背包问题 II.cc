#include <cstdio>
#include <algorithm>

constexpr int max_size = 50000;
int re[max_size] = {0};

int main() {
    int n;
    int v;
    int volumn;
    int value;
    int cnt;
    scanf("%d%d", &n, &v);
    for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &volumn, &value, &cnt);
        int co = 1;
        bool last_round = cnt == 1;
        while (true) {
            int bound = volumn * co;
            for (int j = v; j >= bound; j--) {
                re[j] = std::max(re[j], re[j - volumn * co] + value * co);
            }
            if (last_round) {
                break;
            }
            co <<= 1;
            if (cnt < co << 1) {
                co = cnt + 1 - co;
                last_round = true;
            }
        }
    }
    printf("%d", re[v]);
    return 0;
}