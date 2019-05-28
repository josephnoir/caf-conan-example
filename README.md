# CAF with Conan

Sample project for CAF with Conan. Requirements:

* Have Conan installed (e.g., `pip3 install --user conan`, add `~/.local/bin` to `PATH`) 
* Have Cmake installed (usually available via system package manager)
* (Internet access)

## Build 

This will pull the recipe for CAF from [bincrafters](https://bintray.com/beta/#/bincrafters/public-conan/caf:bincrafters?tab=overview) and build it with dependencies, then build the local main and link CAF.

```
$ mkdir build
$ cd build
$ cmake ..
$ make
```
