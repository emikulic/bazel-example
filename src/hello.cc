#include <iostream>

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "absl/strings/str_format.h"
#include "glog/logging.h"

ABSL_FLAG(std::string, name, "world", "Who to say hello to");

int main(int argc, char** argv, char** env) {
  FLAGS_logtostderr = true;
  google::InitGoogleLogging(argv[0]);
  absl::ParseCommandLine(argc, argv);
  LOG(INFO) << "Running.";
  std::cout << absl::StreamFormat("Hello %s.\n", absl::GetFlag(FLAGS_name));
}
