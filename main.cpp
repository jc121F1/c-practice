
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

void creating2DVectors(){
    // create a vector of vectors. Essentially a 2d array.
    int outersize = 10;
    int innersize = 10;
    // this allows us to create a 2d vector where the outer vector is of size outersize, and inner vector is of size innersize
    // so a vector of size outersize, each containing a vector of size innersize
    vector<vector<int>> myVector(outersize, vector<int> (innersize));
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

void iterateThroughAVector(){
    vector<vector<int>> outerVector(10);
    // for each section of the vector
    for(int outer = 0; outer < outerVector.size(); outer++){
        // get the vector stored in this section
        vector<int> innerVector = outerVector[outer];
        for(int inner = 0; inner < innerVector.size(); inner++){
            // print it out to the console
            cout << outerVector[outer][inner] << "";
        }
        cout << endl;
    }
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

class Coordinate{
    protected:
        int x;
        int y;

public:
    Coordinate(int xIn, int yIn)
    // both colon initialisation of variables, and initialisation within the executable code is valid.
    : x(xIn), y(yIn){
        x = xIn;
        y = yIn;


    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    int setX(int xIn){
        x = xIn;
    }
    int setY(int yIn){
        y = yIn;
    }
};

void coordinateClassExample(){

    // create a coordinate a and then set b to be a copy of coordinate a
    // rather than referencing the original object, C++ will make a copy
    Coordinate a(4, -3);
    Coordinate b = a;

    cout << a.getX() << endl; // 4
    cout << b.getX() << endl; // 4

    // so now if we change the X value of coordinate A
    a.setX(8);

    // we see that A changes but B doesn't
    cout << a.getX() << endl; // 8
    cout << b.getX() << endl; // 4
}

void creatingAVectorOfObjects(){
    // in C++ you cannot create a vector of objects if that object does not have a default constructor with no arguments
    // so the line "vector<Coordinate> coordinates" will not compile.
    // to get around this, we can do the following

    // create a vector of size 0(empty)
    vector<Coordinate> coords;
    // then add an extra space to the vector, and fill it with the specified coordinated.
    coords.push_back(Coordinate(4,-2));
    coords.push_back(Coordinate(3,17));
}

void youCanCompareStrings(){
    string a = "Dave";
    string b = "Dave";

    // because variables store the object, rather than a reference to the object, you are able to compare strings
    // this doesn't work for all objects. We need to create an equality method in any bespoke objects to support this functionality.
    // We can also implement greater than and less than operators.
    if (a == b){
        cout << "Dave is Dave\n";
    }
}

class Student{
protected:
    vector<double> marks;
    string studentName;
    int studentId;
public:
    Student(string studentNameIn, int studentIdIn)
    : studentName(studentNameIn), studentId(studentIdIn),marks(10){
    }
    void setMark(int assignment, double mark){
        marks[assignment] = mark;
    }
    double getMark(int assignment) const {
        return marks[assignment];
    }
    double sumMarks() const{
        double sum = 0;
        for(int i = 0; i < marks.size(); i++){
            sum += marks[i];
        }
        return sum;
    }

    const int & getStudentId() const {
        return studentId;
    }

    const string & getStudentName(){
        return studentName;
    }

    bool operator==(const Student & other) const{
        return (studentId == other.getStudentId());
    }

    bool operator>(const Student & other) const{
        return (sumMarks() > other.sumMarks());
    }

};

// theres no ArrayIndexOutOfBounds exception
// if you try to read from outside the array, C++ will just read whatever is next in memory
int main() {
    helloWorld();
    coordinateClassExample();
}


