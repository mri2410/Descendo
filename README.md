## Project Summary:

This project is a basis for a text based RPG game that we have been developing. It can be modified by implementing more options such as, more enemies, different areas, or longer battle. It has several transition phases to create a non restricted plot. It gives you an option to travel certain parts of the story and lets you interact with the environment/setting based on the player’s/user’s actions. The plot begins by searching for a long lost orb. You encounter a castle and hope to find clues to lead you to the orb that have special properties. A mysterious ghost is there to help and guide you to your epic mission of obtaining the orb. However, there are several obstacles you must face and conquer in order to continue your journey.

The unique feature of this project is the visual text files we have implemented during the battle scenes. Although this is a text based RPG game, we felt like animations will enhance the user’s imagination during the entire process of the program, rather than this being a read-only program.



## How to run:

Just download the zip file by clicking on the "Download zip" on the right. After downloading, you can use terminal/shell to run it. Just go to desired folder. If it is in the "Downloads" folder, you need to type:

$ cd Downloads/Descendo-master/

The program is written in Qt environment using C++ language. So type in the terminal:

$ qmake -o Makefile Descendo.pro

REVISED:
make sure there is no Makefile initially if so delete with:
rm -r Makefile

then run following lines
qmake
make

Then type:

$ ./Descendo

And the program will start. Enjoy!


## Unix philosophy:

The project follows the following Unix design philosophy:

    Rule of Modularity: Simple parts are connected by clean interfaces.

    Rule of Composition: The program is designed to be connected to other programs.

    Rule of Simplicity: The code is pretty simple to understand and complexity has been avoided as much as possible.

    Rule of Transparency: Inspection and debugging have been made easier. 

    Rule of Repair: If necessary files cannot be found, it uses Exception handling.

