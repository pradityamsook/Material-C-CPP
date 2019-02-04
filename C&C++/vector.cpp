#include <bits/stdc++.h>

struct Vertex {
    float x, y, z;
    Vertex(float x, float y, float z)
        : x(x), y(y), z(z) {}

    Vertex(const Vertex& vertex)
        : x(vertex.x), y(vertex.y), z(vertex.z) {
            std::cout << "Copied\n";
        }
};

int main() {
    std::vector<Vertex> vertices;
    vertices.push_back(Vertex{1, 2, 3});
    vertices.push_back(Vertex{4, 5, 6});
    vertices.push_back(Vertex{7, 8, 9});

    std::cin.get();
}
