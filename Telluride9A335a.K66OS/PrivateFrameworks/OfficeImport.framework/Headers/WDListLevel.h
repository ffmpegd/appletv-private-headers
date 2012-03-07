/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableString, WDCharacterProperties, WDOfficeArt, WDParagraphProperties;

__attribute__((visibility("hidden")))
@interface WDListLevel : NSObject {
@private
	WDParagraphProperties *mParagraphProperties;	// 4 = 0x4
	WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
	WDOfficeArt *mImage;	// 12 = 0xc
	int mStartNumber;	// 16 = 0x10
	int mNumberFormat;	// 20 = 0x14
	BOOL mRestartNumbering;	// 24 = 0x18
	BOOL mLegal;	// 25 = 0x19
	int mSuffix;	// 28 = 0x1c
	NSMutableString *mText;	// 32 = 0x20
	BOOL mLegacy;	// 36 = 0x24
	int mLegacySpace;	// 40 = 0x28
	int mLegacyIndent;	// 44 = 0x2c
	int mJustification;	// 48 = 0x30
}
@property(retain) id image;	// G=0x353b37f5; S=0x3528044d; converted property
@property(assign) int justification;	// G=0x353b3875; S=0x352606b1; converted property
@property(assign) BOOL legacy;	// G=0x353b3845; S=0x35260681; converted property
@property(assign) long legacyIndent;	// G=0x353b3865; S=0x352606a1; converted property
@property(assign) long legacySpace;	// G=0x353b3855; S=0x35260691; converted property
@property(assign) BOOL legal;	// G=0x353b3819; S=0x3526063d; converted property
@property(assign) int numberFormat;	// G=0x351c7765; S=0x3526061d; converted property
@property(assign) BOOL restartNumbering;	// G=0x353b3805; S=0x3526062d; converted property
@property(assign) long startNumber;	// G=0x351c7219; S=0x3526060d; converted property
@property(assign) int suffix;	// G=0x353b382d; S=0x3526064d; converted property
@property(retain) id text;	// G=0x351c77f1; S=0x3526065d; converted property
- (id)initWithDocument:(id)document;	// 0x352600a9
- (id)characterProperties;	// 0x351c7f25
- (void)dealloc;	// 0x351c88cd
// converted property getter: - (id)image;	// 0x353b37f5
- (BOOL)imageBullet;	// 0x353b38ad
- (BOOL)imageBulletOverridden;	// 0x353b3889
// converted property getter: - (int)justification;	// 0x353b3875
- (BOOL)justificationOverridden;	// 0x353b3885
// converted property getter: - (BOOL)legacy;	// 0x353b3845
// converted property getter: - (long)legacyIndent;	// 0x353b3865
// converted property getter: - (long)legacySpace;	// 0x353b3855
// converted property getter: - (BOOL)legal;	// 0x353b3819
- (BOOL)legalOverridden;	// 0x353b3829
// converted property getter: - (int)numberFormat;	// 0x351c7765
- (BOOL)numberFormatOverridden;	// 0x353b37f1
- (id)paragraphProperties;	// 0x351c72ad
// converted property getter: - (BOOL)restartNumbering;	// 0x353b3805
- (BOOL)restartNumberingOverridden;	// 0x353b3815
// converted property setter: - (void)setImage:(id)image;	// 0x3528044d
// converted property setter: - (void)setJustification:(int)justification;	// 0x352606b1
// converted property setter: - (void)setLegacy:(BOOL)legacy;	// 0x35260681
// converted property setter: - (void)setLegacyIndent:(long)indent;	// 0x352606a1
// converted property setter: - (void)setLegacySpace:(long)space;	// 0x35260691
// converted property setter: - (void)setLegal:(BOOL)legal;	// 0x3526063d
// converted property setter: - (void)setNumberFormat:(int)format;	// 0x3526061d
// converted property setter: - (void)setRestartNumbering:(BOOL)numbering;	// 0x3526062d
// converted property setter: - (void)setStartNumber:(long)number;	// 0x3526060d
// converted property setter: - (void)setSuffix:(int)suffix;	// 0x3526064d
// converted property setter: - (void)setText:(id)text;	// 0x3526065d
// converted property getter: - (long)startNumber;	// 0x351c7219
- (BOOL)startNumberOverridden;	// 0x353b37ed
// converted property getter: - (int)suffix;	// 0x353b382d
- (BOOL)suffixOverridden;	// 0x353b383d
// converted property getter: - (id)text;	// 0x351c77f1
- (BOOL)textOverridden;	// 0x353b3841
@end

