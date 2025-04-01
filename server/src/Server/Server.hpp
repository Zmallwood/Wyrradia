// Copyright 2025 Andreas Åkerberg
// See LICENSE for license details.

#pragma once

namespace Wyrradia
{
  class Session;

  class Server
  {
   public:
    Server();

    void Start();

   private:
    std::shared_ptr<Session> GetDefaultSession() const;

    std::vector<std::shared_ptr<Session>> m_sessions;
  };
} // namespace Wyrradia
