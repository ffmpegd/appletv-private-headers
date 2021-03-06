/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDTableRowProperties, WDParagraphProperties, WDTableStyleOverride, WDStyleSheet, WDCharacterProperties, NSString, WDTableCellProperties;

@interface WDStyle : NSObject <NSCopying> {
	WDParagraphProperties *mParagraphProperties;	// 4 = 0x4
	WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
	WDTableRowProperties *mTableRowProperties;	// 12 = 0xc
	WDTableCellProperties *mTableCellProperties;	// 16 = 0x10
	WDTableStyleOverride *mTableStyleOverrides[12];	// 20 = 0x14
	WDStyleSheet *mStyleSheet;	// 68 = 0x44
	WDStyle *mBaseStyle;	// 72 = 0x48
	WDStyle *mNextStyle;	// 76 = 0x4c
	BOOL mHidden;	// 80 = 0x50
	NSString *mName;	// 84 = 0x54
	NSString *mId;	// 88 = 0x58
	int mStyleType;	// 92 = 0x5c
}
@property(retain) id baseStyle;	// G=0x31c7e4f5; S=0x31c677fd; converted property
@property(assign) BOOL hidden;	// G=0x31e39f49; S=0x31ca6bd1; converted property
@property(retain) id name;	// G=0x31ca7f49; S=0x31c61cf1; converted property
@property(retain) id nextStyle;	// G=0x31e39fbd; S=0x31c677ed; converted property
- (id)initWithStyleSheet:(id)styleSheet id:(id)anId type:(int)type;	// 0x31c61499
// converted property getter: - (id)baseStyle;	// 0x31c7e4f5
- (id)characterProperties;	// 0x31c6342d
- (id)copyWithZone:(NSZone *)zone;	// 0x31e39fcd
- (void)dealloc;	// 0x31c88f45
// converted property getter: - (BOOL)hidden;	// 0x31e39f49
- (id)id;	// 0x31c65d09
- (BOOL)isAnythingOverridden;	// 0x31e39f59
// converted property getter: - (id)name;	// 0x31ca7f49
// converted property getter: - (id)nextStyle;	// 0x31e39fbd
- (id)paragraphProperties;	// 0x31c64571
// converted property setter: - (void)setBaseStyle:(id)style;	// 0x31c677fd
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x31ca6bd1
// converted property setter: - (void)setName:(id)name;	// 0x31c61cf1
// converted property setter: - (void)setNextStyle:(id)style;	// 0x31c677ed
- (id)styleSheet;	// 0x31c61c29
- (id)tableCellProperties;	// 0x31cd837d
- (id)tableProperties;	// 0x31c66479
- (id)tableRowProperties;	// 0x31cd82cd
- (id)tableStyleOverrideForPart:(int)part;	// 0x31cd8629
- (int)type;	// 0x31c65c65
@end

