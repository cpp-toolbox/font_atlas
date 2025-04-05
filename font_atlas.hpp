#ifndef FONT_ATLAS_H
#define FONT_ATLAS_H

#include <string>
#include <unordered_map>
#include <nlohmann/json.hpp>
#include <glm/glm.hpp> // For vec2
#include "sbpt_generated_includes.hpp"

struct Character {
    // width and height are stored so that we can compute distance to next char
    // it is not used for computing uv coordinates
    float width_px;
    float height_px;
    float origin_x;
    float origin_y;
    float x_dist_to_next_char_px;
    std::vector<glm::vec2> uv_coordinates;
};

struct TextMesh {
    std::vector<unsigned int> indices;
    std::vector<glm::vec3> vertex_positions;
    std::vector<glm::vec2> texture_coordinates;
};

// NOTE: the font atlas doesn't use the packed textures yet, it simply loads the image directly
// in the future this can be modified, note that you have to bind the right texture before using it in this case.
class FontAtlas {
  public:
    FontAtlas(const std::string &font_info_json_filepath, const std::string &texture_atlas_json_filepath,
              const std::string &texture_filepath, unsigned int screen_width_px, bool flip_texture,
              bool top_left_coords = false);
    ~FontAtlas();

    glm::vec2 get_text_dimensions_in_ndc(const std::string &text, float scale) const;
    TextMesh generate_text_mesh(const std::string &text, float x, float y, float scale = 1);

    TextMesh generate_text_mesh_size_constraints(const std::string &text, vertex_geometry::Rectangle ndc_rect,
                                                 float padding_percentage = 0);
    TextMesh generate_text_mesh_size_constraints(const std::string &text, float x, float y, float width_ndc,
                                                 float height_ndc, float padding_percentage = 0);
    TextureAtlas texture_atlas;

  private:
    int num_chars_per_screen_width = 50;
    // default scale makes it so that 50 chars can be displayed across the width of screen
    float default_scale;
    std::string name;
    int size;
    bool bold;
    bool italic;
    int atlas_width, atlas_height;

    std::unordered_map<char, Character> characters;
};

#endif // FONT_ATLAS_H
