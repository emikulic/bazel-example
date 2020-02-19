load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_test")

cc_binary(
    name = "hello",
    srcs = ["hello.cc"],
    deps = [
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/flags:parse",
        "@com_google_absl//absl/strings:str_format",
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
