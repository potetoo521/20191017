#pragma once
//�g�p����w�b�_�[�t�@�C��
#include "GameL\SceneObjManager.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�V�[��:��l��
class CObjBullet :public CObj
{
	public:
		CObjBullet(float x,float y);  //�R���X�g���N�^
		   ~CObjBullet() {};
		   void Init();   //�C�j�V�����C�Y
		   void Action(); //�A�N�V����
		   void Draw();   //�h���[
	private:
		float m_px;    //�e�ۂ� X �����̈ʒu�p�ϐ�
		float m_py;    //�e�ۂ� Y �����̈ʒu�p�ϐ�
		float m_vx;    //�e�ۂ� X �����̑��x�p�ϐ�
		
};
