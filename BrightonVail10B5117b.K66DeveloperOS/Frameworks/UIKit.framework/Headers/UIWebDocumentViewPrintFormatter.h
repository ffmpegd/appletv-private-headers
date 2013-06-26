/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewPrintFormatter.h"

@class UIWebPaginationInfo;

@interface UIWebDocumentViewPrintFormatter : UIViewPrintFormatter {
	UIWebPaginationInfo *_paginationInfo;	// 48 = 0x30
}
- (int)_recalcPageCount;	// 0x330039ad
- (id)_webDocumentView;	// 0x3300394d
- (id)copyWithZone:(NSZone *)zone;	// 0x330038f9
- (void)dealloc;	// 0x330038ad
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x33003b49
- (CGRect)rectForPageAtIndex:(int)index;	// 0x33003a95
- (void)removeFromPrintPageRenderer;	// 0x3300395d
@end
