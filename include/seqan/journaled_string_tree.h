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
// Author: Rene Rahn <rene.rahn@fu-berlin.de>
// ==========================================================================
// Facade header for the journaled string tree.
// ==========================================================================

#ifndef INCLUDE_SEQAN2_JOURNALED_STRING_TREE_H_
#define INCLUDE_SEQAN2_JOURNALED_STRING_TREE_H_

// ===========================================================================
// Prerequisites.
// ===========================================================================

#include <seqan2/basic.h>
#include <seqan2/sequence.h>
#include <seqan2/modifier.h>
#include <seqan2/sequence_journaled.h>
#include <seqan2/journaled_set.h>
#include <seqan2/parallel.h>
#include <seqan2/stream.h>

// TODO(rrahn): Might put this to basic.
#include <seqan2/journaled_string_tree/observable.h>
#include <seqan2/journaled_string_tree/stack_observer.h>

// ===========================================================================
// Delta Map.
// ===========================================================================

#include <seqan2/journaled_string_tree/delta_store.h>
#include <seqan2/journaled_string_tree/delta_map_entry.h>
#include <seqan2/journaled_string_tree/delta_map.h>
#include <seqan2/journaled_string_tree/delta_map_iterator.h>

// ===========================================================================
// Journaled String Tree.
// ===========================================================================

#include <seqan2/journaled_string_tree/journaled_string_tree_base.h>
#include <seqan2/journaled_string_tree/journaled_string_tree_impl.h>

// ===========================================================================
// Journaled String Tree Traverser.
// ===========================================================================

#include <seqan2/journaled_string_tree/journaled_string_tree_sequence_buffer.h>
#include <seqan2/journaled_string_tree/journaled_string_tree_traverser_node.h>
#include <seqan2/journaled_string_tree/journaled_string_tree_traverser_util.h>
#include <seqan2/journaled_string_tree/journaled_string_tree_traverser.h>

// ===========================================================================
// Journaled String Tree Find.
// ===========================================================================

#include <seqan2/find.h>

#include <seqan2/journaled_string_tree/jst_extension_base.h>
#include <seqan2/journaled_string_tree/jst_extension_horspool.h>
#include <seqan2/journaled_string_tree/jst_extension_shiftand.h>
#include <seqan2/journaled_string_tree/jst_extension_shiftor.h>
#include <seqan2/journaled_string_tree/jst_extension_myers_ukkonen.h>

#endif // INCLUDE_SEQAN2_JOURNALED_STRING_TREE_H_
