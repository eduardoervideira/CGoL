# Seagull!
![seagull](https://images.pexels.com/photos/56618/seagull-sky-holiday-bird-56618.jpeg)
A "playground" for cellular automata. Initially just Conway's Game of Life (hence the name, C GoL...) \
In C++ with raw OpenGL :D

## Currently available controls:
- ESC: Closes the application;
- ENTER: Start/stop simulation;
- SPACE: Expand menu(s);
- M1 / LEFT MOUSE: Make cell "alive" at cursor;
- SHIFT + M1: "Kill" cell at cursor;
- R: Randomly fills the grid with "live" cells;
- C: Clears the grid;
- X: Toggle cursor shape;
- 1: [Brian's Brain](https://en.wikipedia.org/wiki/Brian's_Brain) Automaton;
- 2: [Day & Night](https://en.wikipedia.org/wiki/Day_and_Night_(cellular_automaton)) Automaton;
- 3: Disease Automaton (a variation on Life);
- 4: [Live Free or Die](https://conwaylife.com/wiki/OCA:Live_Free_or_Die) Automaton;
- 5: [Life](https://en.wikipedia.org/wiki/Conway's_Game_of_Life) Automaton;
    - P: Toggles plague mode (Only available when Life is active);
- 6: Rule 0 Automaton - Kinda Snowflake-y;
- 7: Rule 180 Automaton - Vertical Rule90;
- 8: [Rule 90](https://en.wikipedia.org/wiki/Rule_90) Automaton;
- 9: [Seeds](https://en.wikipedia.org/wiki/Seeds_(cellular_automaton)) Automaton;
- 0: Sand Simulation;
    - W: Toggles between Water and Sand cells;
    - CTRL + Click: Immovable cells;
- "+": Step once through simulation*;
- SHIFT + "+": Continuously step through simulation*;
- ARROW UP & DOWN: Increase/decrease tickrate (higher is slower);
- ARROW RIGHT & LEFT: Increase/decrease cell size (SHIFT + KEY increases more per click);
- "." & ",": Increase/decrease cursor radius;

\* GLFW reads this as GLFW_KEY_EQUAL on MacOs so it might not be the same key depending on your layout.

## Build instructions -- REQUIRES CMAKE, g++ COMPILER AND GLFW3
Copy into your terminal while on the parent directory:

```sh
cmake -B build --fresh && cmake --build build
```

If everything goes as it's supposed to, you should find the built executable in the bin directory.
If you're on Windows, good luck!

To run it:
```sh
./bin/cgol
```
