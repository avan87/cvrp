//
// Created by veter on 07.06.16.
//

#ifndef CVRP_MAIN_H
#define CVRP_MAIN_H

#include "constraint_solver/routing.h"
#include "matr.h"

namespace operations_research {

    class VRPSolver{

    public:
        std::vector<std::vector<int64>>  SolveVRP (Matrix& matrix, int64 num_v);


    };


}



#endif //CVRP_MAIN_H
