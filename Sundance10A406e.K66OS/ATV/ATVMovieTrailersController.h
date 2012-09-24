/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class BRScrollControl, NSArray, BRMovieTrailersProvider, BRAlertControl, BRCursorControl, BRPanelControl, BRWaitPromptControl;

__attribute__((visibility("hidden")))
@interface ATVMovieTrailersController : BRController {
	NSArray *_trailers;	// 100 = 0x64
	BRPanelControl *_panel;	// 104 = 0x68
	BRMovieTrailersProvider *_trailersProvider;	// 108 = 0x6c
	BRWaitPromptControl *_loadingControl;	// 112 = 0x70
	BRScrollControl *_scroller;	// 116 = 0x74
	BRCursorControl *_cursor;	// 120 = 0x78
	BRAlertControl *_errorControl;	// 124 = 0x7c
}
- (id)init;	// 0x109859
- (void)_addErrorControlWithError:(id)error;	// 0x10a479
- (void)_addLoadingControl;	// 0x109ef5
- (void)_addTrailersMediaControl;	// 0x10a029
- (id)_movieTrailers:(id *)trailers;	// 0x109e21
- (void)_movieTrailersLoadFailed:(id)failed;	// 0x10a811
- (void)_movieTrailersLoaded:(id)loaded;	// 0x10a5dd
- (void)_movieTrailersLoading:(id)loading;	// 0x10a7a1
- (id)_movieTrailersTitle;	// 0x109e01
- (void)_objectSelected:(id)selected;	// 0x10a8c5
- (void)_passErrorControlWithError:(id)error;	// 0x10a4f9
- (void)_passLoadingControl:(id)control;	// 0x10a019
- (void)_passRemoveControls:(id)controls;	// 0x109ee1
- (void)_passTrailersMediaControl:(id)control;	// 0x10a469
- (id)_providers;	// 0x10a509
- (void)_removeControls;	// 0x109e31
- (id)accessibilityLabel;	// 0x109e11
- (BOOL)brEventAction:(id)action;	// 0x109c89
- (void)controlWasActivated;	// 0x109aad
- (void)dealloc;	// 0x109999
- (BOOL)isNetworkDependent;	// 0x109b15
- (void)layoutSubcontrols;	// 0x109b19
@end
