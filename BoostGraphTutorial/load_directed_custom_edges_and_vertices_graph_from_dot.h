#ifndef LOAD_DIRECTED_CUSTOM_EDGES_AND_VERTICES_GRAPH_FROM_DOT_H
#define LOAD_DIRECTED_CUSTOM_EDGES_AND_VERTICES_GRAPH_FROM_DOT_H

#include "create_empty_directed_custom_edges_and_vertices_graph.h"

boost::adjacency_list<
  boost::vecS,
  boost::vecS,
  boost::directedS,
  boost::property<
    boost::vertex_custom_type_t, my_custom_vertex
  >,
  boost::property<
    boost::edge_custom_type_t, my_custom_edge
  >
>
load_directed_custom_edges_and_vertices_graph_from_dot(
  const std::string& dot_filename
);

#endif // LOAD_DIRECTED_CUSTOM_EDGES_AND_VERTICES_GRAPH_FROM_DOT_H
