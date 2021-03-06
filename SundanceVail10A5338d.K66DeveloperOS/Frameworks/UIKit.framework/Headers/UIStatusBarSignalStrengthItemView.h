/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStatusBarItemView.h"


__attribute__((visibility("hidden")))
@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView {
	int _signalStrengthRaw;	// 112 = 0x70
	int _signalStrengthBars;	// 116 = 0x74
	BOOL _enableRSSI;	// 120 = 0x78
	BOOL _showRSSI;	// 121 = 0x79
}
- (id)_stringForRSSI;	// 0x30f0f6d9
- (id)contentsImageForStyle:(int)style;	// 0x30c40ab1
- (float)extraRightPadding;	// 0x30c21a3d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30f0f629
- (BOOL)updateForNewData:(id)newData actions:(int)actions;	// 0x30c20045
@end

