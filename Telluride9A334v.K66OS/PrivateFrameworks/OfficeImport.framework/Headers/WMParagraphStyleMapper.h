/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WDParagraph, WDParagraphProperties, WMParagraphStyle;

__attribute__((visibility("hidden")))
@interface WMParagraphStyleMapper : CMMapper {
@private
	WDParagraphProperties *wdParaProperties;	// 8 = 0x8
	WDParagraph *wdParagraph;	// 12 = 0xc
	WMParagraphStyle *mStyle;	// 16 = 0x10
}
- (id)initWithWDParagraph:(id)wdparagraph parent:(id)parent isInTextFrame:(BOOL)textFrame;	// 0x35573e39
- (id)bulletLabelAtLevel:(id)level forIndex:(int)index bulletFormat:(int)format listState:(id)state;	// 0x35582775
- (bool)checkListId:(int)anId level:(int)level;	// 0x35581da1
- (void)dealloc;	// 0x35572d01
- (void)destyleEmptyParagraph;	// 0x355814bd
- (BOOL)isListItem;	// 0x355751f9
- (id)labelStringWithGap:(id)gap;	// 0x357d1c05
- (void)mapAt:(id)at withState:(id)state;	// 0x35572b75
- (void)mapBulletAt:(id)at forLevel:(id)level forIndex:(int)index listState:(id)state isOutline:(BOOL)outline;	// 0x3558241d
- (void)mapListStyleAt:(id)at state:(id)state;	// 0x35575299
@end

