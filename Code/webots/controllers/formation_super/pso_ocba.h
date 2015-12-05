////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                //
// This file contains the declarations related to the PSO OCBA algorithm.                         //
//                                                                                                //
////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef PSO_OCBA_H
#define PSO_OCBA_H



// includes

//#include "something.h"



// definitions

// PSO general parameters
#define DIMENSIONALITY        2
#define POPULATION_SIZE      20     // nb particles
#define NB_NEIGHBOURS        20     // size of neighbourhoods
#define EVALUATION_SPAN      30     // max time (in seconds) of evaluation run
#define PERSONAL_WEIGHT       2     // PSO function parameter
#define NEIGHBOURHOOD_WEIGHT  2     // PSO function parameter
#define INERTIA               0.8   // PSO function parameter
#define V_MAX                 3     // max velocity of particles
#define NORMALIZED_BORDER    10

// PSO OCBA specific parameters
#define NB_ITERATIONS 10
#define ITERATION_BUDGED 150    // ca. 10 * nb_parameter
#define N_ZERO 2                // nb initial evaluations
#define DELTA 4                 // nb samples for 'remaining-budged evaluations'



// declarations

float parameter_ranges[DIMENSIONALITY][2];          // each parameter's valid range (min and max)
float velocities[POPULATION_SIZE][DIMENSIONALITY];  // each particle's current velocity
float positions[POPULATION_SIZE][DIMENSIONALITY];   // each particle's current position
float neighbours[POPULATION_SIZE][NB_NEIGHBOURS];   // each particle's neighbours
float perf_mean[POPULATION_SIZE];                   // each particle's current mean performance 
float perf_var[POPULATION_SIZE];                    // each particle's current performance variance
int perf_samples[POPULATION_SIZE];                  // nb samples for each particle's perf mean/var
float p_best_pos[POPULATION_SIZE][DIMENSIONALITY];  // each particle's best position
float p_best_val[POPULATION_SIZE];                  // each particle's best performance
float n_best_pos[POPULATION_SIZE][DIMENSIONALITY];  // best position in each particle's neighbourhood
float n_best_val[POPULATION_SIZE];                  // best performance in each particle's neighbourhood


// methods

void pso_ocba(float parameters[DIMENSIONALITY]);


#endif