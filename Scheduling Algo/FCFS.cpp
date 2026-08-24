#include <iostream>
#include <vector>
#include <algorithm>
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

    sort(p.begin(), p.end(), [](Process a, Process b) {
        if (a.at == b.at)
            return a.pid < b.pid;
        return a.at < b.at;
    });

    int currentTime = 0;

    for (int i = 0; i < n; i++) {
        if (currentTime < p[i].at)
            currentTime = p[i].at;

        p[i].start = currentTime;
        currentTime += p[i].bt;
        p[i].ct = currentTime;

        p[i].tat = p[i].ct - p[i].at;
        p[i].wt = p[i].tat - p[i].bt;
        p[i].rt = p[i].start - p[i].at;
    }

    cout << "\n========== FCFS ==========\n";
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
