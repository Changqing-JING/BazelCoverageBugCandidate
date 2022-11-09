This repo describes a bug candidate that exclusion markers when collect C++ code coverage

```shell
bazel coverage //src:test_lib1 --combined_report=lcov  && genhtml "$(bazel info output_path)/_coverage/_coverage_report.dat" -o bazel-coverage
```