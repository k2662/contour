/**
 * This file is part of the "libterminal" project
 *   Copyright (c) 2019-2020 Christian Parpart <christian@parpart.family>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

#include <vtbackend/primitives.h>

#include <string>

namespace contour
{

struct CaptureSettings
{
    bool logicalLines = false; // -l
    bool words = false;        // split output into one word per line
    double timeout = 1.0f;     // -t <timeout in seconds>
    std::string outputFile;    // -o <outputfile>
    int verbosityLevel = 0;    // -v, -q (XXX intentionally not parsed currently!)
    terminal::LineCount lineCount = terminal::LineCount { 0 }; // (use terminal default)
};

bool captureScreen(CaptureSettings const& _settings);

} // namespace contour
