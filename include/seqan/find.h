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

#ifndef SEQAN2_HEADER_FIND_H
#define SEQAN2_HEADER_FIND_H

// ===========================================================================
// Prerequisites.
// ===========================================================================

#include <cmath>
#include <deque>

#include <seqan2/sequence.h>
#include <seqan2/modifier.h>
#include <seqan2/score.h>
#include <seqan2/graph_types.h>
#include <seqan2/graph_algorithms.h>
#include <seqan2/map.h>
#include <seqan2/parallel.h>

// ===========================================================================
// Base headers.
// ===========================================================================

#include <seqan2/find/find_base.h>
#include <seqan2/find/find_pattern_base.h>

// ===========================================================================
// Exact pattern matching.
// ===========================================================================

#include <seqan2/find/find_simple.h>
#include <seqan2/find/find_horspool.h>
#include <seqan2/find/find_shiftand.h>
#include <seqan2/find/find_shiftor.h>
#include <seqan2/find/find_bndm.h>
#include <seqan2/find/find_bom.h>

// ===========================================================================
// Pattern matching with wildcards.
// ===========================================================================

#include <seqan2/find/find_wild_shiftand.h>

// ===========================================================================
// Multiple exact pattern matching.
// ===========================================================================

#include <seqan2/find/find_ahocorasick.h>
#include <seqan2/find/find_multiple_shiftand.h>
#include <seqan2/find/find_set_horspool.h>

//#include <seqan2/find/find_multi.h> //wegwerfen
#include <seqan2/find/find_wumanber.h>
#include <seqan2/find/find_multiple_bfam.h>

// ===========================================================================
// Approximate pattern matching.
// ===========================================================================

#include <seqan2/find/find_begin.h>

#include <seqan2/find/find_score.h>
#include <seqan2/find/find_myers_ukkonen.h>
#include <seqan2/find/find_abndm.h>
#include <seqan2/find/find_pex.h>

#include <seqan2/find/find_hamming_simple.h>

// ===========================================================================
// Lambda interface.
// ===========================================================================

#include <seqan2/find/find_lambda.h>

#endif //#ifndef SEQAN2_HEADER_...
