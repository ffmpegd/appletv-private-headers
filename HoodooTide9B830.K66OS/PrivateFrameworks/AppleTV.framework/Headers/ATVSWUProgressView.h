/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRTextControl, BRImageControl, BRProgressBarWidget, NSString;

__attribute__((visibility("hidden")))
@interface ATVSWUProgressView : BRControl {
@private
	BRImageControl *_image;	// 48 = 0x30
	BRProgressBarWidget *_progress;	// 52 = 0x34
	BRTextControl *_text;	// 56 = 0x38
	NSString *_secondaryProgressImagePath;	// 60 = 0x3c
	float _lastProgressPercentage;	// 64 = 0x40
	float _lastAXProgressPercentage;	// 68 = 0x44
}
@property(readonly, retain) NSString *secondaryProgressImagePath;	// G=0x32915721; converted property
- (id)init;	// 0x32914d71
- (id)initForUpdateProgress;	// 0x32914e85
- (id)accessibilityLabel;	// 0x32915731
- (void)controlWasActivated;	// 0x32915081
- (void)dealloc;	// 0x32914ff9
- (void)layoutSubcontrols;	// 0x329150b5
// converted property getter: - (id)secondaryProgressImagePath;	// 0x32915721
- (void)setUpdatePercentage:(float)percentage;	// 0x32915699
@end
