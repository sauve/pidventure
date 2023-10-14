#include "vkapp.h"

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE



// faire un gros mautadit fichier avec quelque objset de base avant ed splitter le tout et modifier le makefile


int main() {
    vkApp app;

    try {
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;

/*
 

    glm::mat4 matrix;
    glm::vec4 vec;
    auto test = matrix * vec;

*/

    return 0;
}