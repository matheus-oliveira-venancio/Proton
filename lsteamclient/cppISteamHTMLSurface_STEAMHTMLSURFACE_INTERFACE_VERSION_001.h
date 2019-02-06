#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Init(void *);
extern bool cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Shutdown(void *);
extern SteamAPICall_t cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CreateBrowser(void *, const char *, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_RemoveBrowser(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_LoadURL(void *, HHTMLBrowser, const char *, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetSize(void *, HHTMLBrowser, uint32, uint32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopLoad(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Reload(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoBack(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoForward(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AddHeader(void *, HHTMLBrowser, const char *, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ExecuteJavascript(void *, HHTMLBrowser, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseUp(void *, HHTMLBrowser, EHTMLMouseButton);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDown(void *, HHTMLBrowser, EHTMLMouseButton);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDoubleClick(void *, HHTMLBrowser, EHTMLMouseButton);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseMove(void *, HHTMLBrowser, int, int);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseWheel(void *, HHTMLBrowser, int32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyDown(void *, HHTMLBrowser, uint32, EHTMLKeyModifiers);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyUp(void *, HHTMLBrowser, uint32, EHTMLKeyModifiers);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyChar(void *, HHTMLBrowser, uint32, EHTMLKeyModifiers);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetHorizontalScroll(void *, HHTMLBrowser, uint32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetVerticalScroll(void *, HHTMLBrowser, uint32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetKeyFocus(void *, HHTMLBrowser, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ViewSource(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CopyToClipboard(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_PasteFromClipboard(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Find(void *, HHTMLBrowser, const char *, bool, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopFind(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GetLinkAtPosition(void *, HHTMLBrowser, int, int);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AllowStartRequest(void *, HHTMLBrowser, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_JSDialogResponse(void *, HHTMLBrowser, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_FileLoadDialogResponse(void *, HHTMLBrowser, const char **);
#ifdef __cplusplus
}
#endif
