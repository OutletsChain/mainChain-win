#pragma once 
namespace thinkyoung { 
    namespace client { 
#ifndef ALP_TEST_NETWORK 
    static const std::vector<std::string> SeedNodes = {
"172.16.80.92:62896"
 }; 
#else 
 static const std::vector<std::string> SeedNodes { }; 
#endif
} 
} // thinkyoung::client 
