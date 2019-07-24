# Karina - The Universal Podcast Player

## 1. How to build the project and run it
1.1 Creating a build directory (open a terminal and navigate to the Karina directory)

`mkdir build`

1.2 Building and compiling Karina

`cmake -j $(nproc) -S ./ -B ./build/`

`cd ./build/`

`make`

1.3 Runing Karina to see if everything works

`./Karina`
