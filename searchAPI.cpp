#include "lab.h"
#include <curl/curl.h>
const std::string url = "https://bmi.p.mashape.com";
const std::string key = 
"X-Mashape-Key: 0PXIy4DqFamshCasU4dEwk47Gso8p1W4mFYjsnTi4u3VejSc5d";
const std::string type = "Content-Type: application/json";
const std::string js = "Accept: application/json";
//const std::string data = "{"weight":{"value":"85.00","unit":"kg"},"height":{"value":"170.00","unit":"cm"},"sex":"m","age":"24","waist":"34.00","hip":"40.00"}";
size_t handleData(void* c, size_t s, size_t n, void* j)
{
    *static_cast<std::string*>(j) += static_cast<char*>(c);
    return s * n;
}
std::string searchAPI(std::string wi,std::string hi)
{
    std::string s = "";
    struct curl_slist* slist1 = NULL;
    slist1 = curl_slist_append(slist1,key.c_str());
    slist1 = curl_slist_append(slist1,type.c_str());
    slist1 = curl_slist_append(slist1,js.c_str());
    std::string q = "{\"weight\":{\"value\":"+ wi +",\"unit\":\"lb\"},\"height\":{\"value\":"+ hi +",\"unit\":\"in\"},\"sex\":\"m\",\"age\":\"24\",\"waist\":\"34.00\",\"hip\":\"40.00\"}";
    std::cout << "q" << q << std::endl;
    CURL* hnd = curl_easy_init();
    curl_easy_setopt(hnd,CURLOPT_URL,url.c_str());
    curl_easy_setopt(hnd,CURLOPT_HTTPHEADER,slist1);
    curl_easy_setopt(hnd,CURLOPT_WRITEFUNCTION,handleData);
    curl_easy_setopt(hnd,CURLOPT_WRITEDATA,&s);
    curl_easy_perform(hnd);
    curl_easy_cleanup(hnd);
    std::cout << "s" << s << std::endl;
    return s; //gif info
}
