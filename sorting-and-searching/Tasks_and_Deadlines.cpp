#include <bits/stdc++.h>

using namespace std;

using intt = long long;

void solve()
{
    intt n;
    cin >> n;

    vector<pair<intt,intt>> a(n);

    // summation of (d-f) ---> summation(d)-summation(f) ---> minimize sum of finishing time

    for (intt i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end());

    intt time = 0;
    intt ans = 0;

    for (intt i = 0; i < n; i++)
    {
        time += a[i].first;
        ans += a[i].second - time;
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}


// The trick is to stop thinking about **deadlines** first.

// Look at the reward formula:

// [
// \text{reward} = d - f
// ]

// where

// * `d` = deadline
// * `f` = finishing time

// For all tasks,

// [
// \text{Total Reward}
// ===================

// (d_1-f_1)+(d_2-f_2)+\cdots
// ]

// Rearrange it:

// # [

// ## (d_1+d_2+\cdots)

// (f_1+f_2+\cdots)
// ]

// Now notice something important.

// ## Observation 1

// The deadlines are **fixed**.

// Example:

// ```text
// 10
// 15
// 12
// ```

// No matter how you arrange the tasks,

// ```text
// 10 + 15 + 12 = 37
// ```

// never changes.

// So the only thing you control is

// ```text
// finish1 + finish2 + finish3
// ```

// So the problem becomes:

// > **How do I make the sum of finishing times as small as possible?**

// ---

// ## Observation 2

// Let's forget deadlines completely.

// Suppose durations are

// ```text
// 8 5
// ```

// ### Order 1

// ```text
// 8 -> 5
// ```

// Finishing times

// ```text
// 8
// 13
// ```

// Sum

// ```text
// 21
// ```

// ---

// ### Order 2

// ```text
// 5 -> 8
// ```

// Finishing times

// ```text
// 5
// 13
// ```

// Sum

// ```text
// 18
// ```

// Smaller!

// Why?

// Because the shorter task finished earlier.

// ---

// ## Another example

// Durations

// ```text
// 9 2 4
// ```

// Bad order

// ```text
// 9
// 11
// 15
// ```

// Sum

// ```text
// 35
// ```

// ---

// Shortest first

// ```text
// 2
// 6
// 15
// ```

// Sum

// ```text
// 23
// ```

// Much better.

// ---

// ## Why does this always happen?

// Imagine two neighbouring tasks.

// ```text
// A
// B
// ```

// Durations

// ```text
// a
// b
// ```

// Current time

// ```text
// T
// ```

// ### Case 1

// ```text
// A then B
// ```

// Finishing times

// ```text
// T+a

// T+a+b
// ```

// Contribution

// ```text
// (T+a)+(T+a+b)

// =
// 2T+2a+b
// ```

// ---

// ### Case 2

// ```text
// B then A
// ```

// Contribution

// ```text
// (T+b)+(T+a+b)

// =
// 2T+a+2b
// ```

// Compare

// ```text
// 2T+2a+b
// ```

// vs

// ```text
// 2T+a+2b
// ```

// Difference

// ```text
// a-b
// ```

// If

// ```text
// a>b
// ```

// then

// ```text
// 2T+2a+b
// >
// 2T+a+2b
// ```

// So putting the **longer task first is always worse**.

// Therefore, if you ever see:

// ```text
// 8 5
// ```

// you should swap them.

// Keep swapping until

// ```text
// 2 5 8 10 ...
// ```

// which is exactly sorting by duration.

// ---

// ## Final intuition

// Think of every long task as making **every task after it finish later**.

// Example:

// ```text
// 100 1 1 1
// ```

// The `100` delays three other tasks.

// Instead:

// ```text
// 1 1 1 100
// ```

// Only the last task is delayed.

// That's why **short tasks should go first**—they finish quickly and don't postpone many other tasks.

// So the algorithm is simply:

// 1. Sort by **duration**.
// 2. Keep a running `time`.
// 3. Add `deadline - time` to the answer.

// This is a classic greedy strategy known as **Shortest Processing Time First (SPT)**. It minimizes the total completion time, which in turn maximizes the total reward.
