
#include <Windows.h>
//�}�N����`
#define CLASS_NAME "Windowclass"			//�E�C���h�E�N���X�̖��O
#define WINDOW_NAME"�E�C���h�E�\������"		//�E�C���h�E�̖��O
#define SCREEN_WIDTH[1280]		//�E�C���h�E�̕�
#define SCREEN_HEIGHT[720]		//�E�C���h�E�̍���
#define ID_BUTTON_FINISH (101)	//�I���{�^����ID

//�v���g�^�C�v�錾
LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM IParam);


//���C���֐�
int WINAPI WinMain(HINSTANCE hlnstnce, HINSTANCE hlnstanceprev, LPSTR lpCmdLine, int nCmdShow)
{
	{
		WINDCLASSEX wcex =
	}

	{
		sizeof(WNDCLASSEX),		//WINDCLASSEX�̃������T�C�Y
			CS_CLASSDC,			//�E�C���h�E�̃X�^�C��
			WindowProc,			//�E�C���h�E�v���V�[�W��
			0,					//0�ɂ���
			0,					//0�ɂ���
			hInstance,			//�C���X�^���X�m�[�c�h��
			LoadIcom(NULL, IDI_APPLICATION),		//�^�X�N�o�[�̃A�C�R��
			LoadCursor(NULL, IDC_ARROW),			//�}�E�X�J�[�\��
			(HBRUSH)(COLOR_WINDOW + 1)			//�N���C�A���g�̈�̔w�i�F
			NULL,								//���j���[�o�[
			CLASS_NAME							//�E�C���h�E�N���X�̖��O
			LoadIcon(NULL, IDI_APPLICATION),	//�t�@�C���̃A�C�R��
	};
	HWND hWind;		//�E�C���h�E�n���h��(���ʎq)
	MSG msg;		//���b�Z�[�W���i�[����ϐ�

	//�E�C���h�E�N���X�̓o�^
	RegisterClassEX(&Wcex);

	//�E�C���h�E�𐶐�
	hwnd = create WindowEX(0,		//�g���E�C���h�X�^�C��
		CLASS	//�e�E�C���h�E�̃n���h��
		NULL,						//���j���[�܂��̓E�C���h�EID
		hlnstnce,					//�C���X�^���X�n���h��
		NULL);						//�E�C���h�E�쐬�f�[�^

	//�E�C���h�E�̕\��
	ShowWindow(hWnd, ncmdShow);		//�E�C���h�E�̕\����Ԃ�ݒ�
	UpdateWinDow(hWnd);				//�N���C�A���g�̈���X�V

	//���b�Z�[�W���[�v
	while(GetMessage(&msg,NULL,0,0)! = 0)
	{
		//���b�Z�[�W�̐ݒ�
		TranslateMessage(&msg);		//���z�L�[���b�Z�[�W�𕶎����b�Z�[�W�ɕϊ�
		DispachMessage(&msg);		//�E�C���h�E�v���V�[�W���փ��b�Z�[�W�𑗏o
	}
	//�E�C���h�E�N���X�̓o�^������
	Unregister Crass(CLASS_NAMEwcex.hlnstance);

	return(int)msg.wParam;
}

LRESULT WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM IParam)
{
	int  DefWindow;
	int nID;
	//�E�C���h�E�v���V�[�W��
	LRESULT CALLBACK
	{
		int nID
		HWND hWnd Buttonfinish
	

		hWndEditInPut = CreateWindowEX(0,"EDIT","",(WS_CHILD | WS_VISIBLE | WS_BORDER | ES_RIGHT),50,50,250,25,hWnd,

			argbasssv
			zbfdrgfb
		)

		case WM_KEYDOWN;	//�L�[�����̃��b�Z�[�W
			switch (wParam)
			{
			case VK_ESCAPE:	//[ESC]�L�[�������ꂽ
				//�E�C���h�E��j������(WN_DESTROY���b�Z�[�W�𑗂�)
				DestroyWindow(hWnd);
				break;
			}
		case WM_KEYDOWN:
			switch (wParam)
			{
			case VK_ESCAPE:
				nID = MessageBox(hWnd, "�I�����܂���?", "�I�����b�Z�[�W", MB_YESNO);
				if (nID == IDYES)
				{
					//�E�C���h�E��j������
					DestroyWindow(hWnd);
					break;
				}
			}
		case WM_COMMAND:	//�R�}���h���s�̃��b�Z�[�W
			if (LOWORD(wParam) == ID_BUTTON_FINISH)
			{//�I���{�^���������ꂽ
				nID = MessageBOX(hWnd, "�I�����܂����H", "�I�����b�Z�[�W", MB_YESNO);
				if (nID == IDYES)
				{
					//�E�C���h�E��j��
					DestroyWindow(hWnd);
				}
			}
		case WM_CREATE:		//�E�C���h�E�����̃��b�Z�[�W
			//�I���{�^���̐���
			hWndButtonFinish = Create WindowEX
		}
			break;
	}
	return DefWindowProc(hWnd, uMsg, wParam, lParam);			//����̏�����Ԃ�
}
