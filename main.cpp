#include "mlh-renderer/include/Renderer.hpp"

// TODO:
// - Build app to export layout in json
// - Add features to mlh-renderer as needed
// ---> For example: what about Sliders? Input fields? Etc.

int main() {
  mlh::Renderer App = mlh::Renderer();

  App.setShader("../external/mlh-renderer/resources/Shaders/Vertex.shader",
                "../external/mlh-renderer/resources/Shaders/Fragment.shader");

  App.runLoop();

  return 0;
}
