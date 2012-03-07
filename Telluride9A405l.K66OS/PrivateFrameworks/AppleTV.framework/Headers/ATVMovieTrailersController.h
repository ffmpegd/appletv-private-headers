/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"

@class NSArray, BRScrollControl, BRMovieTrailersProvider, BRPanelControl, BRCursorControl, BRAlertControl, BRWaitPromptControl;

@interface ATVMovieTrailersController : BRController {
@private
	NSArray *_trailers;	// 80 = 0x50
	BRPanelControl *_panel;	// 84 = 0x54
	BRMovieTrailersProvider *_trailersProvider;	// 88 = 0x58
	BRWaitPromptControl *_loadingControl;	// 92 = 0x5c
	BRScrollControl *_scroller;	// 96 = 0x60
	BRCursorControl *_cursor;	// 100 = 0x64
	BRAlertControl *_errorControl;	// 104 = 0x68
}
- (id)init;	// 0x35d7de15
- (void)_addErrorControlWithError:(id)error;	// 0x35d7eab9
- (void)_addLoadingControl;	// 0x35d7e4dd
- (void)_addTrailersMediaControl;	// 0x35d7e615
- (id)_movieTrailers:(id *)trailers;	// 0x35d7e3f9
- (void)_movieTrailersLoadFailed:(id)failed;	// 0x35d7ee55
- (void)_movieTrailersLoaded:(id)loaded;	// 0x35d7ec21
- (void)_movieTrailersLoading:(id)loading;	// 0x35d7ede9
- (id)_movieTrailersTitle;	// 0x35d7e3d9
- (void)_objectSelected:(id)selected;	// 0x35d7ef09
- (void)_passErrorControlWithError:(id)error;	// 0x35d7eb3d
- (void)_passLoadingControl:(id)control;	// 0x35d7e605
- (void)_passRemoveControls:(id)controls;	// 0x35d7e4c9
- (void)_passTrailersMediaControl:(id)control;	// 0x35d7eaa9
- (id)_providers;	// 0x35d7eb4d
- (void)_removeControls;	// 0x35d7e409
- (id)accessibilityLabel;	// 0x35d7e3e9
- (BOOL)brEventAction:(id)action;	// 0x35d7e25d
- (void)controlWasActivated;	// 0x35d7e079
- (void)dealloc;	// 0x35d7df65
- (BOOL)isNetworkDependent;	// 0x35d7e0e5
- (void)layoutSubcontrols;	// 0x35d7e0e9
@end

