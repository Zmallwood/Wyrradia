#pragma once

namespace Wyrradia
{
  class Graphics;

  class Engine
  {
   public:
    Engine();

   private:
    std::shared_ptr<Graphics> m_graphics;
  };
} // namespace Wyrradia
