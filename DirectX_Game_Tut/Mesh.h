#pragma once
#include "Resource.h"
#include "VertexBuffer.h"
#include "IndexBuffer.h"
#include <d3d11.h>


class Mesh : public Resource
{
public:
	Mesh(const wchar_t* file_path);
	~Mesh();
	const VertexBufferPtr& getVertexBuffer();
	const IndexBufferPtr& getIndexBuffer();
private:
	VertexBufferPtr m_vertex_buffer;
	IndexBufferPtr m_index_buffer;
private:
	friend class DeviceContext;
};

