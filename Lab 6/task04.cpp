//Alisha Zaidi 23k-0025

#include <iostream>
using namespace std;

double battingAverage(int totalRuns, int timesOut) {
    double average;
    if (timesOut == 0)
        average = 0;
    else
        average = (double)totalRuns / timesOut;
    return average;
}

double strikeRate(int totalRuns, int totalBallsFaced) {
    if (totalBallsFaced == 0)
        return 0;
    else {
        double rate = ((double)totalRuns / totalBallsFaced) * 100;
        return rate;
    }
}

int main() {
    int totalRuns, timesOut, totalBallsFaced;

    cout << "Enter total runs scored by the player: ";
    cin >> totalRuns;
    cout << "Enter the number of times the player has been dismissed: ";
    cin >> timesOut;
    cout << "Enter total balls faced by the player: ";
    cin >> totalBallsFaced;

    double average = battingAverage(totalRuns, timesOut);
    double rate = strikeRate(totalRuns, totalBallsFaced);

    cout << "Batting Average: " << average << std::endl;
    cout << "Strike Rate: " << rate << std::endl;

    return 0;
}//end main