// Cole O'Shaughnessy
// September 7, 2022
// CS 124
// The purpose of this program is to take a data set of
// Formula 1 races and sort them

#ifndef PROJECT1_F1
#define PROJECT1_F1

// Includes
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using std::ifstream, std::ostream, std::string, std::vector;
using std::cout, std::endl, std::left, std::right, std::setw;

// Class Race
class Race {
private:
    int points, year;
    string driver, car, gp, fastLap, position;

public:
    // Default Constructor
    Race() {
        driver = "Cole O";
        car = "The Bug";
        gp = "Winooski Circle";
        fastLap = "yes";
        position = "1";
        points = 100;
        year = 2022;
    }

    // Alternative Constructor
    Race(string driver, string car, string gp, string fastLap, string position, int points, int year) {
        this->driver = driver;
        this->car = car;
        this->gp = gp;
        this->fastLap = fastLap;
        this->position = position;
        this->points = points;
        this->year = year;
    }

    // Getters
    string getDriver() const {
        return driver;
    }
    string getCar() const {
        return car;
    }
    string getGp() const {
        return gp;
    }
    string getFastLap() const {
        return fastLap;
    }
    string getPosition() const {
        return position;
    }
    int getPoints() const {
        return points;
    }
    int getYear() const {
        return year;
    }

    // Setters
    void setDriver(string driver) {
        this->driver = driver;
    }
    void setCar(string car) {
        this->car = car;
    }
    void setGp(string gp) {
        this->gp = gp;
    }
    void setFastLap(string fastLap) {
        this->fastLap = fastLap;
    }
    void setPosition(string position) {
        this->position = position;
    }
    void setPoints(int points) {
        this->points = points;
    }
    void setYear(int year) {
        this->year = year;
    }

    // Overloaded print
    friend ostream& operator << (ostream& outs, const Race& race) {
        outs << left << setw(30) << race.getDriver();
        outs << setw(8) << race.getPosition();
        outs << left << setw(25) << race.getCar();
        outs << setw(5) << race.getYear();
        outs << setw(15) << race.getGp();
        outs << right << setw(7) << race.getPoints();
        outs << setw(9) << race.getFastLap();
        return outs;
    }

    // Overloaded Equals
    // Data set does not have unique attributes so we must check a few
    friend bool operator == (const Race& lhs, const Race& rhs) {
        return lhs.driver == rhs.driver && lhs.gp == rhs.gp && lhs.year == rhs.year;
    }
};

// Fill the vector with data
int getDataFromFile(string filename, vector<Race>& races) {
    // Open file
    ifstream inFile;
    inFile.open(filename);

    // Create heading
    string heading;
    if (inFile) {
        getline(inFile, heading);
    } else {
        cout << "Could not open file. :/" << endl;
        return 0;
    }

    // Declare Variables
    string driver = "", car = "", gp = "", fastLap = "", junk, position = "";
    int points = 0, year = 0, count = 0;
    char comma;

    // Read in sections
    while (inFile && inFile.peek() != EOF) {
        // Read in position
        getline(inFile, position, ',');
        inFile >> comma;

        // Junk number
        getline(inFile, junk, ',');
        //inFile >> comma;

        // Driver
        getline(inFile, driver, ',');

        // Car
        getline(inFile, car, ',');

        // Junk laps and time
        getline(inFile, junk, ',');
        inFile >> comma;
        getline(inFile, junk, ',');
        //inFile >> comma;

        // Points
        inFile >> points;
        inFile >> comma;

        // Grand Prix
        getline(inFile, gp, ',');

        // Year
        inFile >> year;
        inFile >> comma;

        // Fastest Lap
        getline(inFile, fastLap);

        // Store info in a Race object
        races.push_back(Race(driver, car, gp, fastLap, position, points, year));
        ++count;
    }

    inFile.close();
    return count;
}

int fileTest(string fileName) {
    // Open file
    ifstream inFile;
    inFile.open(fileName);

    // Declare Variables
    int rows = 0;
    string line = "";

    while (getline(inFile, line)) {
        ++rows;
    }
    inFile.close();
    --rows;
    return rows;

}

#endif //PROJECT1_F1
