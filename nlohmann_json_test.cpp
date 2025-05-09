#include <iostream>
#include <iomanip>
#include <nlohmann/json.hpp>
#include <fstream> // For file reading/writing

//  c++ task-cli.cpp -I$(brew --prefix nlohmann-json)/include -std=c++11 -o task-cli
// We must use the command above (^) to run this file since nlohmann-json is an external library


using namespace std;
using json = nlohmann::json; // For working with JSON objects

int main() {
    
    cout << "Hello World!";

    json j;
    json j2;

    j["pi"] = 3.14;
    j["happy"] = true;
    j["fname"] = "Veer";
    j["lname"] = "Gaudani";
    
    j2["fname"] = "Joe";
    j2["lname"] = "Smith";
    

    ofstream file("test_storage.json");
    file << j.dump(4);
    file.close();

    ofstream file2("test_storage.json", ios::app);
    file2 << j2.dump(4);
    file2.close();


    return 0;
}
