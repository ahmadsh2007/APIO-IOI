#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main() {
    cout << "=== C++ Maps and Unordered Maps ===\n\n";

    // ================================
    // Part 1: map (ordered map)
    // ================================
    cout << "Part 1: map (ordered map)\n";
    
    // Create a map with int keys and string values
    map<int, string> orderedMap;

    // Inserting elements
    orderedMap[1] = "Apple";
    orderedMap[3] = "Banana";
    orderedMap[2] = "Cherry";

    // Maps are automatically sorted by key
    cout << "Ordered Map contents:\n";
    for (auto &pair : orderedMap) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << "\n";
    }

    // Accessing a value
    cout << "Value at key 2: " << orderedMap[2] << "\n";

    // Checking if a key exists
    int keyToCheck = 4;
    if (orderedMap.count(keyToCheck)) {
        cout << "Key " << keyToCheck << " exists in the map.\n";
    } else {
        cout << "Key " << keyToCheck << " does not exist in the map.\n";
    }

    // Erasing a key
    orderedMap.erase(1);
    cout << "After erasing key 1:\n";
    for (auto &pair : orderedMap) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << "\n";
    }

    // ================================
    // Part 2: unordered_map
    // ================================
    cout << "\nPart 2: unordered_map (no ordering)\n";

    // Create an unordered_map
    unordered_map<string, int> unorderedMap;

    // Inserting elements
    unorderedMap["Alice"] = 90;
    unorderedMap["Bob"] = 75;
    unorderedMap["Charlie"] = 85;

    // Note: unordered_map does not guarantee order
    cout << "Unordered Map contents:\n";
    for (auto &pair : unorderedMap) {
        cout << "Name: " << pair.first << ", Score: " << pair.second << "\n";
    }

    // Accessing a value
    cout << "Score of Alice: " << unorderedMap["Alice"] << "\n";

    // Checking if a key exists
    string nameToCheck = "David";
    if (unorderedMap.count(nameToCheck)) {
        cout << nameToCheck << " exists in the map.\n";
    } else {
        cout << nameToCheck << " does not exist in the map.\n";
    }

    // Erasing a key
    unorderedMap.erase("Bob");
    cout << "After erasing Bob:\n";
    for (auto &pair : unorderedMap) {
        cout << "Name: " << pair.first << ", Score: " << pair.second << "\n";
    }

    // ================================
    // Part 3: Differences Summary
    // ================================
    cout << "\n=== Summary: map vs unordered_map ===\n";
    cout << "- map stores keys in sorted order (logarithmic time operations)\n";
    cout << "- unordered_map stores keys in arbitrary order (constant time average case)\n";
    cout << "- map is implemented as a Red-Black Tree (balanced BST)\n";
    cout << "- unordered_map is implemented using Hash Tables\n";

    return 0;
}