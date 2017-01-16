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

#ifndef SEQAN2_HEADER_PIPE_H
#define SEQAN2_HEADER_PIPE_H

//____________________________________________________________________________
// prerequisites

#include <seqan2/basic.h>
#include <seqan2/parallel.h>
#include <seqan2/file.h>

#include <cstdio>
#include <cassert>
#include <functional>
#include <iterator>
#include <climits>
#include <vector>
#include <queue>

//____________________________________________________________________________
// pipes

#define SEQAN2_NAMESPACE_PIPELINING pipe

#include <seqan2/pipe/pipe_base.h>
#include <seqan2/pipe/pipe_iterator.h>
#include <seqan2/pipe/pipe_caster.h>
#include <seqan2/pipe/pipe_counter.h>
#include <seqan2/pipe/pipe_echoer.h>
#include <seqan2/pipe/pipe_edit_environment.h>
#include <seqan2/pipe/pipe_filter.h>
#include <seqan2/pipe/pipe_joiner.h>
#include <seqan2/pipe/pipe_namer.h>
#include <seqan2/pipe/pipe_sampler.h>
#include <seqan2/pipe/pipe_shifter.h>
#include <seqan2/pipe/pipe_source.h>
#include <seqan2/pipe/pipe_tupler.h>

//____________________________________________________________________________
// pools

#include <seqan2/pipe/pool_base.h>
#include <seqan2/pipe/pool_mapper.h>

#include <seqan2/misc/priority_type_base.h>
#include <seqan2/misc/priority_type_heap.h>
#include <seqan2/pipe/pool_sorter.h>

#endif //#ifndef SEQAN2_HEADER_...
