#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of processes: ";
    cin >> n;

    // Added PID array to keep track of original Process IDs
    int AT[100], BT[100], CT[100], TAT[100], WT[100], PID[100];

    // Input
    for (int i = 0; i < n; i++) {
        PID[i] = i + 1; // Assigning Process ID (1, 2, 3...)
        cout << "Enter Arrival Time and Burst Time for P" << i + 1 << ": ";
        cin >> AT[i] >> BT[i];
    }

    // --- NEW: Sorting processes by Arrival Time (Bubble Sort) ---
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (AT[j] > AT[j + 1]) {
                // Swap Arrival Time
                swap(AT[j], AT[j + 1]);
                
                // Swap Burst Time
                swap(BT[j], BT[j + 1]);
                
                // Swap Process ID
                swap(PID[j], PID[j + 1]);
            }
        }
    }
    

    // FCFS calculation
    int currentTime = 0;

    for (int i = 0; i < n; i++) {

        // If CPU is idle
        if (currentTime < AT[i])
            currentTime = AT[i];

        CT[i] = currentTime + BT[i];

        TAT[i] = CT[i] - AT[i];

        WT[i] = TAT[i] - BT[i];

        currentTime = CT[i];
    }

    // Output
    cout << "\nProcess\tAT\tBT\tCT\tTAT\tWT\n";

    for (int i = 0; i < n; i++) {
        // Updated to use PID[i] instead of i + 1
        cout << "P" << PID[i] << "\t"
             << AT[i] << "\t"
             << BT[i] << "\t"
             << CT[i] << "\t"
             << TAT[i] << "\t"
             << WT[i] << endl; 
    }

    return 0;
}