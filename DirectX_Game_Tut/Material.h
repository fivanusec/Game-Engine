#pragma once
#include <vector>

#include "GraphicsEngine.h"
#include "ConstantBuffer.h"
#include "VertexShader.h"
#include "PIxelShader.h"

enum CULL_MODE
{
	CULL_MODE_FRONT = 0,
	CULL_MODE_BACK
};

class GraphicsEngine;
class Material
{
public:
	Material(const wchar_t* vertex_shader_path, const wchar_t* pixel_shader_path);
	Material(const MaterialPtr& material);
	void addTexture(const TexturePtr& texture);
	void removeTexture(unsigned int index);
	void setData(void* data, unsigned int size);
	void setCullMode(CULL_MODE mode);
	CULL_MODE getCullMode();
	~Material();
private:
	VertexShaderPtr m_vertex_shader;
	PixelShaderPtr m_pixel_shader;
	ConstantBufferPtr m_constant_buffer;
	std::vector<TexturePtr> m_vec_texture;
	CULL_MODE m_cull_mode = CULL_MODE_BACK;
private:
	friend class GraphicsEngine;
};

