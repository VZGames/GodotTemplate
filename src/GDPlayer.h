#ifndef __GDPLAYER_H__
#define __GDPLAYER_H__

#include <godot_cpp/classes/node.hpp>

using namespace godot;

class GDPlayer: public Node 
{
    GDCLASS(GDPlayer, Node)
private:
    /* data */

protected: 
    static void _bind_methods();
    
public:
    GDPlayer(/* args */);
    ~GDPlayer();

    void _ready() override;
    void _process(double delta_time) override;
};



#endif // __GDPLAYER_H__