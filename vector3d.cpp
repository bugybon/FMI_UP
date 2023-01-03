#include <iostream>
#include <cmath>

struct Vector3D {
    double x, y, z;
};

double length(Vector3D& v){
    return std :: sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

double dotProduct(Vector3D& v1, Vector3D& v2){
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

Vector3D crossProduct(Vector3D& v1, Vector3D& v2){
    return Vector3D(v1.y * v2.z - v2.y * v1.z, v1.z * v2.x - v2.z * v1.x, v1.x * v2.y - v2. x * v1.y);
}

double triple(Vector3D& v1, Vector3D& v2, Vector3D& v3){
    return length(v1) * dotProduct(v2, v3);
}

Vector3D multiplyByScalar(Vector3D& v, double scalar){
    return Vector3D(v.x * scalar, v.y * scalar, v.z * scalar);
}

Vector3D normlaize(Vector3D& v){
    return multiplyByScalar(v, std :: pow(length(v), 1/3));
}

Vector3D getNegative(Vector3D& v){
    return multiplyByScalar(v, -1);
}

Vector3D sum(Vector3D& v1, Vector3D& v2){
    return Vector3D(v1.x + v2.x, v1.y + v2, v1.z + v2.z)
}

Vector3D difference(Vector3D& v1, Vector3D& v2){
    return sum(v1, getNegative(v2));
}

struct Box{
    Vector3D min, max;
};

Vector3D getCentre(Box& box){
    return multiplyByScalar(sum(box.min, box.max), 0.5);
}

Vector3D getExtent(Box& box){
    return Vector3D(std :: abs(box.min.x) + std :: abs(box.max.x),
                    std :: abs(box.min.y) + std :: abs(box.max.y),
                    std :: abs(box.min.z) + std :: abs(box.max.z));
}

bool inside(Box& box, Vector3D& v){
    if(v.x < box.max.x && v.x > box.min.x && v.y < box.max.y && v.y > box.min.y && v.z < box.max.z && v.z > box.min.z){
        return true;
    }
    return false;
}

bool intersectBox(Box& box1, Box& box2){
    bool hasInside = false, hasOutside = false;
    
}
