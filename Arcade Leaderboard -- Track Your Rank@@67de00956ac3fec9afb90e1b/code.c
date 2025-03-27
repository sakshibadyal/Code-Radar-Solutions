#include <stdio.h>

// Function to perform binary search (find lower bound)
int findRank(int unique_ranks[], int rank_size, int score) {
    int low = 0, high = rank_size - 1, mid;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (unique_ranks[mid] <= score) {
            high = mid - 1;  // Move left
        } else {
            low = mid + 1;  // Move right
        }
    }
    return low + 1;  // Rank is index + 1
}

int main() {
    int n, m;
    
    // Read leaderboard size
    scanf("%d", &n);
    int ranked[n], unique_ranks[n], rank_size = 0;

    // Read leaderboard scores and create unique ranks
    for (int i = 0; i < n; i++) {
        scanf("%d", &ranked[i]);
        if (i == 0 || ranked[i] != ranked[i - 1]) {
            unique_ranks[rank_size++] = ranked[i];
        }
    }

    // Read number of games
    scanf("%d", &m);
    int player[m];

    // Read player's game scores
    for (int i = 0; i < m; i++) {
        scanf("%d", &player[i]);
    }

    // Compute and print ranks using binary search
    for (int i = 0; i < m; i++) {
        printf("%d\n", findRank(unique_ranks, rank_size, player[i]));
    }

    return 0;
}

