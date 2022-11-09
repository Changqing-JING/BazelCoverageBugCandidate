cc_library(
    name = "lib1",
    srcs = ["lib1.cpp"],
    hdrs = ["lib1.h"]
)

cc_test(
    name = "test_lib1",
    srcs = ["test.cpp"],
    deps = [
        ":lib1"
    ],
)
