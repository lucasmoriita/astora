#ifndef MAP_H
#define MAP_H

#define MAP_PRIME_A 131
#define MAP_PRIME_B 137

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct map_element {
    char *key;
    void *value;
};

struct map {
    size_t max_size;
    size_t size;
    struct map_element **elements;
};

void map_new(struct map *map);
void map_delete(struct map *map);
void map_insert(struct map *map, const char *key, void *value);
void* map_search(struct map *map, const char *key);
void map_delete_key(struct map *map, const char *key);

#endif
