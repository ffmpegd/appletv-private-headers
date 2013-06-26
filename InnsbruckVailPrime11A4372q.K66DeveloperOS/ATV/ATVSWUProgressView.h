/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRImageControl, BRTextControl, NSString, BRProgressBarWidget;

__attribute__((visibility("hidden")))
@interface ATVSWUProgressView : BRControl {
	BRImageControl *_image;	// 84 = 0x54
	BRProgressBarWidget *_progress;	// 88 = 0x58
	BRTextControl *_text;	// 92 = 0x5c
	NSString *_secondaryProgressImagePath;	// 96 = 0x60
	BOOL _generateSecondaryProgressImage;	// 100 = 0x64
	float _lastProgressPercentage;	// 104 = 0x68
	float _lastAXProgressPercentage;	// 108 = 0x6c
}
@property(readonly, retain) NSString *secondaryProgressImagePath;	// G=0x25721d; converted property
- (id)initGeneratingSecondaryProgressImage:(BOOL)image;	// 0x256881
- (id)accessibilityLabel;	// 0x25722d
- (void)controlWasActivated;	// 0x256b4d
- (void)dealloc;	// 0x256ac1
- (void)layoutSubcontrols;	// 0x256b81
// converted property getter: - (id)secondaryProgressImagePath;	// 0x25721d
- (void)setPercentComplete:(id)complete;	// 0x257181
- (void)setText:(id)text;	// 0x2570e1
@end
