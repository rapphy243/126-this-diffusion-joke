#include <random>

int walk(int numTimes, int position) {
    int pos = position;
    for (int i = 0; i < numTimes; ++i) {
        if ((std::rand() % 2) == 0) {
            ++position;
        }
        else {
            --position;
        }
    }
    return position;
}

int walk(int numTimes) {
    return walk(numTimes, 0);
}
