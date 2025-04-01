// Copyright 2025 Andreas Åkerberg
// See LICENSE for license details.

#pragma once
namespace Wyrradia
{
  template <class T> T& _()
  {
    static T instance;

    return instance;
  }
} // namespace Wyrradia
