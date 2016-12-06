#include "lab.h"
#include "sstream"
#include "json.hpp"
using nlohmann::json;
BMIInfo getAPIInfo()
{
    std::ostringstream oss; oss << wi->value();
    std::ostringstream oss2; oss2 << hi->value();
    std::string s = searchAPI(oss.str(),oss2.str());
    std::cout << "s" <<  s << std::endl;
    while(s.back()!='}') s.pop_back();
    auto j = json::parse(s);
    BMIInfo bi;
    std::string value =  j["bmi"]["value"];
    std::cout << value << std::endl;
    bi.status = j["bmi"]["status"];
    bi.risk = j["bmi"]["risk"];
    std::istringstream iss(value);
    iss >> bi.value;
    return bi;
}
