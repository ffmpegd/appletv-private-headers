/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIButton.h> // Unknown library


@interface TPAudioSelectionButton : UIButton {
	int _index;	// 140 = 0x8c
}
@property(assign, nonatomic) int index;	// G=0x3171ffa1; S=0x3171ffb1; @synthesize=_index
- (void)_audioSelectionButtonTitleRect:(CGRect *)rect imageRect:(CGRect *)rect2 forContentRect:(CGRect)contentRect;	// 0x31720091
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x31720029
// declared property getter: - (int)index;	// 0x3171ffa1
// declared property setter: - (void)setIndex:(int)index;	// 0x3171ffb1
- (CGRect)titleRectForContentRect:(CGRect)contentRect;	// 0x3171ffc1
@end

