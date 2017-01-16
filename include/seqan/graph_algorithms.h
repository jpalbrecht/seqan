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

#ifndef SEQAN2_HEADER_GRAPH_ALGORITHMS_H
#define SEQAN2_HEADER_GRAPH_ALGORITHMS_H

// External / STL
#include <set>
#include <queue>
#include <vector>
#include <utility>

// Seqan
#include <seqan2/graph_types.h>
#include <seqan2/random.h>
#include <seqan2/misc/union_find.h>

// Graph algorithms
#include <seqan2/graph_algorithms/graph_algorithm_heap_tree.h>
#include <seqan2/graph_algorithms/graph_algorithm_hmm.h>
#include <seqan2/graph_algorithms/graph_algorithm_lis_his.h>

// Individual graph algorithms.
#include <seqan2/graph_algorithms/all_pairs_shortest_path.h>
#include <seqan2/graph_algorithms/bellman_ford.h>
#include <seqan2/graph_algorithms/bipartite_matching.h>
#include <seqan2/graph_algorithms/breadth_first_search.h>
#include <seqan2/graph_algorithms/connected_components.h>
#include <seqan2/graph_algorithms/depth_first_search.h>
#include <seqan2/graph_algorithms/dijkstra.h>
#include <seqan2/graph_algorithms/floyd_warshall.h>
#include <seqan2/graph_algorithms/ford_fulkerson.h>
#include <seqan2/graph_algorithms/kruskal.h>
#include <seqan2/graph_algorithms/path_growing.h>
#include <seqan2/graph_algorithms/prim.h>
#include <seqan2/graph_algorithms/single_source_shortest_path.h>
#include <seqan2/graph_algorithms/strongly_connected_compnents.h>
#include <seqan2/graph_algorithms/topological_sort.h>
#include <seqan2/graph_algorithms/transitive_closure.h>
#include <seqan2/graph_algorithms/weakly_connected_components.h>
#include <seqan2/graph_algorithms/weighted_bipartite_matching.h>

#endif  // #ifndef SEQAN2_HEADER_GRAPH_ALGORITHMS_H
