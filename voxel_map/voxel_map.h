#ifndef VOXELMAP_H
#define VOXELMAP_H

#include <godot_cpp/classes/node3d.hpp>

namespace godot {

    class VoxelMap : public Node3D {
        GDCLASS(VoxelMap, Node3D)

    private:
        double time_passed;

    protected:
        static void _bind_methods();

    public:
        VoxelMap();
        ~VoxelMap();

        void _process(double delta);
    };

}

#endif
