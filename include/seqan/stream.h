// ==========================================================================
//                 SeqAn - The Library for Sequence Analysis
// ==========================================================================
// Copyright (c) 2006-2016, Knut Reinert, FU Berlin
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of Knut Reinert or the FU Berlin nor the names of
//       its contributors may be used to endorse or promote products derived
//       from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL KNUT REINERT OR THE FU BERLIN BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
// OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
// DAMAGE.
//
// ==========================================================================
// Author: Manuel Holtgrewe <manuel.holtgrewe@fu-berlin.de>
// Author: Enrico Siragusa <enrico.siragusa@fu-berlin.de>
// Author: David Weese <david.weese@fu-berlin.de>
// ==========================================================================
// Facade header for the stream module.
// ==========================================================================

#ifndef SEQAN2_STREAM_H_
#define SEQAN2_STREAM_H_

// ===========================================================================
// Prerequisites.
// ===========================================================================

#include <iostream>
#include <fstream>
#include <sstream>

#include <sys/types.h>
#include <sys/stat.h>

#ifdef _WIN32
#ifndef ZLIB_WINAPI
//#define ZLIB_WINAPI
#endif
#else
#include <unistd.h>
#endif

#include <seqan2/basic.h>
#include <seqan2/file.h>
#include <seqan2/sequence.h>

// ===========================================================================
// Basic Definitions.
// ===========================================================================

#include <seqan2/stream/stream_base.h>

// ===========================================================================
// File Format and Type Guessing.
// ===========================================================================

#include <seqan2/stream/guess_format.h>

// ===========================================================================
// Stream Iterators.
// ===========================================================================

#include <seqan2/stream/iter_stream.h>

// ===========================================================================
// Stream Implementations and Adaptions.
// ===========================================================================

#include <seqan2/stream/adapt_ios.h>
#include <seqan2/stream/file_stream.h>
#include <seqan2/stream/stream_compressor.h>
#include <seqan2/stream/buffered_stream.h>

#if SEQAN2_HAS_ZLIB
#include <zlib.h>
#include <seqan2/stream/iostream_zutil.h>
#include <seqan2/stream/iostream_zip.h>
#include <seqan2/stream/iostream_zip_impl.h>
#include <seqan2/stream/iostream_bgzf.h>
#endif

#if SEQAN2_HAS_BZIP2
#include <seqan2/stream/iostream_bzip2.h>
#endif

#include <seqan2/stream/virtual_stream.h>
#include <seqan2/stream/formatted_file.h>

// ===========================================================================
// Tokenization and Lexical Cast.
// ===========================================================================
// TODO(esiragusa): move these files into basic - they are not unique to streams.

#include <seqan2/stream/tokenization.h>
#include <seqan2/stream/lexical_cast.h>

#endif  // SEQAN2_STREAM_H_
