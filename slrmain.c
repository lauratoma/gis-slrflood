//
// Name: 
//
#include "flood.hpp"
#include "map.h"
#include "pixel_buffer.h"
#include "grid.h"

#include <stdlib.h>
#include <stdio.h> 
#include <math.h>
#include <getopt.h>
#include <assert.h>



/*
  Reads command line arguments
*/
void parseArguments(int argc, char* const* argv, 
		    char** elevName, 
		    char** floodedName, float* rise, float* incr) { 
  
}







////////////////////////////////////////////////////////////
int main(int argc, char** argv) {

  char *elev_name, *flooded_name;
  float rise, rise_incr;
  parseArguments(argc, argv, &elev_name,  &flooded_name, &rise, &rise_incr);
  printf("running %s with arguments:\n\telev_name: %s \n\tflooded_name: %s \n\tslr=%.1f, incr=%.1f\n",
	 argv[0], elev_name, flooded_name, rise, rise_incr);
}


