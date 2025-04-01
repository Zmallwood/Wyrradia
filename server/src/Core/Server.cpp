// Copyright 2025 Andreas Åkerberg
// See LICENSE for license details.

#include "Server.hpp"

namespace Wyrradia
{
  void Server::Start()
  {
    httplib::Server svr;

    /*
    * TODO: Use long polling instttead of websockets.
    *
    */

    svr.Get("/hello",
        [](const httplib::Request& req, httplib::Response& res)
        { res.set_content("Hello, world!", "text/plain"); });

    // Define another endpoint that takes a name as a query parameter
    svr.Get("/greet",
        [](const httplib::Request& req, httplib::Response& res)
        {
          std::string name = req.get_param_value("name");
          if (name.empty())
          {
            res.set_content("Hello, anonymous!", "text/plain");
          }
          else
          {
            res.set_content("Hello, " + name + "!", "text/plain");
          }
        });

    svr.Get("/game_state",
        [](const httplib::Request& req, httplib::Response& res)
        {
          res.set_content(
              "{\"commands\": "
              "[\"DrawImage;GroundGrass;0.0;0.0;0.2;0.2;false;\"]}",
              "application/json");
          res.set_header("Access-Control-Allow-Origin", "*");
        });

    std::cout << "Server running at http://localhost:8080"
              << std::endl;
    svr.listen("localhost", 8080);
  }
} // namespace Wyrradia
