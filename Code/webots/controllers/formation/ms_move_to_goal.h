////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                //
// This file contains the definitions related to the motorschema 'move_to_goal'.                  //
//                                                                                                //
////////////////////////////////////////////////////////////////////////////////////////////////////


//#ifndef MS_AV_STAT_OB_H
//#define MS_AV_STAT_OB_H

#include "robot_state.h"


// includes

//#include <???>



// definitions

//#define WHATEVER



// initializations

//int dummy = 1



// methods

//float * get_move_to_goal_vector(int robot_id);

void update_move_to_goal_vector(int robot_id, float speed[4][2], float MIGRATION_WEIGHT);


//#endif
