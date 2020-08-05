#include <cstdlib>
#include <string>

const std::string org_dept = "1.4.444.90004.223.";

std::string uidgen() {
  
  unsigned int suffix = std::rand() * std::rand();
  return org_dept + std::to_string(suffix);
}
