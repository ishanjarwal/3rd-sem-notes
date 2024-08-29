#include <iostream>
using namespace std;
int main()
{
    // Scheduling (11 Number sure)
    // Scheduling Algorithm determines the order of execution of tasks

    // Types :
    // 1. FCFS (First Come First Server)
    // criteria of preference is the arrival time,
    // Mode : Non-Premeptive

    // AT : Arrival Time : The time at which a process enters the ready queue
    // BT : Burst Time : It is the time required by a process to get executed on CPU
    // Completion Time : It is a time stamp at which a process completes its execution

    // ProcessId | AT | BT
    // P0        | 0  | 3
    // P1        | 1  | 2
    // P2        | 2  | 1
    // P3        | 3  | 3

    // here P2 is the fastest task

    // Gantt Chart (preference chart)
    // Completion Time  | 0   | 3  |  5  |  6  |  9
    // Process          | P0  | P1 |  P2 |  P3 |

    // Turn Around Time(TAT) : CT-AT;
    // Weighting Time : TAT - BT
    // Response Time : (The time at which a process gets CPU first time) - AT

    // ProcessId | AT | BT  | CT   | TAT    | WT    | RT
    // P0        | 0  | 3   | 3    | 3      | 0     |
    // P1        | 1  | 2   | 5    | 4      | 2     |
    // P2        | 2  | 1   | 6    | 4      | 3     |
    // P3        | 3  | 3   | 9    | 5      | 2     |

    // Criteria for good Scheduling algo : High Response Time, less Weighting time and High Throughput

    // Question :
    // ProcessId | AT | BT  | CT   | TAT    | WT    | RT
    // P0        | 0  | 2   | 2    | 2      | 0     | 0
    // P1        | 1  | 2   | 4    | 3      | 1     | 1
    // P2        | 5  | 3   | 8    | 3      | 0     | 0
    // P3        | 6  | 4   | 12   | 6      | 2     | 2

    // Premeptive : the task can be put on hault in between
    // Non-premeptive : one task needs to be completed for the further tasks to begin
    return 0;
}