#ifndef TOOLS_H
#define TOOLS_H

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#ifdef  DEBUG
	#define debug(...) printf(__VA_ARGS__)
#else
	#define debug(...)
#endif 
bool is_die(void);
void rand_two(void);
void show_view(void);
#endif//TOOLS_H
