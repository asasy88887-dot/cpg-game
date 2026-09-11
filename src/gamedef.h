#ifndef GAMEDEF_H
#define GAMEDEF_H

#include <godot_cpp/classes/node3d.hpp>

using namespace godot;

class GameDef : public Node3D {
    GDCLASS(GameDef, Node3D);

protected:
    static void _bind_methods();

public:
    GameDef();
    ~GameDef();
};

#endif
