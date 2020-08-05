#include <cstdlib>
#include <string>

const std::string org_dept = "1.4.444.90004.223.";

std::string uidgen() {
  std::string suffix_ = std::to_string(std::rand() * std::rand());
  suffix_.insert(suffix_.length()/2,".");
  return org_dept + suffix_;
}
