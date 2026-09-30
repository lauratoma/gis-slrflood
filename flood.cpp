//
//  flood.cpp
//  name: 
//
//
//  assume that in the initial elevation grid the sea points are
//  represented as NODATA;


#include "flood.hpp"


#include <queue>
#include <limits>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>














/*  Simulates SLR flooding with a sea level of <rise> starting from
    the points in the queue, which are assumed to be the starting
    front of the flood.
    
    Before the flood: flooded_grid is so that the points that have
    been reached by the flood are labeled as visited (SEA,
    REACHED_NOT_FLOODED, or a value > 0 which means they flood at that
    rise), and the points that have not been reached by the flood are
    marked as NOT_VISITED.

    After the flood, flooded_grid is updated to include the points
    that have been flooded as a result of this flood.
   
    returns the end boundary of the flood
 */

 std::queue<point> compute_flood_from_queue(const Grid* elev_grid, Grid* flooded_grid,
					    const float rise, 
					    std::queue<point>& queue) {
   
  assert(elev_grid && flooded_grid);
  std::queue<point> next_queue; 
  
 
}












/*
  simulates SLR flooding 0, rise_incr, 2*rise_incr, ... until rise >= rise_end
 
  pre: flooded_grid must exist 

  post: flooded_grid is set so that points that are not flooded are
  set to nodata, and points that have flooded are set to the rise at
  which they flood.

 */
void compute_flood_incrementally(const Grid* elev_grid, const float rise_incr,
				 const float rise_end,  Grid* flooded_grid) {
  
  //must exist 
  assert(flooded_grid && elev_grid); 
 
  printf("compute SLR flooding up to slr=%.1f (incr=%.1f)\n", rise_end, rise_incr);

 
}  
