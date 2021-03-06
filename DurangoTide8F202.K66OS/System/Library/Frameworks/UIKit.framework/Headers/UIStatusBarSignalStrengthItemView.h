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
	int _signalStrengthRaw;	// 72 = 0x48
	int _signalStrengthBars;	// 76 = 0x4c
	BOOL _enableRSSI;	// 80 = 0x50
	BOOL _showRSSI;	// 81 = 0x51
}
- (id)_stringForRSSI;	// 0x30824801
- (id)contentsImageForStyle:(int)style;	// 0x305c17a9
- (float)extraRightPadding;	// 0x305a6ff1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30824839
- (BOOL)updateForNewData:(XXStruct_LyCp7D *)newData actions:(int)actions;	// 0x305a580d
@end

