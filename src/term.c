#include "_components.h"
#include "term.h"

void Term_Clear() {
	fputs("\x1b[2J", stdout);
}

void Term_Cursor_Go(int x, int y) {
	printf("\x1b[%i;%if", x, y);
}
