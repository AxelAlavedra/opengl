#include "PhysBody3D.h"
#include "glmath.h"
#include "Bullet/include/btBulletDynamicsCommon.h"

// TODO 4: Fill in PhysBody methods. Remember to use 
// get/setOpenGLMatrix methods

// ---------------------------------------------------------
PhysBody3D::PhysBody3D(btRigidBody* body)
{
	this->body = body;
}

// ---------------------------------------------------------
PhysBody3D::~PhysBody3D()
{}

// ---------------------------------------------------------
void PhysBody3D::GetTransform(float* matrix) const
{
	btTransform trans = body->getWorldTransform();
	trans.getOpenGLMatrix(matrix);
}

// ---------------------------------------------------------
void PhysBody3D::SetTransform(const float* matrix) const
{
	btTransform trans = body->getWorldTransform();
	trans.setFromOpenGLMatrix(matrix);
	body->setWorldTransform(trans);
}

// ---------------------------------------------------------
void PhysBody3D::SetPos(float x, float y, float z)
{
	btTransform trans = body->getWorldTransform();
	trans.setOrigin({ x,y,z });
	body->setWorldTransform(trans);
}
