#include "_components.h"
#include "time.h"
#include "term.h"

int main(void) {
	Term_Clear();

	while (1) {
		struct tm* tm = GetTime();
		fputs("          ", stdout);
		Term_Cursor_Go(0, 0);
		printf("%02i:%02i:%02i", tm->tm_hour, tm->tm_min, tm->tm_sec);
		fflush(stdout);
	}
}
