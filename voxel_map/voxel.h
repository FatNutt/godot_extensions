#ifndef Voxel_H
#define Voxel_H

#include <string>

#include <voxel_face.h>

#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/core/class_db.hpp>

namespace godot {
    class Voxel : public Resource {
        GDCLASS(Voxel, Resource)

        private:

        protected:
            static TypedArray<Vector3i> Verticies;
            static VoxelFace Front;
            static VoxelFace Back;
            static VoxelFace Left;
            static VoxelFace Right;
            static VoxelFace Top;
            static VoxelFace Right;

            static void _bind_methods();

        public:
            Voxel();
            ~Voxel();

            String id; // exported
            Texture3D atlas; // exported
            Vector2 atlas_offset; // exported
            Vector2 uv_size; // exported
    };
}

#endif
