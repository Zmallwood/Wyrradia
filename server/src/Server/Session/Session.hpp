#pragma once

namespace Wyrradia
{
  class Engine;

  class Session
  {
   public:
    Session();

    void Process();

   private:
    std::shared_ptr<Engine> m_engine;
  };
} // namespace Wyrradia
