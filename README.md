# Mongo-cxx-dirver precompiled shared library
This project holds the precompiled mongo-cxx-driver (compiled on a linux machine with clangd and cmake).
Then, the created shared object was extracted along with the header files from the source project.

## Build

### Meson

Add the following `mongocxx.wrap` to your `subprojects` directory:
```
[wrap-git]
url = git@github.com:makredzic/mongocxx.git
revision = HEAD
```

In the **project root** meson build file, use `dependency('mesoncxx')` to fetch the `mesoncxx` dependency.
