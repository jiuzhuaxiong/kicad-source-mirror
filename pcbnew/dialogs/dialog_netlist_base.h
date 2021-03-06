///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 19 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __DIALOG_NETLIST_BASE_H__
#define __DIALOG_NETLIST_BASE_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
class WX_HTML_REPORT_PANEL;

#include "dialog_shim.h"
#include <wx/string.h>
#include <wx/radiobox.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/statline.h>
#include <wx/checkbox.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/bmpbuttn.h>
#include <wx/panel.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class DIALOG_NETLIST_BASE
///////////////////////////////////////////////////////////////////////////////
class DIALOG_NETLIST_BASE : public DIALOG_SHIM
{
	private:
	
	protected:
		enum
		{
			ID_READ_NETLIST_FILE = 1000,
			ID_TEST_NETLIST,
			ID_COMPILE_RATSNEST
		};
		
		wxRadioBox* m_Select_By_Timestamp;
		wxRadioBox* m_ChangeExistingFootprintCtrl;
		wxRadioBox* m_DeleteBadTracks;
		wxRadioBox* m_RemoveExtraFootprintsCtrl;
		wxRadioBox* m_rbSingleNets;
		wxButton* m_buttonRead;
		wxButton* m_buttonClose;
		wxButton* m_buttonFPTest;
		wxButton* m_buttonRebild;
		wxStaticLine* m_staticline11;
		wxCheckBox* m_checkDryRun;
		wxCheckBox* m_checkBoxSilentMode;
		wxStaticLine* m_staticline1;
		wxTextCtrl* m_NetlistFilenameCtrl;
		wxBitmapButton* m_browseButton;
		WX_HTML_REPORT_PANEL* m_MessageWindow;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnReadNetlistFileClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnUpdateUIValidNetlistFile( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void OnCancelClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTestFootprintsClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCompileRatsnestClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickSilentMode( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOpenNetlistClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DIALOG_NETLIST_BASE( wxWindow* parent, wxWindowID id = wxID_CANCEL, const wxString& title = _("Netlist"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER ); 
		~DIALOG_NETLIST_BASE();
	
};

#endif //__DIALOG_NETLIST_BASE_H__
