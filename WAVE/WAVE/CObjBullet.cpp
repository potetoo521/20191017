#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"

#include "ObjHero.h"
#include "GameHead.h"
#include "CObjBullet.h"]
#include "GameL\HitBoxManager.h"


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�R���X�g���N�^
CObjBullet::CObjBullet(float x, float y)
{
	m_px = x;
	m_py = y;
	

	//�����蔻��p��HitBox���쐬
Hits::SetHitBox(this, m_px, m_py, 64, 64, ELEMENT_WHITE,  OBJ_BULLET, 1);


}

	
}

//�C�j�V�����C�Y
void CObjBullet::Init()
{
	m_vx = 0.2f;
	m_vy = -0.2f;

	m_mou_bx = 0.0f;
	m_mou_by = 0.0f;


	flag = true;
	speed = 5;

}



//�C�j�V�����C�Y
void CObjBullet::Action()
{
	//�}�E�X�̈ʒu���擾
	if (flag==true)
	{
		m_mou_bx = (float)Input::GetPosX();
		m_mou_by = (float)Input::GetPosY();
		flag = false;
	}
	

	
	//m_bx += speed * cosf((90)*3.14 / 180.0f);
	//m_by += speed * sinf((90)*3.14 / 180.0f);

	//m_vx += speed * cos(angle / 180 * 3.14);
	//m_vy += speed * sin(angle / 180 * 3.14);

	//m_bx = m_vx;
	//m_by = m_vy;
	//if (flag == true)

	
		m_bx += (m_mou_bx - m_bx)*m_vx;
		m_by += (m_by - m_mou_by)*m_vy;

		
	
	

	
	


		//�̈�O�ɏo����e�ۂ�j������
		if (m_bx > 800.0f)
		{
			this->SetStatus(false);
		}

	//HitBox�̈ʒu�̕ύX
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_px, m_py);

	//�G�@�I�u�W�F�N�g�ƐڐG������e�ۏ���
	if (hit->CheckObjNameHit(OBJ_ENEMY) != nullptr)
	{
		this->SetStatus(false);//���g�ɏ������߂��o���B
		Hits::DeleteHitBox(this);//�e�ۂ����L����HitBox�ɏ�������B


	}

}

//�h���[
void CObjBullet::Draw()
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
	src.m_top    = 64.0f;
	src.m_left   = 256.0f;
	src.m_right  = 320.0f;
	src.m_bottom = 128.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top    = 0.0f  + m_by;
	dst.m_left   = 0.0f  + m_bx;
	dst.m_right  = 16.0f + m_bx;
	dst.m_bottom = 16.0f + m_by;

	//�`��
	Draw::Draw(1, &src, &dst, c, 0.0f);
	
}