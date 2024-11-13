#include <stdio.h>

#define NUM_CANDIDATES 5

int main() {
    int votes[NUM_CANDIDATES] = {0};  // Array to store vote counts for each candidate
    int spoiltBallots = 0;            // Counter for spoilt ballots
    int ballot;
    int numVoters;

    // Ask for the number of voters
    printf("Enter the number of voters: ");
    scanf("%d", &numVoters);

    // Read each ballot
    for (int i = 0; i < numVoters; i++) {
        printf("Enter vote (1-5) for voter %d: ", i + 1);
        scanf("%d", &ballot);

        // Check if the ballot is valid
        if (ballot >= 1 && ballot <= NUM_CANDIDATES) {
            votes[ballot - 1]++;  // Increment the corresponding candidate's vote count
        } else {
            spoiltBallots++;  // Increment spoilt ballots counter
        }
    }

    // Display the results
    printf("\nVote count for each candidate:\n");
    for (int i = 0; i < NUM_CANDIDATES; i++) {
        printf("Candidate %d: %d votes\n", i + 1, votes[i]);
    }
    printf("Spoilt ballots: %d\n", spoiltBallots);

 return 0;
}