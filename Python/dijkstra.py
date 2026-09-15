import heapq

def dijkstra(graph, source, destination):
    """Find the shortest path from source to destination using Dijkstra's
    Shortest Path Algorithm."""

    # Distance of every vertex from source
    distance = {vertex: float('inf') for vertex in graph}

    # Store the previous vertex for path reconstruction
    previous = {vertex: None for vertex in graph}

    # Distance from source to itself
    distance[source] = 0

    # Priority Queue
    priority_queue = [(0, source)]

    while priority_queue:
        current_distance, current_vertex = heapq.heappop(priority_queue)

        # Skip if we already found a shorter path
        if current_distance > distance[current_vertex]:
            continue

        # Stop when destination is reached
        if current_vertex == destination:
            break

        # Check all neighboring vertices
        for neighbor, weight in graph[current_vertex]:
            new_distance = current_distance + weight

            if new_distance < distance[neighbor]:
                distance[neighbor] = new_distance
                previous[neighbor] = current_vertex
                heapq.heappush(priority_queue, (new_distance, neighbor))

    # Reconstruct shortest path
    path = []
    current = destination

    while current is not None:
        path.append(current)
        current = previous[current]

    path.reverse()

    # No path exists
    if path[0] != source:
        return float('inf'), []

    return distance[destination], path


# Graph
graph = {
    'A': [('B', 4), ('C', 2)],
    'B': [('A', 4), ('C', 1), ('D', 5)],
    'C': [('A', 2), ('B', 1), ('D', 8), ('E', 10)],
    'D': [('B', 5), ('C', 8), ('E', 2)],
    'E': [('C', 10), ('D', 2)]
}

# Find shortest path
source = 'A'
destination = 'E'

distance, path = dijkstra(graph, source, destination)

print("Shortest Distance:", distance)
print("Shortest Path:", " -> ".join(path))