
#include "MapGenerator.h"
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

void MapGenerator::_bind_methods() {
	ClassDB::bind_method(D_METHOD("calculate_map"), &MapGenerator::calculateMap);
}

MapGenerator::MapGenerator() {
	// Initialize any variables here.
}




MapGenerator::~MapGenerator() {
	// Add your cleanup here.
}


void MapGenerator::calculateMap() {
	processList.push_back(Vector4(0.1, 0.2, 0.3, 0.4));
	Vector4 tmp = processList[0];
	UtilityFunctions::print(tmp);
}