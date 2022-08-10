#include "time.h"

struct tm* GetTime() {
	time_t     rawtime = time(0);
	struct tm* timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	return timeinfo;
}
