config_setting(
    name = "disable_tcmalloc",
    values = {"define": "tcmalloc=disabled"},
)

# Empty library so we use the libc malloc.
cc_library(name = "default_malloc")

alias(
    name = "malloc",
    actual = select({
        ":disable_tcmalloc": ":default_malloc",
        "//conditions:default": "@com_google_tcmalloc//tcmalloc",
    }),
    visibility = ["//visibility:public"],
)
