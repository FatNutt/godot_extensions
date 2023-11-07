#ifndef CHUNK_H
#define CHUNK_H

#include <voxel_rule_engine.h>
#include <stateful_voxel.h>

#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/core/class_db.hpp>

namespace godot {
    using VoxelMatrix = TypedArray<TypedArray<TypedArray<StatefulVoxel>>>;

    class Chunk : public Node3D {
        GDCLASS(Chunk, Node3D)

        private:

        protected:
            static void _bind_methods();

        public:
            Chunk();
            ~Chunk();

            Vector3i position;
            Vector3i size;
            VoxelMatrix voxel_matrix;

            void generate(VoxelRuleEngine engine);
    };
}

#endif
