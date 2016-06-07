//
// Created by veter on 07.06.16.
//

#include "matr.h"


//
// Created by veter on 31.05.16.
//

#include "matr.h"





namespace operations_research{

    Matrix::Matrix(std::vector<std::vector<int64>> &vec, std::vector<int64> demands, std::vector<int64 > v_capacities)
    {
        this->size = vec.size();

        this->matrix_.reset(new int64[size * size]);

        this->dems = demands;
        this->vcaps = v_capacities;


        for (RoutingModel::NodeIndex from = RoutingModel::kFirstNode; from < size;
             ++from) {
            for (RoutingModel::NodeIndex to = RoutingModel::kFirstNode; to < size;
                 ++to) {
                if (to != from) {
                    matrix_[MatrixIndex(from, to)] = vec[from.value()][to.value()];
                } else {
                    matrix_[MatrixIndex(from, to)] = 0LL;
                }
            }
        }

    }


    int64 Matrix::Distance(RoutingModel::NodeIndex from, RoutingModel::NodeIndex to) const{
        return matrix_[MatrixIndex(from, to)];
    }

    int Matrix::getSize()const{
        return this->size;
    }


    std::vector<int64> Matrix::getDemands() {return this->dems;}



    int64 Matrix:: demandForANode(RoutingModel::NodeIndex from , RoutingModel::NodeIndex to){
        return this->dems.at(from.value());

    }


    int64 Matrix::getVehicleCapicity(int64 num){

        return this->vcaps.at(num);
    }



    int64 Matrix::MatrixIndex(RoutingModel::NodeIndex from,
                              RoutingModel::NodeIndex to) const {
        return (from * size + to).value();
    }








}

