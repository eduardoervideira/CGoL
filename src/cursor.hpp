#ifndef CURSOR_HPP
#define CURSOR_HPP

#include "shaders.hpp"
#include "automaton.hpp"
#include "util/glm_colors.hpp"
#include "util/pxls.hpp"

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

using namespace glm_colors;

class Cursor {
  private:
    int square_size;
    int cell_size;

    int win_height;
    int win_width;

    int radius;
    
    bool circular;

    double cursor_x;
    double cursor_y;
    glm::vec2 cursor_pos;

    std::vector<glm::vec2> quad_vertices;

    void set_shaders();
    void set_square_vertices();
    void set_circle_vertices();

    unsigned int quad_VAO;
    unsigned int cursor_VBO;

  public:
    Cursor();
    Cursor(std::string path_str, int win_width, int win_height, int square_size, int radius);
    ~Cursor();

    void draw();
    void update_position(double x_pos, double y_pos);
    void update_radius(int radius);
    void update_dimensions(int win_width, int win_height);
    void update_square_size(int square_size);
    void change_shape();

    int get_radius();

  protected:
    Shader shader_program;
};
#endif
