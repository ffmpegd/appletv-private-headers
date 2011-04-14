/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSTimer, UIShadowView, UITableViewCell, NSIndexPath;

__attribute__((visibility("hidden")))
@interface _UITableViewReorderingSupport : NSObject {
@private
	UITableViewCell *_reorderedCell;	// 4 = 0x4
	NSIndexPath *_initialIndexPath;	// 8 = 0x8
	NSIndexPath *_targetIndexPath;	// 12 = 0xc
	unsigned _oldShowHorizontalScrollIndicator : 1;	// 16 = 0x10
	unsigned _oldShowVerticalScrollIndicator : 1;	// 16 = 0x10
	unsigned _reloadDataCalled : 1;	// 16 = 0x10
	unsigned _reserved : 29;	// 16 = 0x10
	NSTimer *_autoscrollTimer;	// 20 = 0x14
	UIShadowView *_topShadowView;	// 24 = 0x18
	UIShadowView *_bottomShadowView;	// 28 = 0x1c
	BOOL _wasScrollingEnabled;	// 32 = 0x20
}
@end
