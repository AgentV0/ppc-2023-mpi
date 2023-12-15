//  Copyright 2023 Ryabkov Vladislav

#ifndef TASKS_TASK_3_RYABKOV_V_QUICK_SORT_BATCHER_QUICK_SORT_BATCHER_H_
#define TASKS_TASK_3_RYABKOV_V_QUICK_SORT_BATCHER_QUICK_SORT_BATCHER_H_

#include <mpi.h>
#include <utility>
#include <vector>
#include <random>

std::vector<int> Merge(std::vector<std::vector<int>> vec);
std::vector<int> GetRandomVec(int vec_size);
std::vector<int> QuickSortParrallel(const std::vector<int>& vec);

#endif  // TASKS_TASK_3_RYABKOV_V_QUICK_SORT_BATCHER_QUICK_SORT_BATCHER_H_
