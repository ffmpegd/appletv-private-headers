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
@private
	int _signalStrengthRaw;	// 76 = 0x4c
	int _signalStrengthBars;	// 80 = 0x50
	BOOL _enableRSSI;	// 84 = 0x54
	BOOL _showRSSI;	// 85 = 0x55
}
- (id)_stringForRSSI;	// 0x353c18fd
- (id)contentsImageForStyle:(int)style;	// 0x350eaf0d
- (float)extraRightPadding;	// 0x350caf65
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x353c184d
- (BOOL)updateForNewData:(id)newData actions:(int)actions;	// 0x350c94d9
@end

