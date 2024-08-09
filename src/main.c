#include <stdio.h>

typedef struct player {
	const char* name;
	int x, y;
} player_t;

player_t player_new(const char* name, int x, int y);

int main() {
	print("Hello, World!");
	return 0;
}

player_t player_new(const char* name, int x, int y) {
	return (player_t){.name = name, .x = x, .y = y};
}
