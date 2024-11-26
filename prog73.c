#include <stdio.h>

int main() {
    int votes[100]; // Array to store votes
    int count[5] = {0}; // Array to count votes for candidates 1 to 5
    int n, i, spoiledBallots = 0; // Number of votes and spoiled ballots

    // Input number of votes
    printf("Enter the number of votes: ");
    scanf("%d", &n);

    // Read each vote
    printf("Enter the votes (Candidate numbers 1 to 5):\n");
    for (i = 0; i < n; i++) {
        printf("Vote [%d]: ", i + 1);
        scanf("%d", &votes[i]);

        // Count votes or spoil ballot
        if (votes[i] >= 1 && votes[i] <= 5) {
            count[votes[i] - 1]++; // Increment the count for the candidate
        } else {
            spoiledBallots++; // Count as a spoiled ballot
        }
    }

    // Display the results
    printf("\nVote count for each candidate:\n");
    for (i = 0; i < 5; i++) {
        printf("Candidate %d: %d votes\n", i + 1, count[i]);
    }
    printf("Number of spoiled ballots: %d\n", spoiledBallots);

    return 0;
}
