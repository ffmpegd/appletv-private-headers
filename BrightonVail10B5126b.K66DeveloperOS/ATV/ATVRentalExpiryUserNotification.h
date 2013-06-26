/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRReflectedImageControl, BRTextControl;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface ATVRentalExpiryUserNotification : BRControl {
	BRControl *_dialogBox;	// 84 = 0x54
	BRReflectedImageControl *_imageControl;	// 88 = 0x58
	BRTextControl *_titleControl;	// 92 = 0x5c
	id<BRMediaAsset> _asset;	// 96 = 0x60
}
+ (void)postExpiryNotificationForAsset:(id)asset;	// 0x20f839
- (id)init;	// 0x20f8d1
- (void)_playAsset;	// 0x210151
- (void)_setAsset:(id)asset;	// 0x20fe91
- (BOOL)brEventAction:(id)action;	// 0x20fc01
- (void)dealloc;	// 0x20fb9d
- (void)layoutSubcontrols;	// 0x20fcb5
@end
