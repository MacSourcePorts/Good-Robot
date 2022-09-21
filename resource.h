#ifndef RESOURCE_H
#define RESOURCE_H

enum ResourceType
{
	RESOURCE_DATA,
	RESOURCE_SOUND,
	RESOURCE_SHADER,
	RESOURCE_TEXTURE,
	RESOURCE_MUSIC,
	RESOURCE_FONTS,
	RESOURCE_MAPS
};

string ResourceLocation(string filename, ResourceType type);

#endif // RESOURCE_H