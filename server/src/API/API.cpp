#include "API.hpp"

namespace Wyrradia
{
  void API::Start()
  {
    m_svr.Get("/game_state",
        [](const httplib::Request& req, httplib::Response& res)
        {
          res.set_content(
              "{\"commands\": "
              "[\"DrawImage;GroundGrass;0.0;0.0;0.2;0.2;false;\"]}",
              "application/json");
          res.set_header("Access-Control-Allow-Origin", "*");
        });

    m_svr.listen("localhost", 8080);
  }

  void API::Stop() { m_svr.stop(); }
} // namespace Wyrradia
