#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::cout;
using std::endl;

void helloWorld(){
    std::cout << "Hello World!\n";
}

void fillWithNumbers(){
    // create a vector with a storage size of 10
    vector<int> numbers(10);
    // fill each spot in the vector with a value(from 0 to 9)
    for (int i = 0; i < 10; ++i){
        numbers[i] = i;
    }
    // resize the vector to be larger
    numbers.resize(20);
}

void aVectorOfVectors_2DVectors(){
    vector<vector<int>> myVector(10);
    for(int i = 0; i < myVector.size(); i++){
        for(int j = 0; j < myVector[i].size(); j++){
            cout << myVector[i][j] << "";
        }
        cout << endl;
    }

}


int main() {
    helloWorld();
    aVectorOfVectors_2DVectors();
}


