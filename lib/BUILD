cc_library(
    name = "testlib",
    srcs = ["testlib.cc"],
    hdrs = ["testlib.h"],
	deps = [":test_cc_proto"],
    visibility = ["//main:__pkg__"],
)

cc_proto_library(
    name = "test_cc_proto",
    deps = [":testproto"],
)

proto_library(
    name = "testproto",
    srcs = ["test.proto"],
)
