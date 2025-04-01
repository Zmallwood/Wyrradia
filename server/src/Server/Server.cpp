// Copyright 2025 Andreas Åkerberg
// See LICENSE for license details.

#include "Server.hpp"
#include "Session/Session.hpp"

namespace Wyrradia
{
  Server::Server()
  {
    m_sessions.push_back(std::make_shared<Session>());

    GetDefaultSession()->Process();
  }

  void Server::Start()
  {
    while (m_running)
    {
      for (auto session : m_sessions)
      {
        session->Process();
      }

      std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
  }

  void Server::Stop() { m_running = false; }

  std::shared_ptr<Session> Server::GetDefaultSession() const
  {
    return m_sessions[0];
  }
} // namespace Wyrradia
