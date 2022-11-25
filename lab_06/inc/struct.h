#ifndef STRUCT_H
#define STRUCT_H

typedef struct tree_node_t
{
    const char *name; // название узла
    struct tree_node_t *left; // меньшие
    struct tree_node_t *righ; // старшие
}tree_node_t;

#endif // STRUCT_H