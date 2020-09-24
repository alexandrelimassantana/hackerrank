#include <bits/stdc++.h>

using namespace std;

// Complete the organizingContainers function below.
string organizingContainers(vector<vector<int>> container) {
    vector<int> nballs;             // Number of balls for each ball type
    vector<int> in_container;       // Total of ball in each container
    auto unique = container.size(); // Number of unique containers/ball types

    // Initialize temporary arrays
    for(int i = 0; i < unique; ++i) {
        nballs.push_back(0);
        in_container.push_back(0);
    }

    // Count the number of balls in each container and ball for each type
    for(int i = 0; i < unique; ++i) {
        for(int w = 0; w < unique; ++w) {
            nballs[w] += container[i][w];
            in_container[i] += container[i][w];
        }
    }

    // Align the numeric values for comparation
    sort(nballs.begin(), nballs.end());
    sort(in_container.begin(), in_container.end());

    // If numbers are not aligned, it is not possible
    for(int i = 0; i < unique; ++i)
        if(nballs[i] != in_container[i])
            return "Impossible";
    return "Possible";
}

int main(int argc, const char *argv[])
{
    int matrix_size = atoi(argv[1]);
    vector<vector<int>> matrix;
    
    for(int i = 0; i < matrix_size; ++i) {
        matrix.push_back(vector<int>());
        for(int w = 0; w < matrix_size; ++w)
            matrix.back().push_back(atoi(argv[i*matrix_size+w+1]));
    }
    cout << organizingContainers(matrix) << endl;

    return 0;
}