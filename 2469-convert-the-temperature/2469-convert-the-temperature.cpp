class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>temp;
        temp.push_back(celsius+273.15);
        temp.push_back( celsius * 1.8+32.0);
        return temp;
        
    }
};