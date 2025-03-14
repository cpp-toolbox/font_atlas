# font atlas

A system which helps you work with font atlases. 

# warning
Also be sure to include this in exactly one other source file or else it will not work

```cpp
#define STB_IMAGE_IMPLEMENTATION 
```

I recommend to put it in your `main.cpp` to help you keep track

# format of files

In order to work with this you need to have a json file which defines your fonts drawing information, it will have this form:

```json
{
  "characters": {
    "0":{"width":41,"height":56,"originX":4,"originY":49,"advance":32},
    "1":{"width":30,"height":55,"originX":-1,"originY":49,"advance":32},
    "2":{"width":41,"height":55,"originX":4,"originY":49,"advance":32},
    "3":{"width":37,"height":56,"originX":3,"originY":49,"advance":32},
    "4":{"width":42,"height":55,"originX":5,"originY":49,"advance":32},
    "5":{"width":38,"height":57,"originX":4,"originY":50,"advance":32},
    "6":{"width":40,"height":57,"originX":4,"originY":50,"advance":32},
    "7":{"width":40,"height":55,"originX":5,"originY":48,"advance":32},
    "8":{"width":37,"height":56,"originX":2,"originY":49,"advance":32},
    "9":{"width":40,"height":57,"originX":4,"originY":49,"advance":32},
    " ":{"width":12,"height":12,"originX":6,"originY":6,"advance":16},
    "!":{"width":19,"height":56,"originX":-2,"originY":49,"advance":21},
    "\"":{"width":29,"height":28,"originX":1,"originY":49,"advance":26},
    "#":{"width":44,"height":54,"originX":6,"originY":48,"advance":32},
    "$":{"width":39,"height":65,"originX":3,"originY":53,"advance":32},
    "%":{"width":58,"height":56,"originX":2,"originY":49,"advance":53},
    "&":{"width":57,"height":56,"originX":3,"originY":49,"advance":50},
    "'":{"width":17,"height":28,"originX":3,"originY":49,"advance":11},
    "(":{"width":28,"height":67,"originX":3,"originY":49,"advance":21},
    ")":{"width":29,"height":67,"originX":4,"originY":49,"advance":21},
    "*":{"width":36,"height":38,"originX":2,"originY":49,"advance":32},
    "+":{"width":45,"height":44,"originX":4,"originY":38,"advance":36},
    ",":{"width":21,"height":28,"originX":2,"originY":13,"advance":16},
    "-":{"width":28,"height":16,"originX":4,"originY":22,"advance":21},
    ".":{"width":20,"height":19,"originX":2,"originY":13,"advance":16},
    "/":{"width":31,"height":56,"originX":7,"originY":49,"advance":18},
    ":":{"width":19,"height":42,"originX":1,"originY":35,"advance":18},
    ";":{"width":21,"height":50,"originX":1,"originY":35,"advance":18},
    "<":{"width":39,"height":47,"originX":1,"originY":44,"advance":36},
    "=":{"width":45,"height":29,"originX":4,"originY":31,"advance":36},
    ">":{"width":39,"height":47,"originX":1,"originY":44,"advance":36},
    "?":{"width":34,"height":56,"originX":2,"originY":49,"advance":28},
    "@":{"width":57,"height":56,"originX":-1,"originY":49,"advance":59},
    "A":{"width":57,"height":55,"originX":5,"originY":49,"advance":46},
    "B":{"width":49,"height":54,"originX":5,"originY":48,"advance":42},
    "C":{"width":51,"height":56,"originX":4,"originY":49,"advance":42},
    "D":{"width":55,"height":54,"originX":5,"originY":48,"advance":46},
    "E":{"width":50,"height":54,"originX":5,"originY":48,"advance":39},
    "F":{"width":46,"height":54,"originX":5,"originY":48,"advance":35},
    "G":{"width":55,"height":56,"originX":4,"originY":49,"advance":46},
    "H":{"width":56,"height":54,"originX":5,"originY":48,"advance":46},
    "I":{"width":31,"height":54,"originX":5,"originY":48,"advance":21},
    "J":{"width":35,"height":55,"originX":5,"originY":48,"advance":25},
    "K":{"width":56,"height":54,"originX":4,"originY":48,"advance":46},
    "L":{"width":50,"height":54,"originX":5,"originY":48,"advance":39},
    "M":{"width":67,"height":54,"originX":5,"originY":48,"advance":57},
    "N":{"width":57,"height":55,"originX":5,"originY":48,"advance":46},
    "O":{"width":54,"height":56,"originX":4,"originY":49,"advance":46},
    "P":{"width":46,"height":54,"originX":5,"originY":48,"advance":35},
    "Q":{"width":55,"height":67,"originX":4,"originY":49,"advance":46},
    "R":{"width":53,"height":54,"originX":5,"originY":48,"advance":42},
    "S":{"width":41,"height":56,"originX":3,"originY":49,"advance":35},
    "T":{"width":49,"height":54,"originX":5,"originY":48,"advance":39},
    "U":{"width":57,"height":55,"originX":5,"originY":48,"advance":46},
    "V":{"width":56,"height":55,"originX":5,"originY":48,"advance":46},
    "W":{"width":72,"height":55,"originX":6,"originY":48,"advance":60},
    "X":{"width":57,"height":54,"originX":5,"originY":48,"advance":46},
    "Y":{"width":56,"height":54,"originX":5,"originY":48,"advance":46},
    "Z":{"width":50,"height":54,"originX":5,"originY":48,"advance":39},
    "[":{"width":26,"height":64,"originX":0,"originY":48,"advance":21},
    "\\":{"width":31,"height":56,"originX":7,"originY":49,"advance":18},
    "]":{"width":26,"height":64,"originX":4,"originY":48,"advance":21},
    "^":{"width":39,"height":36,"originX":4,"originY":48,"advance":30},
    "_":{"width":44,"height":15,"originX":6,"originY":1,"advance":32},
    "`":{"width":26,"height":23,"originX":5,"originY":49,"advance":21},
    "a":{"width":38,"height":42,"originX":4,"originY":35,"advance":28},
    "b":{"width":42,"height":56,"originX":6,"originY":50,"advance":32},
    "c":{"width":37,"height":42,"originX":4,"originY":35,"advance":28},
    "d":{"width":42,"height":56,"originX":4,"originY":50,"advance":32},
    "e":{"width":38,"height":42,"originX":4,"originY":35,"advance":28},
    "f":{"width":35,"height":56,"originX":5,"originY":50,"advance":21},
    "g":{"width":41,"height":55,"originX":4,"originY":35,"advance":32},
    "h":{"width":43,"height":56,"originX":5,"originY":50,"advance":32},
    "i":{"width":27,"height":56,"originX":5,"originY":50,"advance":18},
    "j":{"width":29,"height":70,"originX":10,"originY":50,"advance":18},
    "k":{"width":44,"height":56,"originX":6,"originY":50,"advance":32},
    "l":{"width":27,"height":56,"originX":5,"originY":50,"advance":18},
    "m":{"width":61,"height":41,"originX":5,"originY":35,"advance":50},
    "n":{"width":42,"height":41,"originX":5,"originY":35,"advance":32},
    "o":{"width":41,"height":42,"originX":4,"originY":35,"advance":32},
    "p":{"width":42,"height":55,"originX":6,"originY":35,"advance":32},
    "q":{"width":42,"height":55,"originX":4,"originY":35,"advance":32},
    "r":{"width":33,"height":41,"originX":6,"originY":35,"advance":21},
    "s":{"width":31,"height":42,"originX":3,"originY":35,"advance":25},
    "t":{"width":29,"height":50,"originX":5,"originY":43,"advance":18},
    "u":{"width":42,"height":41,"originX":5,"originY":35,"advance":32},
    "v":{"width":42,"height":42,"originX":5,"originY":35,"advance":32},
    "w":{"width":55,"height":42,"originX":5,"originY":35,"advance":46},
    "x":{"width":42,"height":41,"originX":5,"originY":35,"advance":32},
    "y":{"width":42,"height":55,"originX":5,"originY":35,"advance":32},
    "z":{"width":37,"height":41,"originX":4,"originY":35,"advance":28},
    "{":{"width":28,"height":67,"originX":0,"originY":49,"advance":30},
    "|":{"width":17,"height":76,"originX":2,"originY":54,"advance":13},
    "}":{"width":28,"height":67,"originX":-2,"originY":49,"advance":30},
    "~":{"width":42,"height":21,"originX":3,"originY":27,"advance":34}
  }
}
```

## average measurements

the units of the width and height are measured in pixels, the average width in the above is 40.47 pixelsthe reasoning for their values comes from the underlying font atlas and their bounding boxes sizes in the image, as of right now the average screen has width 1920 and then we can compute 40/1920 = 0.02 = 1/50 meaning that on average you can get up to 50 chars on the screen so long as you scale things down by a factor of a thousand or something like that, thus simply making an ortho matrix with the screen dimensions can help you get the sizing right.

## setting up

When creating a font atlas using cpp-toolbox, then we do something like this: 

```cpp
    glDisable(GL_DEPTH_TEST);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    FontAtlas font_atlas("assets/fonts/times_64_sdf_atlas_font_info.json", "assets/fonts/times_64_sdf_atlas.json",
                         "assets/fonts/times_64_sdf_atlas.png", SCREEN_WIDTH, false, true);

    glm::mat4 projection = glm::mat4(1);
    auto text_color = glm::vec3(0.5, 0.5, 1);
    float char_width = 0.5;
    float edge_transition = 0.1;

    shader_cache.use_shader_program(ShaderType::TRANSFORM_V_WITH_SIGNED_DISTANCE_FIELD_TEXT);
    shader_cache.set_uniform(ShaderType::TRANSFORM_V_WITH_SIGNED_DISTANCE_FIELD_TEXT, ShaderUniformVariable::TRANSFORM,
                             projection);

    shader_cache.set_uniform(ShaderType::TRANSFORM_V_WITH_SIGNED_DISTANCE_FIELD_TEXT, ShaderUniformVariable::RGB_COLOR,
                             text_color);

    shader_cache.set_uniform(ShaderType::TRANSFORM_V_WITH_SIGNED_DISTANCE_FIELD_TEXT,
                             ShaderUniformVariable::CHARACTER_WIDTH, char_width);

    shader_cache.set_uniform(ShaderType::TRANSFORM_V_WITH_SIGNED_DISTANCE_FIELD_TEXT,
                             ShaderUniformVariable::EDGE_TRANSITION_WIDTH, edge_transition);
  ```

Also note that before drawing you should make sure that the font atlas texture is bound with `glBindTexture` or else it might not show up.
