/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterRun, WDText;

@interface WDNote : WDRun {
	WDText *mText;	// 8 = 0x8
	WDCharacterRun *mReference;	// 12 = 0xc
	BOOL mAutomaticNumbering;	// 16 = 0x10
}
@property(assign) BOOL automaticNumbering;	// G=0x349b4e29; S=0x34992165; converted property
- (id)initWithParagraph:(id)paragraph footnote:(BOOL)footnote;	// 0x34991d1d
// converted property getter: - (BOOL)automaticNumbering;	// 0x349b4e29
- (void)dealloc;	// 0x349927a1
- (id)reference;	// 0x34992565
- (int)runType;	// 0x34992775
// converted property setter: - (void)setAutomaticNumbering:(BOOL)numbering;	// 0x34992165
- (id)text;	// 0x34992155
@end

