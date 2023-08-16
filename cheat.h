#ifndef __CHEAT_H_
#define __CHEAT_H_

#include <stdlib.h>

struct cheat {
	char *name;
	char *info;
	int enabled;
	const char *code;
};

struct cheats {
	int enabled;
	size_t count;
	struct cheat *cheats;
};

struct cheats *cheats_load(const char *filename);
void cheats_free(struct cheats *cheats);

#endif
