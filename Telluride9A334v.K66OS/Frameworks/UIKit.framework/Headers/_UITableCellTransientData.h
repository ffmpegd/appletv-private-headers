/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIControl, UIRemoveControl, UIView;

__attribute__((visibility("hidden")))
@interface _UITableCellTransientData : NSObject {
@private
	UIRemoveControl *_removeControl;	// 4 = 0x4
	UIControl *_grabber;	// 8 = 0x8
	UIView *_separator;	// 12 = 0xc
	unsigned _reorderingEnabled : 1;	// 16 = 0x10
	unsigned _hidSeparatorForRemoveConfirmation : 1;	// 16 = 0x10
	unsigned _reserved : 30;	// 16 = 0x10
}
- (BOOL)dataRequired;	// 0x301fe001
@end

