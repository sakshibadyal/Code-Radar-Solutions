#include <stdio.h>
int main() {
    int n, m;
    scanf("%d", &n);
    int leaderboard[n], unique_ranks[n], rank_size = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &leaderboard[i]);
        if (i == 0 || leaderboard[i] != leaderboard[i - 1]) {
            unique_ranks[rank_size++] = leaderboard[i]; 
        }
    }
    scanf("%d", &m);
    int scores[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &scores[i]);
    }
    int index = rank_size - 1; 
    for (int i = 0; i < m; i++) {
        while (index >= 0 && scores[i] >= unique_ranks[index]) {
            index--; 
        }
        printf("%d\n", index + 2); 
    }
    return 0;
}
