#pragma once
#include<d3d11.h>

class GraphicEngeine;
class DeviceContext;
class VertexShader
{
public:
	VertexShader();
	~VertexShader();
	bool release();
private:
	bool init(void* shader_byte_code, size_t byte_code_size);
private:
	ID3D11VertexShader* m_vs;
private:
	friend class GraphicsEngine;
	friend class DeviceContext;
};