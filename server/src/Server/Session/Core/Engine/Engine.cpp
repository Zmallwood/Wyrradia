#include "Engine.hpp"
#include "Server/Session/Core/Graphics/Graphics.hpp"

namespace Wyrradia
{
  Engine::Engine()
      : m_graphics(std::make_shared<Graphics>())
  {
  }
} // namespace Wyrradia
