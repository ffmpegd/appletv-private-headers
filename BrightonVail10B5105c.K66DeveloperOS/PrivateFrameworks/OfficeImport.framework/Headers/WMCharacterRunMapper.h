/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class NSString, WDCharacterRun, WMStyle;

@interface WMCharacterRunMapper : CMMapper {
	WDCharacterRun *wdCharacterRun;	// 8 = 0x8
	WMStyle *mStyle;	// 12 = 0xc
	float mFontSizeBumpFactor;	// 16 = 0x10
	NSString *mText;	// 20 = 0x14
	BOOL mIsDeleted;	// 24 = 0x18
}
+ (void)addNonCollapsableSpanAt:(id)at withState:(id)state;	// 0x379a3791
- (id)initWithText:(id)text;	// 0x37a7b58d
- (id)initWithWDCharacterRun:(id)wdcharacterRun parent:(id)parent;	// 0x379a3a1d
- (id)baseStyle;	// 0x37a7bb39
- (id)boldStyle;	// 0x37a7b949
- (id)copyCharacterStyle;	// 0x37a7b9ed
- (unsigned)countAndStripLeadingTabs;	// 0x37a7b841
- (void)dealloc;	// 0x379a56c1
- (int)defaultTabWidth;	// 0x379a8ee5
- (BOOL)isDeleted;	// 0x379a56ad
- (void)map1At:(id)at withState:(id)state;	// 0x37a7b625
- (void)mapAt:(id)at withState:(id)state;	// 0x379a4f19
- (void)mapSubstring:(id)substring at:(id)at;	// 0x379a5439
- (void)mapTabs:(unsigned)tabs at:(id)at afterText:(id)text;	// 0x379a8c89
@end

