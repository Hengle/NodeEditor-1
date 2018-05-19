#pragma once
// Since we will not actually need a GUID for interface strings, because we do not ever need to compare them
// And  Also since for peculiar reason a global string array defined here isn't just working
// We could just use Macro Definitions instead
#define Locale_Chn	// Change Locale selection here

// >>> English Locale
#if defined(Locale_Eng)
// Interface String Definitions
// Main Menu Bar
#define Interface_Filemenu L"FILE"	// Visual Studio Style
#define Interface_Windowmenu L"WINDOW"
#define Interface_Helpmenu L"HELP"
// Main Menu Popups
#define Interface_PopupMenu_Save L"Save"
#define Interface_PopupMenu_Exit L"Quit"
#define Interface_PopupMenu_Fullscreen L"Fullscreen"
#define Interface_PopupMenu_Shortcuts L"Shortcuts"
#define Interface_PopupMenu_Manual L"Manual"
#define Interface_PopupMenu_About L"About"
// Popup Screens_About Screen
#define Interface_AboutScreen_Original L"Original Author: Chaojian Zhang"
#define Interface_AboutScreen_Contact L"Contact: szinubuntu@gmail.com"
// Popup Screens_Shortcuts Screen

// Popup Menu_MeshCreationPopup
#define Interface_MeshCreationPop_AddMesh L"Add MeshNode"
#define Interface_MeshCreationPop_RotatingCube L"Rotating Cube"
#define Interface_MeshCreationPop_AnywhereDoor L"Anywhere Door"
// Other Popups
#define Interface_PopupMenu_AddMeshNode L"Add MeshNode"
// Property Panels
#define Interface_PropertyPanel_Document L"Document:"
#define Interface_PropertyPanel_ImageNode L"Image Node:"
#define Interface_PropertyPanel_MeshNode L"Mesh Node:"
#define Interface_PropertyPanel_TextNode L"Text Node:"
#define Interface_PropertyPanel_CreationTime L"Date Created:"
#define Interface_PropertyPanel_EditTime L"Date Modified:"
#define Interface_PropertyPanel_Transformation L"Transformation:"
#define Interface_PropertyPanel_TransformationX L"X:"
#define Interface_PropertyPanel_TransformationY L"Y:"
#define Interface_PropertyPanel_TransformationZ L"Z:"
#define Interface_PropertyPanel_MeshName L"Mesh Name:"
#define Interface_PropertyPanel_Comment L"Comment:"
#define Interface_PropertyPanel_Export L"Export"
// Map Editor
#define Interface_MapEditor_ExportMap L"Export Map"

// System Internal Outputs
#define TextFile_Export_CreateTime L"Created: "
#define TextFile_Export_Aux_Newline L"\n"

// Canvas Interface Informations
#define Canvas_Information_Welcome L"Welcome!"	// Appear when first open application
#define Canvas_Information_UsageTip_CreateTextNode L"Use Ctrl+LMB click on the ground to place a text node."	// Appear when user click on blank space
#define Canvas_Information_UsageTip_ShiftToAccelerate L"Use Shift to accelerate."
#define Canvas_Information_LoadingMesh_Begin L"Streaming mesh..."
#define Canvas_Information_LoadingMesh_Finish L"Mesh loaded!"
#define Canvas_Information_Save L"Document saved!"
// ///////////////////////////////////////////////////////////////////English Locale

// >>> Chinese Locale
#elif defined(Locale_Chn)
// Interface String Definitions
// Main Menu Bar
#define Interface_Filemenu L"�ļ�"	// Visual Studio Style
#define Interface_Windowmenu L"����"
#define Interface_Helpmenu L"����"
// Main Menu Popups
#define Interface_PopupMenu_Save L"����"
#define Interface_PopupMenu_Exit L"�뿪"
#define Interface_PopupMenu_Fullscreen L"ȫ��"
#define Interface_PopupMenu_Shortcuts L"�ȼ�"
#define Interface_PopupMenu_Manual L"�ֲ�"
#define Interface_PopupMenu_About L"����"
// Popup Screens_About Screen
#define Interface_AboutScreen_Original L"ԭ����: �ų���"
#define Interface_AboutScreen_Contact L"���ʣ�szinubuntu@gmail.com"
// Popup Screens_Shortcuts Screen

// Popup Menu_MeshCreationPopup
#define Interface_MeshCreationPop_AddMesh L"�������ڵ�"
#define Interface_MeshCreationPop_RotatingCube L"��ת����"
#define Interface_MeshCreationPop_AnywhereDoor L"������"
// Other Popups
#define Interface_PopupMenu_AddMeshNode L"�������ڵ�"
// Property Panels
#define Interface_PropertyPanel_Document L"�ĵ�:"
#define Interface_PropertyPanel_ImageNode L"ͼƬ�ڵ�:"
#define Interface_PropertyPanel_MeshNode L"����ڵ�:"
#define Interface_PropertyPanel_TextNode L"���ֽڵ�:"
#define Interface_PropertyPanel_CreationTime L"��������:"
#define Interface_PropertyPanel_EditTime L"�޸�����:"
#define Interface_PropertyPanel_Transformation L"�任:"
#define Interface_PropertyPanel_TransformationX L"X:"
#define Interface_PropertyPanel_TransformationY L"Y:"
#define Interface_PropertyPanel_TransformationZ L"Z:"
#define Interface_PropertyPanel_MeshName L"��������:"
#define Interface_PropertyPanel_Comment L"����:"	// L"����:"
#define Interface_PropertyPanel_Export L"����"
// Map Editor
#define Interface_MapEditor_ExportMap L"������ͼ"

// System Internal Outputs
#define TextFile_Export_CreateTime L"������"
#define TextFile_Export_Aux_Newline L"\n"

// Canvas Interface Informations
#define Canvas_Information_Welcome L"��ӭ!"	// Appear when first open application
#define Canvas_Information_UsageTip_CreateTextNode L"ʹ��Ctrl+LMB��ƽ���ϵ����Դ���һ�����ֽڵ�."	// Appear when user click on blank space
#define Canvas_Information_UsageTip_ShiftToAccelerate L"ʹ��Shift�������ƶ�."
#define Canvas_Information_LoadingMesh_Begin L"��������..."
#define Canvas_Information_LoadingMesh_Finish L"����������!"
#define Canvas_Information_Save L"�ĵ��ѱ���!"

// ///////////////////////////////////////////////////////////////////Chinese Locale

// >>> Opps, forget to define the macros
#else
static_assert(false);
#endif