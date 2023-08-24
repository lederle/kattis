#include "libspeeding.h"

int speeding(const int *time, const int *dist, int len) {
    int speed[len - 1];
    for (int i = 1; i < len; i++)
        speed[i - 1] = (dist[i] - dist[i - 1]) / (time[i] - time[i - 1]);

    int max_speed = -1;
    for (int i = 0; i < len - 1; i++) {
        if (speed[i] > max_speed)
            max_speed = speed[i];
    }
    return max_speed;
}
