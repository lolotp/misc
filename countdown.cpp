#include <iostream>
#include <cstdlib>
#include <unistd.h>

#define DEFAULT_DURATION 1800
#define DEFAULT_TIMEGAP 1

/**
 * Example usage:
 * ./countdown 1800 2
 * ./countdown 3600 1
 */
int main(int argc, char **argv) {
	int num_seconds = DEFAULT_DURATION;
    if (argc >= 2) {
        num_seconds = atoi(argv[1]);
        if (num_seconds == 0) {
            num_seconds = DEFAULT_DURATION;
        }
    }
    int time_gap = DEFAULT_TIMEGAP;
    if (argc >=  3) {
        time_gap = atoi(argv[2]);
        if (time_gap == 0) {
            time_gap = DEFAULT_TIMEGAP;
        }
    }
	while (num_seconds) {
		std::cout<<"seconds left:"<<num_seconds<<std::endl;
		sleep(time_gap);
		num_seconds -= time_gap;
	}
    return 0;
}
