#ifndef VoxelFace_H
#define VoxelFace_H

#include <godot_cpp/core/class_db.hpp>

namespace godot {
    struct VoxelFace {

        private:

        protected:
            TypedArray<Vector3i> _triangle1;
            TypedArray<Vector3i> _triangle2;

        public:
            VoxelFace(TypedArray<Vector3i> tri1, TypedArray<Vector3i> tri2);
            ~VoxelFace();

            TypedArray<Vector3i> triangle1() const { return _triangle1; }
            TypedArray<Vector3i> triangle2() const { return _triangle2; }
    };
}

#endif
