#pragma once

namespace Wyrradia
{
  class API
  {
   public:
    void Start();

    void Stop();

   private:
    httplib::Server m_svr;
  };
} // namespace Wyrradia
