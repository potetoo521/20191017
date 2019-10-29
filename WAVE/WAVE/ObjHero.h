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
		   void SetX(float x);//�ʒu���X�ύX�p
		   void SetY(float y);//�ʒu���Y�ύX�p
		   float GetX();      //�ʒu���X�擾�p
		   float GetY();      //�ʒu���Y�擾�p

	private:
		float m_px;    //�ʒu
		float m_py;
		bool  m_f;     //�e�۔��ː���p

		float m_vx;    //�ړ��x�N�g��
		float m_vy;
		float m_posture;  //�p��

		int m_ani_time;  //�A�j���[�V�����t���[������Ԋu
		int m_ani_frame; //�`��t���[��

		float m_speed_power;  //�X�s�[�h�p���[
		float m_ani_max_time; //�A�j���[�V��������Ԋu�ő�l

		int m_hp;//��l���̍ő�HP
		int m_hp2;//��l���̍ő�HP�̃R�s�[

		int m_nuw_hp;//��l���̌��݂�HP
		int m_nue_hp2;//��l���̌��݂�HO�̃R�s�[

		int gX;//�Q�[�WX���W
		int gY;//�Q�[�WY���W

		int gX2;//�Q�[�W���W�R�s�[
		int attaku;//�G�̍U����
};