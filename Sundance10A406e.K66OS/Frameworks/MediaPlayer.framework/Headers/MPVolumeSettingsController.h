/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UITwoSidedAlertController.h> // Unknown library
#import "UITwoSidedAlertControllerDelegate.h"

@class NSString;

@interface MPVolumeSettingsController : UITwoSidedAlertController <UITwoSidedAlertControllerDelegate> {
	NSString *_audioCategory;	// 20 = 0x14
}
- (id)initWithAudioCategory:(id)audioCategory;	// 0x35cf4d8d
- (void)audioRoutingPicker:(id)picker didSelectRouteAtIndex:(int)index;	// 0x35cf5001
- (id)createBackAlert;	// 0x35cf4f8d
- (id)createFrontAlert;	// 0x35cf4e41
- (void)dealloc;	// 0x35cf4df5
- (void)twoSidedAlertControllerDidDismiss:(id)twoSidedAlertController;	// 0x35cf4fc5
@end
