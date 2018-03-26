cc_library(
    name = "testlib",
    srcs = ["testlib.cc"],
    hdrs = ["testlib.h"],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        "//lib:testlib",
    ],
)
