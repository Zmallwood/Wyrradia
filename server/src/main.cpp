// Copyright 2025 Andreas Åkerberg
// See LICENSE for license details.

#include "API/API.hpp"
#include "Server/Server.hpp"

int main(int argc, char** argv)
{
  using namespace Wyrradia;

  std::cout << "Wyrradia Server\n";
  std::cout << "===============\n";

  std::thread thServer(
      []
      {
        _<Server>().Start();
      });

  std::thread thAPI(
      []
      {
        _<API>().Start();
      });

  bool quit { false };

  while (!quit)
  {
    std::string s;

    std::cout << "\n> ";
    std::cin >> s;

    if (s == "q")
    {
      quit = true;
    }
  }

  _<API>().Stop();

  _<Server>().Stop();

  thAPI.join();
  thServer.join();

  std::cout << "Quitted gracefully\n";

  return 0;
}
