/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDFieldMarker : WDRun {
@private
	WDCharacterProperties *mProperties;	// 8 = 0x8
	long mFieldPosition;	// 12 = 0xc
	int mMarkerType;	// 16 = 0x10
	unsigned char mFieldType;	// 20 = 0x14
	unsigned mZombieEmbed : 1;	// 21 = 0x15
	unsigned mResultDirty : 1;	// 21 = 0x15
	unsigned mResultEdited : 1;	// 21 = 0x15
	unsigned mLocked : 1;	// 21 = 0x15
	unsigned mPrivateResult : 1;	// 21 = 0x15
	unsigned mNested : 1;	// 21 = 0x15
	unsigned mHasSeparator : 1;	// 21 = 0x15
}
@property(assign) int fieldMarkerType;	// G=0x31104015; S=0x310f2659; converted property
@property(assign) long fieldPosition;	// G=0x312b1629; S=0x31134469; converted property
@property(assign) unsigned char fieldType;	// G=0x3110415d; S=0x3113447d; converted property
@property(assign) BOOL hasSeparator;	// G=0x312b176d; S=0x312b1781; converted property
@property(assign) BOOL locked;	// G=0x312b16d1; S=0x312b16e5; converted property
@property(assign) BOOL nested;	// G=0x312b1739; S=0x312b174d; converted property
@property(assign) BOOL privateResult;	// G=0x312b1705; S=0x312b1719; converted property
@property(assign) BOOL resultDirty;	// G=0x312b1669; S=0x312b167d; converted property
@property(assign) BOOL resultEdited;	// G=0x312b169d; S=0x312b16b1; converted property
@property(assign) BOOL zombieEmbed;	// G=0x312b1639; S=0x312b164d; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x310f2509
- (void)clearProperties;	// 0x312b15fd
- (void)dealloc;	// 0x3110a3a9
// converted property getter: - (int)fieldMarkerType;	// 0x31104015
// converted property getter: - (long)fieldPosition;	// 0x312b1629
// converted property getter: - (unsigned char)fieldType;	// 0x3110415d
// converted property getter: - (BOOL)hasSeparator;	// 0x312b176d
// converted property getter: - (BOOL)locked;	// 0x312b16d1
// converted property getter: - (BOOL)nested;	// 0x312b1739
// converted property getter: - (BOOL)privateResult;	// 0x312b1705
- (id)properties;	// 0x31134459
// converted property getter: - (BOOL)resultDirty;	// 0x312b1669
// converted property getter: - (BOOL)resultEdited;	// 0x312b169d
- (int)runType;	// 0x31104011
// converted property setter: - (void)setFieldMarkerType:(int)type;	// 0x310f2659
// converted property setter: - (void)setFieldPosition:(long)position;	// 0x31134469
// converted property setter: - (void)setFieldType:(unsigned char)type;	// 0x3113447d
// converted property setter: - (void)setHasSeparator:(BOOL)separator;	// 0x312b1781
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x312b16e5
// converted property setter: - (void)setNested:(BOOL)nested;	// 0x312b174d
// converted property setter: - (void)setPrivateResult:(BOOL)result;	// 0x312b1719
// converted property setter: - (void)setResultDirty:(BOOL)dirty;	// 0x312b167d
// converted property setter: - (void)setResultEdited:(BOOL)edited;	// 0x312b16b1
// converted property setter: - (void)setZombieEmbed:(BOOL)embed;	// 0x312b164d
// converted property getter: - (BOOL)zombieEmbed;	// 0x312b1639
@end
