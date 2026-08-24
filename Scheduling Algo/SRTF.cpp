#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Process {
    int pid, at, bt, ct, tat, wt, rt, start;
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
    }

    vector<int> remaining(n);
    vector<bool> started(n, false);
    vector<bool> completed(n, false);

    for (int i = 0; i < n; i++)
        remaining[i] = p[i].bt;

    int currentTime = 0;
    int completedCount = 0;

    while (completedCount < n) {
        int index = -1;

        // Find process with shortest remaining time
        for (int i = 0; i < n; i++) {
            if (!completed[i] && p[i].at <= currentTime) {
                if (index == -1 ||
                    remaining[i] < remaining[index] ||
                    (remaining[i] == remaining[index] &&
                     p[i].at < p[index].at)) {
                    index = i;
                }
            }
        }

        if (index == -1) {
            currentTime++;
            continue;
        }

        if (!started[index]) {
            p[index].start = currentTime;
            p[index].rt = currentTime - p[index].at;
            started[index] = true;
        }

        remaining[index]--;
        currentTime++;

        if (remaining[index] == 0) {
            p[index].ct = currentTime;
            p[index].tat = p[index].ct - p[index].at;
            p[index].wt = p[index].tat - p[index].bt;

            completed[index] = true;
            completedCount++;
        }
    }

    cout << "\n========== PREEMPTIVE SJF (SRTF) ==========\n";
    cout << "\nPID\tAT\tBT\tCT\tTAT\tWT\tRT\n";

    double avgWT = 0, avgTAT = 0, avgRT = 0;

    for (auto x : p) {
        cout << x.pid << "\t"
             << x.at << "\t"
             << x.bt << "\t"
             << x.ct << "\t"
             << x.tat << "\t"
             << x.wt << "\t"
             << x.rt << "\n";

        avgWT += x.wt;
        avgTAT += x.tat;
        avgRT += x.rt;
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time    = " << avgWT / n;
    cout << "\nAverage Turnaround Time = " << avgTAT / n;
    cout << "\nAverage Response Time   = " << avgRT / n << "\n";

    return 0;
}