#pragma once

namespace Wyrradia
{
  class Graphics
  {
   public:
    std::string GetBuffer() const { return m_buffer; }

   private:
    std::string m_buffer;
  };
} // namespace Wyrradia
