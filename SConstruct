#!/usr/bin/env python

libname = "libgdGame"

env = SConscript("godot-cpp/SConstruct")

env.Append(CPPPATH=["src/"])
sources = Glob("src/*.cpp")

if env["platform"] == "windows":
    library = env.SharedLibrary(
        "game/bin/{}{}{}".format(libname, env["suffix"], env["SHLIBSUFFIX"]),
        source=sources,
    )

Default(library)