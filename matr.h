//
// Created by veter on 07.06.16.
//

#ifndef CVRP_MATR_H
#define CVRP_MATR_H


#include "constraint_solver/routing.h"


namespace operations_research  {



    class Matrix
    {
    public:
        Matrix(std::vector<std::vector<int64>> &vec, std::vector<int64> demands, std::vector<int64 > v_capacities);

        int64 Distance(RoutingModel::NodeIndex from, RoutingModel::NodeIndex to) const;

        int getSize()const;

        std::vector<int64>getDemands();

        int64 getVehicleCapicity(int64 num);

        int64 demandForANode(RoutingModel::NodeIndex from , RoutingModel::NodeIndex to);

    private:

        int64 MatrixIndex(RoutingModel::NodeIndex from, RoutingModel::NodeIndex to) const;

        std::unique_ptr<int64[]> matrix_;
        int size;

        //demands for each node
        std::vector<int64> dems;

        //capacities for each vehicle

        std::vector<int64> vcaps;


    };


}

#endif //CVRP_MATR_H
