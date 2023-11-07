#ifndef VOXELLIBRARYP_H
#define VOXELLIBRARYP_H

#include <voxel.h>

#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/dictionary.hpp>

namespace godot {
    class VoxelLibrary : public Resource {
        GDCLASS(VoxelLibrary, Resource)

        private:

        protected:
            Dictionary _voxels;

            static void _bind_methods();

        public:
            VoxelLibrary();
            ~VoxelLibrary();

            Dictionary voxels() const { return _voxels; }
            void add(Voxel voxel);
            bool remove(String voxel_id);
    };
}

#endif
