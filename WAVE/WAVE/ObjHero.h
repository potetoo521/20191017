#pragma once
//�g�p����w�b�_�[�t�@�C��
#include "GameL\SceneObjManager.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�V�[��:��l��
class CObjHero :public CObj
{
    public:CObjHero() {};
	       ~CObjHero() {};
		   void Init();   //�C�j�V�����C�Y
		   void Action(); //�A�N�V����
		   void Draw();   //�h���[
	private:
		float m_px;    //�ʒu
		float m_py;
		float m_vx;    //�ړ��x�N�g��
		float m_vy;
		float m_posture;  //�p��

		int m_ani_time;  //�A�j���[�V�����t���[������Ԋu
		int m_ani_frame; //�`��t���[��

		float m_speed_power;  //�X�s�[�h�p���[
		float m_ani_max_time; //�A�j���[�V��������Ԋu�ő�l
};