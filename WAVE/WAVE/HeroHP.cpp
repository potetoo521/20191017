#include "GameL\DrawTexture.h"
#include "GameHead.h"
#include "HeroHP.h"
#include "GameL\HitBoxManager.h"


//�g�p����l�[���X�y�[�X
using namespace GameL;


//�C�j�V�����C�Y
void CObjHeroHP::Init()
{
	
}

//�A�N�V����
void CObjHeroHP::Action()
{
	
}

//�h���[
void CObjHeroHP::Draw()
{
	/*//�����A�j���[�V��������o�^
	int AniData[4] =
	{
		1 , 0 , 2 , 0,
	};w
	*/

	//�`��J���[���
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//�`�挳�؂���ʒu
	RECT_F dst;//�`���\���ʒu

	//�؂���ʒu�̐ݒ�
	src.m_top = 64.0f;
	src.m_left = 256.0f;
	src.m_right = 320.0f;
	src.m_bottom = 128.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top = 0.0f    ;
	dst.m_left = 0.0f   ;
	dst.m_right = 16.0f ;
	dst.m_bottom = 16.0f;

	//�`��
	Draw::Draw(1, &src, &dst, c, 0.0f);

}