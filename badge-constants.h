/*
  Copyright 2017-2020 UwUnyaa

  This file is part of pulse.

  pulse is free software: you can redistribute it and/or modify it under the
  terms of the GNU General Public License as published by the Free Software
  Foundation, either version 3 of the License, or (at your option) any later
  version.

  pulse is distributed in the hope that it will be useful, but WITHOUT ANY
  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
  FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
  details.

  You should have received a copy of the GNU General Public License along with
  pulse. If not, see <http://www.gnu.org/licenses/>.
*/

#define BadgeSize     128
#define BadgeMargin   8

#define BadgeTextRed   0.89453125
#define BadgeTextGreen 0.89453125
#define BadgeTextBlue  0.89453125

static unsigned char cpuTemplate[] = {
#include "badge/badgedata.h"
};

static char *cpuFrequencyPowers[] = {
  "k", "M", "G", "T",
};
