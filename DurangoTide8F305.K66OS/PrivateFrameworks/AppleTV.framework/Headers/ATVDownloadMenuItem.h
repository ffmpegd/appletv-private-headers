/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <BRControl.h> // Unknown library

@class BRTextControl, ATVMultistateProgressIndicator, BRImageControl, BRMarqueeTextControl;

__attribute__((visibility("hidden")))
@interface ATVDownloadMenuItem : BRControl {
@private
	BRMarqueeTextControl *_downloadTitle;	// 44 = 0x2c
	BRImageControl *_downloadOrPauseButtonImage;	// 48 = 0x30
	ATVMultistateProgressIndicator *_progressIndicator;	// 52 = 0x34
	BRTextControl *_statusText;	// 56 = 0x38
	BRTextControl *_percentCompleteText;	// 60 = 0x3c
	float _percentComplete;	// 64 = 0x40
}
+ (id)_downloadButtonImage;	// 0x3071b855
+ (id)_pauseButtonImage;	// 0x3071b801
+ (void)_setStateGraphicsOnProgressIndicator:(id)indicator;	// 0x3071b589
+ (id)_statusTextAttributes;	// 0x3071b7ad
- (id)init;	// 0x3071bb85
- (void)_downloadStateChangedNotificationHandler:(id)handler;	// 0x3071b2cd
- (void)_requeryAssetAndUpdateUI;	// 0x3071b359
- (void)_setDownloadStateForDownload:(id)download;	// 0x3071b8a9
- (void)_setPercentComplete:(float)complete;	// 0x3071bfc9
- (void)_setStatusText:(id)text;	// 0x3071b9f9
- (void)_setTitle:(id)title;	// 0x3071becd
- (void)_updateRequestNotificationHandler:(id)handler;	// 0x3071b2b9
- (void)controlWasFocused;	// 0x3071ba91
- (void)controlWasUnfocused;	// 0x3071ba7d
- (void)dealloc;	// 0x3071bacd
- (CGRect)focusCursorFrame;	// 0x3071be5d
- (void)layoutSubcontrols;	// 0x3071c0fd
- (void)setDownload:(id)download;	// 0x3071baa5
@end

