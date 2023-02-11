// Display images inside a terminal
// Copyright (C) 2023  JustKidding
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#ifndef __VIPS_IMAGE__
#define __VIPS_IMAGE__

#include "image.hpp"

#include <string>
#include <memory>
#include <vips/vips8>

class LibvipsImage : public Image
{
public:
    LibvipsImage(const std::string &filename,
            const int& max_width, const int& max_height);

    auto width() -> int override;
    auto height() -> int override;
    auto size() -> unsigned long override;
    auto data() -> unsigned char* override;

private:
    vips::VImage image;

    std::unique_ptr<unsigned char> _data;
    std::string filename;

    int max_width;
    int max_height;
    unsigned long _size;
};

#endif
