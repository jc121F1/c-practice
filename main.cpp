#include <iostream>
#include <vector>
#include <string>
#include <fstream>
// shortens so I can just use vector, cout, endl, and string instead of std::vector ......
using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::ofstream;

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

void characters(){
    // characters can also be used
    // characters can be the letter, or ASCII code when you use ' rather than ".
    char c1 = 'A';
    char c2 = '65';

    cout << c1 << "\n";
    cout << c2 << "\n";
    // cout will convert booleans to output 1 if true and 0 if false
    cout << (c1 == c2) << "\n";
}

void files() {
    // this will create a file called filename.txt
    // and then write "hello disk" to it
    // note we feed writer text in the same way we feed cout text.
    ofstream writer("filename.txt");
    writer << "Hello disk\n";
}

void cDoesntInitialisePrimitives(){
    int x;
    if (x > 1000000){
        // this could evaluate to true or false because x hasn't been initialised yet
    }
}

// theres no ArrayIndexOutOfBounds exception
// if you try to read from outside the array, C++ will just read whatever is next in memory
int main() {
    helloWorld();
    aVectorOfVectors_2DVectors();
    playingWithStrings();
    characters();
    files();
}


