# Overview
* This is a clock that tells time and a stopwatch built into 1 using Qt6.

# Screenshots
### Clock Preview:
<img width="839" height="677" alt="Screenshot 2026-03-25 173611" src="https://github.com/user-attachments/assets/2f441ac7-ff68-428f-8c54-6394e72f68f9" />

### Starting the timer:
<img width="801" height="630" alt="Screenshot 2026-03-25 173640" src="https://github.com/user-attachments/assets/cf1f66e1-d94c-45b0-a58f-cd4443658725" />
<img width="798" height="630" alt="image" src="https://github.com/user-attachments/assets/57c0b317-6162-4216-8378-57485f08ed1e" />

# Features
1. Clock uses the 'HH:MM:SS' format
2. Left-clicking the clock will turn it into a timer which you can click to start
3. Timer features the 'MM:SS:ms' format
4. Left-clicking the timer will stop the timer
5. Right-clicking the timer will make the clock pop up again but **will not stop the timer if its active.**

# Installation
### Requirements
1. C++17 or later
2. CMake version 3.16 or later
3. Ninja Generator
4. Qt 6.10.2 with **Widgets** and **Gui** libraries
5. Qt Extention pack **if you are using VSCode**

### Setup (Windows)
1. Ensure your compiler, generator, and Qt6 bin folder are already in your PATH variable
2. Make sure you have Qt 6.10.2 (heres the link if you dont have it: https://www.qt.io/development/download-qt-installer-oss )
1. Clone the repo: ```git clone https://github.com/marcdatboi/Qt-Clock-Timer.git```
2. go to the project directory: ```cd Qt-Clock-Timer```
3. Initialize cmake build folder: ```
cmake -S . -B build
cmake --build build
./build/testing```
# Notes
1. ```set(CMAKE_PREFIX_PATH)``` was used to locate your Qt folder so make sure to change that if you have problems
2. Ensure you have the header files in the ```add_executable()``` **function in CMakeLists.txt** so Qt can work
