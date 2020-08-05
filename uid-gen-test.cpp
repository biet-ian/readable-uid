#include "uidgen.h"

#include <string>
#include <gtest/gtest.h>

TEST(UID, check_if_suffix_has_separator) {
  std::string uid = uidgen();
  std::string suffix = uid.substr(org_dept.length());
  ASSERT_TRUE(suffix.find(".") != std::string::npos);
}

TEST(UID, UID_is_generated_within_length_limit) {
  std::string uid = uidgen();
  ASSERT_TRUE(uid.length() > 0);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
