#include <stdio.h>

void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    // Create a unique ranked leaderboard
    int unique_ranks[n], rank_size = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0 || ranked[i] != ranked[i - 1]) {
            unique_ranks[rank_size++] = ranked[i];
        }
    }

    // Find ranks for player scores
    int index = rank_size - 1;
    for (int i = 0; i < m; i++) {
        while (index >= 0 && player[i] >= unique_ranks[index]) {
            index--;
        }
        result[i] = index + 2; // Rank is index + 2
    }
}

int main() {
    int n, m;
    
    // Read leaderboard size
    scanf("%d", &n);
    int ranked[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ranked[i]);
    }

    // Read number of games
    scanf("%d", &m);
    int player[m], result[m];

    for (int i = 0; i < m; i++) {
        scanf("%d", &player[i]);
    }

    // Call function to compute ranks
    trackPlayerRanks(ranked, n, player, m, result);

    // Output result
    for (int i = 0; i < m; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}
