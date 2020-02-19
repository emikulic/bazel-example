load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_test")

cc_test(
    name = "asan_test",
    srcs = ["asan_test.cc"],
    malloc = "//:malloc",
    deps = ["@com_google_googletest//:gtest_main"],
)

cc_binary(
    name = "hello",
    srcs = ["hello.cc"],
    malloc = "//:malloc",
    deps = [
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/flags:parse",
        "@com_google_absl//absl/strings:str_format",
        "@com_google_glog//:glog",
    ],
)

cc_library(
    name = "square",
    srcs = ["square.cc"],
    hdrs = ["square.h"],
)

cc_test(
    name = "square_test",
    srcs = ["square_test.cc"],
    deps = [
        ":square",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "square_benchmark",
    srcs = ["square_benchmark.cc"],
    deps = [
        ":square",
        "@com_github_google_benchmark//:benchmark_main",
    ],
)
