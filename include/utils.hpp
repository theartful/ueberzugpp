#ifndef __UTILS__
#define __UTILS__

#include <cstdlib>
#include <glib-2.0/glib.h>

struct gfree_delete
{
    void operator()(void *x) { g_free(x); }
};

struct free_delete
{
    void operator()(void *x) { free(x); }
};

#endif