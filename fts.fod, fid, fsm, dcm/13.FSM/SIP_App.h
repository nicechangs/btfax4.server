#pragma once


enum APPLICATION_EVENT{
	APPEVT_MAKE_CALL,
	APPEVT_PROCEED_CALL,
	APPEVT_ACCEPT_CALL,
	APPEVT_REJECT_CALL,
	APPEVT_DISCONNECT_CALL,
	APPEVT_MODIFY_CALL,
	APPEVT_INFO_CALL,
	APPEVT_OPTION_CALL,
	NUM_OF_APPEVT
};

extern const char const_DialogReason[BTDialog::NUM_OF_DIALOG_REASON][64];