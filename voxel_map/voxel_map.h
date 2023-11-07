#ifndef VOXELMAP_H
#define VOXELMAP_H

#include <voxel_rule_engine.h>
#include <chunk.h>

#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/core/class_db.hpp>

namespace godot {
    using ChunkMatrix = TypedArray<TypedArray<TypedArray<Chunk>>>;

    class VoxelMap : public Node3D {
        GDCLASS(VoxelMap, Node3D)

        private:

        protected:
            VoxelRuleEngine engine;
            ChunkMatrix chunks;

            static void _bind_methods();

            void generate();
            void _generate_chunk();

        public:
            VoxelMap();
            ~VoxelMap();

            Vector3i map_size; // exported
            Vector3i chunk_size; // exported

            void _process(double delta);
    };
}

#endif
