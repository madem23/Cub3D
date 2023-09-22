# Cub3D

<a href="https://pytorch.org/" target="_blank"> <img align="left" src="https://skillicons.dev/icons?i=c," alt="pytorch" height="42px"/> </a>

This project aims at creating a maze inspired by Wolfenstein3D, using a simple raycaster.

Graphic library: Linux version of minilibx (42 custom graphic library) can be found on github: 
https://github.com/42Paris/minilibx-linux

The engine itself is a C adaptation of lodev's C++ raycaster:
https://lodev.org/cgtutor/raycasting.html

## Usage
Git clone the repository and cd into it. Then use ```make bonus``` to compile.

Then run it with :

```shell
./cube3d maps/<1/2/3>_bonus.cub
```
- The W, A, S and D keys move up, down, left and right the player's point of view.
- The left and right arrow keys rotate the field of view of the player.
- Pressing ESC or the red cross on the window's frame must close the window and quit the program cleanly.
- Additionally for the bonus part, if you press the spacebar in front of a door you can open or close it.


### Program Constraints:
This 3D game must follow the following rules:
- The executable cub3D must receive at least one argument, a map (.cub file)
- The first few lines must contain a wall orientation, written as NO,SO,WE,EA, followed by a path to an .xpm image for the wall texture
- The RGB color for the floor and ceiling is shown as F or C followed by the RGB coordinates
- Possible characters: (empty), 0 (floor), 1 (wall) and N,S, W, E (player's view direction), D for doors, S for sprites
- The map must be surrounded by walls, even the empty spaces.


