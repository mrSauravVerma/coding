#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include <algorithm> // for std::shuffle
#include <vector>    // for std::vector

using namespace std;

class Q
{
  public:
    void project(string data[], int size)
    {
        srand(time(NULL)); // Initialize random seed
        // Generate a random index within the specified range
        int randomIndex = rand() % size;
        cout << data[randomIndex] << endl;
    }
};

int main()
{
    Q obj;
    string data[] = {
        "Basic Syntax",
        "Variables and Data Types",
        "Operators",
        "Control Structures (loops and conditionals)",
        "Functions",
        "Classes and Objects",
        "Inheritance",
        "Polymorphism",
        "Templates",
        "Standard Template Library (STL)",
        "Exception Handling",
        "File I/O",
        "Memory Management",
        "Concurrency",
        "Lambda Expressions",
        "Move Semantics",
        "C++11/14/17/20 Features"};

    int size = sizeof(data) / sizeof(data[0]);

    // Shuffle the array of topics
    std::vector<string> topics(data, data + size);
    std::random_shuffle(topics.begin(), topics.end());

    // Print the first five topics
    for (int i = 0; i < 5; i++)
    {
        cout << "Question number " << i + 1 << " : ";
        cout << topics[i] << endl;
    }

    return 0;
}