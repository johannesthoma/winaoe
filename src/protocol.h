/*
  Copyright 2006-2008, V.
  For contact information, see http://winaoe.org/

  This file is part of WinAoE.

  WinAoE is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  WinAoE is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with WinAoE.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _PROTOCOL_H
#define _PROTOCOL_H
#include "portable.h"

BOOLEAN STDCALL NTAPI ProtocolSearchNIC(IN PUCHAR Mac);
ULONG STDCALL NTAPI ProtocolGetMTU(IN PUCHAR Mac);
BOOLEAN STDCALL NTAPI ProtocolSend(IN PUCHAR SourceMac, IN PUCHAR DestinationMac, IN PUCHAR Data, IN ULONG DataSize, IN PVOID PacketContext);

#endif
