
#include <Windows.h>
//マクロ定義
#define CLASS_NAME "Windowclass"			//ウインドウクラスの名前
#define WINDOW_NAME"ウインドウ表示処理"		//ウインドウの名前
#define SCREEN_WIDTH[1280]		//ウインドウの幅
#define SCREEN_HEIGHT[720]		//ウインドウの高さ
#define ID_BUTTON_FINISH (101)	//終了ボタンのID

//プロトタイプ宣言
LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM IParam);


//メイン関数
int WINAPI WinMain(HINSTANCE hlnstnce, HINSTANCE hlnstanceprev, LPSTR lpCmdLine, int nCmdShow)
{
	{
		WINDCLASSEX wcex =
	}

	{
		sizeof(WNDCLASSEX),		//WINDCLASSEXのメモリサイズ
			CS_CLASSDC,			//ウインドウのスタイル
			WindowProc,			//ウインドウプロシージャ
			0,					//0にする
			0,					//0にする
			hInstance,			//インスタンスノーツドル
			LoadIcom(NULL, IDI_APPLICATION),		//タスクバーのアイコン
			LoadCursor(NULL, IDC_ARROW),			//マウスカーソル
			(HBRUSH)(COLOR_WINDOW + 1)			//クライアント領域の背景色
			NULL,								//メニューバー
			CLASS_NAME							//ウインドウクラスの名前
			LoadIcon(NULL, IDI_APPLICATION),	//ファイルのアイコン
	};
	HWND hWind;		//ウインドウハンドル(識別子)
	MSG msg;		//メッセージが格納する変数

	//ウインドウクラスの登録
	RegisterClassEX(&Wcex);

	//ウインドウを生成
	hwnd = create WindowEX(0,		//拡張ウインドスタイル
		CLASS_NAME,					//ウインドクラスの名前
		WINDOW_NAME,				//ウインドウの名前
		WS_OVERLAPPEWINDOW,			//ウインドウスタイル
		CW_USEDEFAULT,				//ウインドウの左上x座標
		CW_USEDEFAULT,				//ウインドウの左上x座標
		SCREEN_WIDTH,				//ウインドウの幅
		SCREEN_HEIGHT,				//ウインドウの高さ
		NULL,						//親ウインドウのハンドル
		NULL,						//メニューまたはウインドウID
		hlnstnce,					//インスタンスハンドル
		NULL);						//ウインドウ作成データ

	//ウインドウの表示
	ShowWindow(hWnd, ncmdShow);		//ウインドウの表示状態を設定
	UpdateWinDow(hWnd);				//クライアント領域を更新

	//メッセージループ
	while(GetMessage(&msg,NULL,0,0)! = 0)
	{
		//メッセージの設定
		TranslateMessage(&msg);		//仮想キーメッセージを文字メッセージに変換
		DispachMessage(&msg);		//ウインドウプロシージャへメッセージを送出
	}
	//ウインドウクラスの登録を解除
	Unregister Crass(CLASS_NAMEwcex.hlnstance);

	return(int)msg.wParam;
}

LRESULT WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM IParam)
{
	int  DefWindow;
	int nID;
	//ウインドウプロシージャ
	LRESULT CALLBACK
	{
		int nID
		HWND hWnd Buttonfinish
	

	switch (uMsg)
	{
	case WM_DESTROY:		//ウインドウ破棄のメッセージ
		//WM_QUITを送る
		PostQuitMessage(0);

	case WM_CREATE:			//ウインドウ生成メッセージ
		//入力ウインドウの生成
		hWndEditInPut = CreateWindowEX(0,"EDIT","",(WS_CHILD | WS_VISIBLE | WS_BORDER | ES_RIGHT),50,50,250,25,hWnd,


		)

		case WM_KEYDOWN;	//キー押下のメッセージ
			switch (wParam)
			{
			case VK_ESCAPE:	//[ESC]キーが押された
				//ウインドウを破棄する(WN_DESTROYメッセージを送る)
				DestroyWindow(hWnd);
				break;
			}
		case WM_KEYDOWN:
			switch (wParam)
			{
			case VK_ESCAPE:
				nID = MessageBox(hWnd, "終了しますか?", "終了メッセージ", MB_YESNO);
				if (nID == IDYES)
				{
					//ウインドウを破棄する
					DestroyWindow(hWnd);
					break;
				}
			}
		case WM_COMMAND:	//コマンド発行のメッセージ
			if (LOWORD(wParam) == ID_BUTTON_FINISH)
			{//終了ボタンが押された
				nID = MessageBOX(hWnd, "終了しますか？", "終了メッセージ", MB_YESNO);
				if (nID == IDYES)
				{
					//ウインドウを破棄
					DestroyWindow(hWnd);
				}
			}
		case WM_CREATE:		//ウインドウ生成のメッセージ
			//終了ボタンの生成
			hWndButtonFinish = Create WindowEX
		}
			break;
	}
	return DefWindowProc(hWnd, uMsg, wParam, lParam);			//既定の処理を返す
}
