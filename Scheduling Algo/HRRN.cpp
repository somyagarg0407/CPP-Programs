#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Process {
    int pid, at, bt, ct, tat, wt, rt;
    bool done;
};

int main() {

    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> p(n);

    cout << "\nEnter Arrival Time and Burst Time:\n";

    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;

        cout << "P" << i + 1 << " AT BT: ";
        cin >> p[i].at >> p[i].bt;

        p[i].done = false;
    }

    int time = 0;
    int completed = 0;

    cout << "\nGantt Chart:\n";

    while (completed < n) {

        int index = -1;
        double highestRR = -1;

        // Find process having highest response ratio
        for (int i = 0; i < n; i++) {

            if (p[i].at <= time && p[i].done == false) {

                p[i].wt = time - p[i].at;

                double rr = (double)(p[i].wt + p[i].bt) / p[i].bt;

                if (rr > highestRR) {
                    highestRR = rr;
                    index = i;
                }
            }
        }

        // If no process has arrived
        if (index == -1) {
            time++;
            continue;
        }

        // Process starts
        p[index].rt = time - p[index].at;

        cout << "| P" << p[index].pid << " ";

        // HRRN is non-preemptive
        time = time + p[index].bt;

        // Completion Time
        p[index].ct = time;

        // Turnaround Time
        p[index].tat = p[index].ct - p[index].at;

        // Waiting Time
        p[index].wt = p[index].tat - p[index].bt;

        p[index].done = true;

        completed++;
    }

    cout << "|\n";

    // Display table
    cout << "\n";
    cout << left
         << setw(10) << "Process"
         << setw(10) << "AT"
         << setw(10) << "BT"
         << setw(10) << "CT"
         << setw(10) << "TAT"
         << setw(10) << "WT"
         << setw(10) << "RT"
         << endl;

    for (int i = 0; i < n; i++) {

        cout << left
             << setw(10) << "P" + to_string(p[i].pid)
             << setw(10) << p[i].at
             << setw(10) << p[i].bt
             << setw(10) << p[i].ct
             << setw(10) << p[i].tat
             << setw(10) << p[i].wt
             << setw(10) << p[i].rt
             << endl;
    }

    return 0;
}