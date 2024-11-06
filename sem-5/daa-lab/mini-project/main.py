import time

# Greedy Algorithm for Interval Scheduling
def greedy_interval_scheduling(tasks):
    tasks.sort(key=lambda x: x[1])
    selected_tasks = []
    last_end_time = -float('inf')
    for task in tasks:
        start, end, _ = task
        if start >= last_end_time:
            selected_tasks.append(task)
            last_end_time = end
    return selected_tasks

# Dynamic Programming for Weighted Interval Scheduling
def dp_interval_scheduling(tasks):
    tasks.sort(key=lambda x: x[1])
    n = len(tasks)
    dp = [0] * n
    def find_last_non_overlap(i):
        low, high = 0, i - 1
        while low <= high:
            mid = (low + high) // 2
            if tasks[mid][1] <= tasks[i][0]:
                if tasks[mid + 1][1] <= tasks[i][0]:
                    low = mid + 1
                else:
                    return mid
            else:
                high = mid - 1
        return -1
    dp[0] = tasks[0][2]
    for i in range(1, n):
        include_task = tasks[i][2] + (dp[find_last_non_overlap(i)] if find_last_non_overlap(i) != -1 else 0)
        exclude_task = dp[i - 1]
        dp[i] = max(include_task, exclude_task)
    selected_tasks = []
    i = n - 1
    while i >= 0:
        if dp[i] != (dp[i - 1] if i > 0 else 0):
            selected_tasks.append(tasks[i])
            i = find_last_non_overlap(i)
        else:
            i -= 1
    return selected_tasks[::-1]

# Sample tasks for testing
tasks = [(1, 4, 3), (2, 6, 5), (5, 8, 7), (7, 9, 8)]

# Measure execution time for the greedy algorithm
start_time = time.time()
greedy_selected = greedy_interval_scheduling(tasks)
greedy_time = time.time() - start_time
print("Greedy selected tasks:", greedy_selected)
print("Greedy Algorithm Execution Time:", greedy_time, "seconds")

# Measure execution time for the dynamic programming algorithm
start_time = time.time()
dp_selected = dp_interval_scheduling(tasks)
dp_time = time.time() - start_time
print("DP selected tasks:", dp_selected)
print("Dynamic Programming Algorithm Execution Time:", dp_time, "seconds")
