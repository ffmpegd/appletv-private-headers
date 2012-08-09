/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMMapper.h"

@class OIXMLElement, WDParagraph;

@interface WMParagraphMapper : CMMapper {
	WDParagraph *wdParagraph;	// 8 = 0x8
	WMParagraphMapper *mCurrentMapper;	// 12 = 0xc
	OIXMLElement *mActiveNode;	// 16 = 0x10
	BOOL mIsDeleted;	// 20 = 0x14
}
+ (void)mapPlaceholderAt:(id)at rect:(CGRect)rect withState:(id)state;	// 0x370d2f91
- (id)initWithBlock:(id)block parent:(id)parent;	// 0x36ff6e1d
- (id)activeNode;	// 0x36ffcac5
- (BOOL)containsOfficeArt;	// 0x36ff87bd
- (void)dealloc;	// 0x36ffa9c5
- (BOOL)isCollapsable:(id)collapsable;	// 0x36ffa5f1
- (BOOL)isTextFrame;	// 0x36ff7149
- (void)mapAt:(id)at withState:(id)state;	// 0x36ff6e71
- (void)mapFieldMarkerAt:(id)at marker:(id)marker withState:(id)state;	// 0x370003dd
- (void)mapParagraphBodyWithState:(id)state;	// 0x36ff8d61
- (void)mapRunAt:(id)at run:(id)run withState:(id)state;	// 0x36ff8f49
- (id)runAtIndex:(int)index;	// 0x3708b8b5
@end
