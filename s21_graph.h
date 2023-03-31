#ifndef UNTITLED_S21_GRAPH_H
#define UNTITLED_S21_GRAPH_H


#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

class Graph {
public:
    struct matrixMade {

    };

    void loadGraphFromFile(std::string filename) {

        int j = 0;
        matrixMade ownMatrix;
        std::string str;
        std::ifstream in(filename, std::ios::in);
        if (!in.is_open()) {
            std::cout << "Error!" << std::endl;
        }
        getline(in, str);

        ownMatrix.dimension = std::stoi(str);

        int array[ownMatrix.dimension];
        while (getline(in, str)) {
            arrayCreator(str, array);
            for (int i = 0; i < ownMatrix.dimension; i++) {
                ownMatrix.matrix[j][i] = array[i];
                std::cout << ownMatrix.matrix[j][i];
                std::cout << " ";
            }
            std::cout << std::endl;
            j++;
        }

    };

    int exportGraphToDot(std::string filename) {
        return 0;
    };

    void showMadeMatrix(void) {
        matrixMade own;
        for (int i = 0; i < own.dimension; i++) {
            for (int j = 0; j < own.dimension; j++) {
                std::cout << own.matrix[i][j];
                std::cout << " ";
            }
            std::cout << std::endl;
        }
    };

private:

    void arrayCreator(std::string info, int *array) {
        std::stringstream ss(info);
        int word;
        int index = 0;
        while (ss >> word) { // Extract word from the stream.
            array[index] = (int) word;
            index++;
        }
    }

};

#endif //UNTITLED_S21_GRAPH_H
