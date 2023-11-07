#ifndef VOXELRULEENGINE_H
#define VOXELRULEENGINE_H

#include <godot_cpp/classes/node.hpp>

namespace godot {
    class VoxelRuleEngine : public Node {
        GDCLASS(VoxelRuleEngine, Node)

        private:

        protected:
            static void _bind_methods();

        public:
            VoxelRuleEngine();
            ~VoxelRuleEngine();
    };
}

#endif
