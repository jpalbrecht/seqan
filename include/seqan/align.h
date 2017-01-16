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
// ==========================================================================

#ifndef SEQAN2_INCLUDE_SEQAN2_ALIGN_H_
#define SEQAN2_INCLUDE_SEQAN2_ALIGN_H_

// TODO(holtgrew): Usage of gapped value in align module is not consistent, need proxies in many places, reference not cleanly implemented everywhere yet.
// TODO(holtgrew): The Author: tag at the top has to be corrected in the headers of this module.
// TODO(holtgrew): Anchor Gaps must be integrated completely.
// TODO(holtgrew): Local alignments & Fragments don't work nicely together at the moment, multiLocalAlignments() needs an equivalent in the new align module.
// TODO(holtgrew): Align<>, AlignCol<> need some love and documentation.
// TODO(holtgrew): Gaps need better documentation.
// TODO(holtgrew): refinement should become graph_align and also host Graph<Alignment<>>
// TODO(holtgrew): graph_msa should become align_msa, or so, see whitepaper.
// TODO(holtgrew): The documentation and Tutorial need heavy updates, clipping alignments howto can go away.

// ============================================================================
// Prerequisites
// ============================================================================

#include <type_traits>
#include <algorithm>

#include <seqan2/basic.h>
#include <seqan2/modifier.h>  // ModifiedAlphabet<>.
#include <seqan2/align/align_metafunctions.h>
#include <seqan2/graph_align.h>  // TODO(holtgrew): We should not have to depend on this.

// TODO(holtgrew): Why not use priority queue from STL?
#include <seqan2/misc/priority_type_base.h>
#include <seqan2/misc/priority_type_heap.h>

// ============================================================================
// Support
// ============================================================================

#include <seqan2/align/gapped_value_type.h>
#include <seqan2/align/align_config.h>
#include <seqan2/align/align_traceback.h>
#include <seqan2/align/matrix_base.h>

// ============================================================================
// Gaps & Gaps Iterator Data Structures
// ============================================================================

#include <seqan2/align/fragment.h>

#include <seqan2/align/gaps_base.h>
#include <seqan2/align/gaps_iterator_base.h>

#include <seqan2/align/gaps_array.h>
#include <seqan2/align/gaps_iterator_array.h>

#include <seqan2/align/gap_anchor.h>
#include <seqan2/align/gaps_anchor.h>
#include <seqan2/align/gaps_iterator_anchor.h>

// ============================================================================
// Alignment Data Structures and Columns
// ============================================================================

#include <seqan2/align/align_cols.h>
#include <seqan2/align/align_base.h>

// ============================================================================
// Alignment Algorithm Implementations.
// ============================================================================

//################################################################################
// New module
//################################################################################

// The tags have to be available everywhere so we define them centrally.
#include <seqan2/align/alignment_algorithm_tags.h>

// Defines all tags needed for the DP alignment.
#include <seqan2/align/dp_profile.h>

// The DP Band
#include <seqan2/align/dp_band.h>

// Stores the score value of a particular cell in the dp matrix.
// If affine gap costs are selected one cell stores the three values
// for all three dp matrices.
#include <seqan2/align/dp_cell.h>
#include <seqan2/align/dp_cell_linear.h>
#include <seqan2/align/dp_cell_affine.h>
#include <seqan2/align/dp_cell_dynamic.h>

// The DP Scout
#include <seqan2/align/dp_scout.h>

// Stores the actual trace segment that was detected during traceback.
// The trace segments can be adapted into any alignment representation
// form.
#include <seqan2/align/dp_trace_segment.h>
#include <seqan2/align/dp_traceback_adaptor.h>

// Implements the different recursion formula of the alignment algorithms.
#include <seqan2/align/dp_formula.h>
#include <seqan2/align/dp_formula_linear.h>
#include <seqan2/align/dp_formula_affine.h>
#include <seqan2/align/dp_formula_dynamic.h>

// Defines meta informations which determine how to compute a column and a
// certain cell for different profiles.
#include <seqan2/align/dp_meta_info.h>

// Actual matrix to store the values. Uses the matrix_base.h definitions
// as a host.
#include <seqan2/align/dp_matrix.h>
#include <seqan2/align/dp_matrix_sparse.h>

// The navigator that based on the selected profile and band chooses the
// correct way to navigate through the matrix.
#include <seqan2/align/dp_matrix_navigator.h>
#include <seqan2/align/dp_matrix_navigator_score_matrix.h>
#include <seqan2/align/dp_matrix_navigator_score_matrix_sparse.h>
#include <seqan2/align/dp_matrix_navigator_trace_matrix.h>

// Ensures the backwards compatibility for the global interfaces of the
// alignment algorithms. Based on the called function this selects the
// correct parameters for the new alignment module.
#include <seqan2/align/dp_context.h>
#include <seqan2/align/dp_setup.h>

#ifdef SEQAN2_SIMD_ENABLED
#include <seqan2/align/dp_scout_simd.h>
#include <seqan2/align/dp_align_simd_helper.h>
#endif  // SEQAN2_SIMD_ENABLED

// The actual implementations of the traceback and the dynamic programming that
// is used by all different alignment algorithms.
#include <seqan2/align/dp_traceback_impl.h>
#include <seqan2/align/dp_algorithm_impl.h>

//################################################################################
// Old module
//################################################################################

// Also, we have an implementation of Hirschberg's algorithm to compute
// alignments.
#include <seqan2/align/global_alignment_hirschberg_impl.h>

// The implementations of Myers' bitvector algorithm for alignments can only
// compute alignment scores.  The combination of Hirschberg's and Myers'
// algorithm is limited in the same way.
#include <seqan2/align/global_alignment_myers_impl.h>
#include <seqan2/align/global_alignment_myers_hirschberg_impl.h>

// Implementations of the local alignment algorithms with declumping.  We also
// use them for the localAlignment() calls and return the best local alignment
// only.
// TODO(rmaerker): Replace this with a new implementation based on the new alignment module.
#include <seqan2/align/local_alignment_waterman_eggert_impl.h>
#include <seqan2/align/local_alignment_banded_waterman_eggert_impl.h>

// We carry around this implementation of Smith-Waterman because it supports
// aligning into fragment strings and alignment graphs.  Eventually, it could
// go away if Waterman-Eggert supports them.
//#include <seqan2/align/local_alignment_smith_waterman_impl.h>

// ============================================================================
// Alignment Algorithm Interfaces
// ============================================================================

#include <seqan2/align/align_interface_wrapper.h>

// The front-end functions for global alignments.
#include <seqan2/align/global_alignment_unbanded.h>
#include <seqan2/align/global_alignment_banded.h>

// The front-end functions for local alignments.
#include <seqan2/align/local_alignment_unbanded.h>
#include <seqan2/align/local_alignment_banded.h>

// The front-end for enumeration of local alignments.
#include <seqan2/align/local_alignment_enumeration.h>  // documentation
#include <seqan2/align/local_alignment_enumeration_unbanded.h>
#include <seqan2/align/local_alignment_enumeration_banded.h>

// The front-end functions for the more specialized alignment algorithms such as
// Hirschberg, Myers and Myers-Hirschberg.
#include <seqan2/align/global_alignment_specialized.h>

// ============================================================================
// Operations On Alignments
// ============================================================================

#include <seqan2/align/alignment_operations.h>
#include <seqan2/align/evaluate_alignment.h>

#endif  // SEQAN2_INCLUDE_SEQAN2_ALIGN_H_
