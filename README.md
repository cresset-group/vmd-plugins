The VMD mol file plugins supports reading and writing a number of molecule,
volume and trajectory files through a common interface.

We use a modified version of these plugins to allow them to be compiled into a static library.
The original plugins is available at https://www.ks.uiuc.edu/Development/Download/download.cgi?PackageName=VMD.

Build
=====

Windows Release
---------------
cd src/trunk
mkdir build
cd build
cmake -G "NMake Makefiles" "-DCMAKE_BUILD_TYPE=Release" ..
nmake

Windows Debug
-------------
cd src/trunk
mkdir build
cd build
cmake -G "NMake Makefiles" "-DCMAKE_BUILD_TYPE=Debug" ..
nmake

Linux & macOS
-------------
cd src/trunk
mkdir build
cd build
cmake ..
make
