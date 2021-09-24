#include <iostream>
#include <vector>
#include <string>
// shortens so I can just use vector, cout, endl, and string instead of std::vector ......
using std::vector;
using std::cout;
using std::endl;
using std::string;

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
    // create a vector of vectors. Essentially a 2d array.
    vector<vector<int>> myVector(10);
    // for each section of the vector
    for(int i = 0; i < myVector.size(); i++){
        // get the vector stored in this section
        for(int j = 0; j < myVector[i].size(); j++){
            // print it out to the console
            cout << myVector[i][j] << "";
        }
        cout << endl;
    }

}

void playingWithStrings(){
    // showcasing how string concatenation works
    string a = "And";
    string b = "rew";
    string c = a + b;
    // can also access a string letter by letter, as it is a vector essentially
    cout << c << endl;
    c[5] = 'i';
    // c will now be outputted.
    cout << c << endl;
}

int main() {
    helloWorld();
    aVectorOfVectors_2DVectors();
    playingWithStrings();
}


