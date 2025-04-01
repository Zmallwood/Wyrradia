// Copyright 2025 Andreas Åkerberg

#pragma once
namespace Wyrradia
{
  template <class T> T& _()
  {
    static T instance;

    return instance;
  }
} // namespace Wyrradia
