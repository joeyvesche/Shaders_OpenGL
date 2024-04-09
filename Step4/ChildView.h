
// ChildView.h : interface of the CChildView class
//


#pragma once
#include "ShaderWnd\ShaderWnd.h"
#include "Mesh.h"
#include "Sphere.h"
#include "graphics\GrTexture.h"
#include "graphics\GrCubeTexture.h"


// CChildView window

class CChildView : public CShaderWnd
{
// Construction
public:
	CChildView();

// Attributes
public:
	CGrTexture m_bunnyTex;
	CGrTexture m_sphereTex;
	CGrTexture m_heightTex;
	CGrTexture m_catTex;
	CGrTexture m_fishTex;
	CGrCubeTexture m_cubeTex;

	CMesh m_bunny;
	CSphere m_sphere;
	CSphere m_metallicSphere;
	CMesh m_skybox;
	CMesh m_cat;
	CMesh m_fish;
	CMesh m_hendecagonal;

// Operations
public:
	virtual void RenderGL();
	virtual void InitGL();
	virtual void CleanGL();

// Overrides
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
	virtual ~CChildView();

	// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

