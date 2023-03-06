# So_long
## :books: About the project
The objective of this project is to create a small 2D game where the player has to collect all the collectibles and go to the exit.

## Score
![score](https://user-images.githubusercontent.com/106436743/223164850-a35c44c1-c885-4e89-aa07-1a066dd5594e.jpg)

## :warning: Mandatory
* Use the school's graphic library: MiniLibX! This library was developed in-house and includes basic tools needed to open a window, create images and handle keyboard and mouse events.
* Your program has to take as parameter a map description file ending with the .ber extension.
* The player’s goal is to collect every collectible present on the map, then escape chosing the shortest possible route.
* The W, A, S, and D keys must be used to move the main character.
* The player should be able to move in these 4 directions: up, down, left, right.
* The player should not be able to move into walls.
* At every move, the current number of movements must be displayed in the shell.
* You have to use a 2D view (top-down or profile).
* The game doesn’t have to be real time.
* Your program has to display the image in a window.
* The management of your window must remain smooth (changing to another window, minimizing, and so forth).
* Pressing ESC must close the window and quit the program in a clean way.
* Clicking on the cross on the window’s frame must close the window and quit the program in a clean way.
* The use of the images of the MiniLibX is mandatory.
* The map has to be constructed with 3 components: walls, collectibles, and free space.
* The map can be composed of only these 5 characters:
  - 0 for an empty space,
  - 1 for a wall,
  - C for a collectible,
  - E for a map exit,
  - P for the player’s starting position.
* The map must contain 1 exit, at least 1 collectible, and 1 starting position to be valid.
* The map must be rectangular.
* The map must be closed/surrounded by walls. If it’s not, the program must return an error.
* You have to check if there’s a valid path in the map.
* You must be able to parse any kind of map, as long as it respects the above rules.

## :computer: Compiling the project
The library is written in C language and thus needs the -cc compiler and some standard C libraries to run.

**Instruction**
1. Compiling the project

         $ make

2. Execute the program

         $ ./so_long maps/valid/map1.ber

     ![Captura de tela de 2023-03-06 16-19-49](https://user-images.githubusercontent.com/106436743/223169151-03c1eb77-92cc-4940-a878-5aeaf1cbdb20.png)
     
