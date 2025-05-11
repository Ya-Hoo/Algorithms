#include <iostream>

using namespace std;

int m, n;
int votes[1001][1001];
int citywin[1001];
int candidatewin[1001];

int main()
{
    freopen("ELECTION.inp", "r", stdin);
    freopen("ELECTION.out", "w", stdout);
    cin >> n >> m;

    for (int i = 0; i < m; ++i) {
        citywin[i] = 0;
        candidatewin[i] = 0;
        for (int j = 0; j < n; ++j) {
            cin >> votes[i][j];
        }
    }

    for (int i=0; i < m; ++i) {
        int maxVotes = 0;
        int winner = 0;
        for (int j = 0; j < n; ++j) {
            if (votes[i][j] > maxVotes) {
                maxVotes = votes[i][j];
                winner = j;
            } else if (votes[i][j] == maxVotes) {
                if (j < winner) {
                    winner = j;
                }
            }
        }
        citywin[i] = winner;
    }

    for (int i = 0; i < m; ++i) {
        candidatewin[citywin[i]]++;
    }

    int overallWinner = 0;
    int maxWins = 0;
    for (int i = 0; i < n; ++i) {
        if (candidatewin[i] > maxWins) {
            maxWins = candidatewin[i];
            overallWinner = i;
        } else if (candidatewin[i] == maxWins) {
            if (i < overallWinner) {
                overallWinner = i;
            }
        }
    }

    cout << overallWinner + 1;
    return 0;
}
