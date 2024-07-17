#ifndef  MAPGENMAPGENERTAOR_H
#define MAPGENMAPGENERTAOR_H

#include <godot_cpp/classes/node.hpp>

#include <godot_cpp/variant/vector4.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/array.hpp>

namespace godot {

	class MapGenerator : public Node {
		GDCLASS(MapGenerator, Node)

	protected:
		static void _bind_methods();

	public:
		MapGenerator();
		~MapGenerator();

		void calculateMap();
		Array processList;
	};

}



#endif // ! MAPGENMAPGENERTAOR_H
