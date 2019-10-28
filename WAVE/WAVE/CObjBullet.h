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
		float m_bx;    //�e�ۂ� X �����̈ʒu�p�ϐ�
		float m_by;    //�e�ۂ� Y �����̈ʒu�p�ϐ�
		float m_vx;    //�e�ۂ� X �����̑��x�p�ϐ�
		float m_vy;    //�e�ۂ� Y �����̑��x�p�ϐ�

		bool flag;

		int speed;     //�e�ۂ̑��x
		float angle;   //�}�E�X�̒��S�_�Ɗp�x�Ԕ[

		float m_mou_bx;//�e�ۂ� X �����̈ʒu�p�ϐ�
		float m_mou_by;//�e�ۂ� Y �����̈ʒu�p�ϐ�
		
};
