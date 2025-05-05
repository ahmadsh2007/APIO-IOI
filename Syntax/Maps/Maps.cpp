#include <iostream>
#include <vector>

#include <map>

struct CityRecord{
    std::string Name;
    int Population; 
    double Latitude, Longitude;
};

int main(){
    std::vector<CityRecord> cities;

    cities.emplace_back("Massachusetts", 500000, 2.4, 9.4);
    cities.emplace_back("NewYork", 100000, 3.4, 8.4);
    cities.emplace_back("Dublin", 300000, 5.4, 13.4);
    cities.emplace_back("Irbid", 800000, 1.4, 17.4);

    for(const auto& city: cities){
        if(city.Name == "Massachusetts"){
            city.Population;
            break;
        }
    }

    std::map<std::string, CityRecord> cityMap;
    cityMap["Massachusetts"] = CityRecord {"Massachusetts", 500000, 2.4, 9.4};
    cityMap["NewYork"] = CityRecord {"NewYork", 100000, 3.4, 8.4};
    // cityMap["Dublin"] = CityRecord {"Dublin", 300000, 5.4, 13.4};
    cityMap["Irbid"] = CityRecord {"Irbid", 800000, 1.4, 17.4};

    CityRecord& MassachusettsData = cityMap["Massachusetts"];
    MassachusettsData.Population;

    CityRecord& DublinData = cityMap["Dublin"]; // adds if not found, and can't be used with const maps
    DublinData.Name = "Dublin";

    CityRecord& DublinData = cityMap.at("Dublin"); // doesn't add if not found
    DublinData.Name = "Dublin";

    CityRecord BerlinData;
    BerlinData.Name = "Berlin";
    BerlinData.Population = 50;
    cityMap["Berlin"] = BerlinData;
} 
