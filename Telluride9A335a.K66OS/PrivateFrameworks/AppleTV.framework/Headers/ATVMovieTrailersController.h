/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"

@class BRPanelControl, BRCursorControl, BRAlertControl, BRWaitPromptControl, NSArray, BRScrollControl, BRMovieTrailersProvider;

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
- (id)init;	// 0x3416cab9
- (void)_addErrorControlWithError:(id)error;	// 0x3416d75d
- (void)_addLoadingControl;	// 0x3416d181
- (void)_addTrailersMediaControl;	// 0x3416d2b9
- (id)_movieTrailers:(id *)trailers;	// 0x3416d09d
- (void)_movieTrailersLoadFailed:(id)failed;	// 0x3416daf9
- (void)_movieTrailersLoaded:(id)loaded;	// 0x3416d8c5
- (void)_movieTrailersLoading:(id)loading;	// 0x3416da8d
- (id)_movieTrailersTitle;	// 0x3416d07d
- (void)_objectSelected:(id)selected;	// 0x3416dbad
- (void)_passErrorControlWithError:(id)error;	// 0x3416d7e1
- (void)_passLoadingControl:(id)control;	// 0x3416d2a9
- (void)_passRemoveControls:(id)controls;	// 0x3416d16d
- (void)_passTrailersMediaControl:(id)control;	// 0x3416d74d
- (id)_providers;	// 0x3416d7f1
- (void)_removeControls;	// 0x3416d0ad
- (id)accessibilityLabel;	// 0x3416d08d
- (BOOL)brEventAction:(id)action;	// 0x3416cf01
- (void)controlWasActivated;	// 0x3416cd1d
- (void)dealloc;	// 0x3416cc09
- (BOOL)isNetworkDependent;	// 0x3416cd89
- (void)layoutSubcontrols;	// 0x3416cd8d
@end

