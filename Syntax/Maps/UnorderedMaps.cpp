#include <iostream>
#include <vector>
#include <cstdint> // for unit32_t

#include <unordered_map>

struct CityRecord{
    std::string Name;
    int Population; 
    double Latitude, Longitude;
};

namespace std{
    template<>
    struct hash<CityRecord>
    {
        size_t operator()(const CityRecord& key){
            return hash<std::string>()(key.Name);
        }
    };
    
}

int main(){
    std::unordered_map<CityRecord, uint32_t> foundedMap;
    foundedMap[CityRecord{"Massachusetts", 500000, 2.4, 9.4}] = 1788;
}
