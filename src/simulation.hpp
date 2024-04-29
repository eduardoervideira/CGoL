#ifndef SIMULATION_HPP
#define SIMULATION_HPP

// #include <mach-o/dyld.h> // MacOS only!!
#include <unistd.h>

#include "automaton.hpp"
#include "cursor.hpp"

#define GLAD_GL_IMPLEMENTATION
#include <glad/glad.h>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

const int WIN_WIDTH = 800;
const int WIN_HEIGHT = 800;

class Simulation {
  public:
    Simulation(char *argv0);
    ~Simulation();

    void set_automaton(Automaton *automaton);

    void run();

    void init();

  private:
    // std::string get_executable_path();
    std::string get_path(char *arg);
    std::string path_str;

    int win_height;
    int win_width;

    int radius;

    Automaton *automaton;
    Cursor *cursor;

    GLFWwindow *window;
    void init_GLFW();

    void set_callbacks();
    void error_callback(int error, const char *description);
    void framebuffer_size_callback(GLFWwindow *window, int width, int height);
    void key_callback(GLFWwindow *window, int key, int scancode, int action,
                      int mods);
    void drop_callback(GLFWwindow *window, int count, const char **paths);
    void mouse_pos_callback(GLFWwindow *window, double x_pos_in,
                            double y_pos_in);
    void update_FPS(double current_time);
    void update_title_bar();
    void process_input();

    std::string GAME_NAME = "C GoL";
    std::string VERSION = "v1.1";
    std::string GAME_VERSION_NAME = VERSION + " | " + GAME_NAME;

    int nb_frames;
    int last_time;
    std::string FPS;

    int cell_count;

    bool seeding;
    bool ready;
    bool update_size;
    bool plague;
    bool step;
    bool manual;

    float delta_time;
    float last_frame;

    int counter;
    int delay;
};
#endif
