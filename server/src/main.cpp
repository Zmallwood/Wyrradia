// Copyright 2025 Andreas Åkerberg
// See LICENSE for license details.

#include "Server/Server.hpp"

int main(int argc, char** argv)
{
  using namespace Wyrradia;

  _<Server>().Start();

  return 0;
}
