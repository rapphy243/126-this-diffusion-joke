#include <random>

int walk(int numTimes, int position) {
    if (numTimes == 0) {
        return position;
    }
    if ((std::rand() % 1) == 0) {
        return walk(--numTimes, ++position);
    }
    else {
        return walk(--numTimes, --position);
    }
}

int walk(int numTimes) {
    return walk(numTimes, 0);
}
