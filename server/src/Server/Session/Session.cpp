#include "Session.hpp"
#include "Core/Engine/Engine.hpp"

namespace Wyrradia
{
  Session::Session()
      : m_engine(std::make_shared<Engine>())
  {
  }

  void Session::Process() { }
} // namespace Wyrradia
