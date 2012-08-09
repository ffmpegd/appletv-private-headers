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
- (int)_recalcPageCount;	// 0x3058baad
- (id)_webDocumentView;	// 0x3058ba4d
- (id)copyWithZone:(NSZone *)zone;	// 0x3058b9f9
- (void)dealloc;	// 0x3058b9ad
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x3058bc49
- (CGRect)rectForPageAtIndex:(int)index;	// 0x3058bb95
- (void)removeFromPrintPageRenderer;	// 0x3058ba5d
@end
