//
//  flood.hpp
//  name: 
//

#ifndef flood_hpp
#define flood_hpp


#include "grid.h"
#include <stdio.h>
#include <queue>



////////////////////////////////////////////////////////////////
// values  used during flooding to mark the flooded grid

///  FEEL FREE TO CHANGE THESE VALUES OR ADD MORE 

// this value is used to mark points while flooding 
#define NOT_VISITED -100

// this value is used to mark cells that are sea 
#define SEA  -101

// this value is used to label all points that are not flooded
#define REACHED_BUT_NOT_FLOODED -102 




typedef struct _point{
  int x,y;
} point;






/*
  simulates SLR flooding 0, rise_incr, 2*rise_incr, ... until rise >= rise_end
 
  pre: flooded_grid must exist 

  post: flooded_grid is set so that points that are not flooded are
  set to nodata, and points that have flooded are set to the rise at
  which they flood.

 */
void compute_flood_incrementally(const Grid* elev_grid, const float rise_incr,
				 const float rise_end,  Grid* flooded_grid); 
  




/*  Simulates SLR flooding with a sea level of <rise> starting from
    the points in the queue, which are assumed to be the starting
    front of the flood.
    
    Before the flood: flooded_grid is so that the points that have
    been reached by the flood are labeled as visited (SEA,
    REACHED_BUT_NOT_FLOODED, or a value > 0 which means they flood at that
    rise), and the points that have not been reached by the flood are
    marked as NOT_VISITED.

    After the flood, flooded_grid is updated to include the points
    that have been flooded as a result of this flood.
   
    returns the end boundary of the flood
 */
std::queue<point> compute_flood_from_queue(const Grid* elevGrid, Grid* floodedGrid,
					   const float rise,
					   std::queue<point>& queue); 


#endif /* flood_hpp */
