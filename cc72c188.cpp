#include <bits/stdc++.h>

using u32 = unsigned int;

constexpr u32 MOD = 10U;
constexpr u32 MAX = 1e6;

int main()
{
    u32 res[MOD];
    memset(res, 0, sizeof(res));

    auto S = std::chrono::high_resolution_clock::now().time_since_epoch().count();

    for (u32 i = 0U; i < MAX; ++i)
    {
        std::mt19937 mtr(i);
        ++res[mtr() % MOD];
    }

    auto E = std::chrono::high_resolution_clock::now().time_since_epoch().count();

    std::cout << "Time: " << (double)(E - S) / 1e9 << std::endl;

    for (u32 i = 0U; i < MOD; ++i)
    {
        std::cout << i << " " << res[i] << std::endl;
    }

    return 0;
}