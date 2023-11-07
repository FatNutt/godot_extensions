#ifndef STATEFULVOXEL_H
#define STATEFULVOXEL_H

#include <voxel.h>

#include <godot_cpp/core/class_db.hpp>

namespace godot {
    class StatefulVoxel : public Voxel {
        GDCLASS(StatefulVoxel, Voxel)

        private:

        protected:
            static void _bind_methods();

        public:
            StatefulVoxel();
            ~StatefulVoxel();

            Vector3i position;
    };
}

#endif
