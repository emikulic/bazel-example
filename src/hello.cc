#include <iostream>

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"

ABSL_FLAG(std::string, name, "world", "Who to say hello to");

int main(int argc, char** argv) {
  absl::ParseCommandLine(argc, argv);
  std::cout << "Hello " << absl::GetFlag(FLAGS_name) << ".\n";
}
