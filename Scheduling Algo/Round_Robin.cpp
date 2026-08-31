#include <iostream>
#include <vector>
#include <queue>
#include <iomanip>
using namespace std;

struct Process {
    int pid, at, bt, original_bt;
    int ct, tat, wt, rt;
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

        p[i].original_bt = p[i].bt;
        p[i].rt = -1;
    }

    int tq;
    cout << "\nEnter Time Quantum: ";
    cin >> tq;

    queue<int> q;

    int time = 0;
    int completed = 0;
    int next = 0;

    cout << "\nGantt Chart:\n";

    while (completed < n) {

        // If queue is empty, move time to next process
        if (q.empty()) {

            if (time < p[next].at)
                time = p[next].at;

            while (next < n && p[next].at <= time) {
                q.push(next);
                next++;
            }
        }

        // Take process from front
        int i = q.front();
        q.pop();

        // First time CPU is given
        if (p[i].rt == -1) {
            p[i].rt = time - p[i].at;
        }

        cout << "| P" << p[i].pid << " ";

        // Run for quantum or remaining burst time
        int run = min(tq, p[i].bt);

        time = time + run;
        p[i].bt = p[i].bt - run;

        // Add newly arrived processes
        while (next < n && p[next].at <= time) {
            q.push(next);
            next++;
        }

        // Process finished
        if (p[i].bt == 0) {

            p[i].ct = time;
            completed++;
        }

        // Process not finished → put at back
        else {
            q.push(i);
        }
    }

    cout << "|\n";

    // Calculate TAT and WT
    for (int i = 0; i < n; i++) {

        p[i].tat = p[i].ct - p[i].at;

        p[i].wt = p[i].tat - p[i].original_bt;
    }

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
             << setw(10) << p[i].original_bt
             << setw(10) << p[i].ct
             << setw(10) << p[i].tat
             << setw(10) << p[i].wt
             << setw(10) << p[i].rt
             << endl;
    }

    return 0;
}