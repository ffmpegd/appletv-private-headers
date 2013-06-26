/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterProperties;

@interface WDFieldMarker : WDRun {
	WDCharacterProperties *mProperties;	// 8 = 0x8
	int mFieldPosition;	// 12 = 0xc
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
@property(assign) int fieldMarkerType;	// G=0x317619ed; S=0x3174e599; converted property
@property(assign) int fieldPosition;	// G=0x31942cdd; S=0x3174e589; converted property
@property(assign) unsigned char fieldType;	// G=0x31761b45; S=0x3174e5ad; converted property
@property(assign) BOOL hasSeparator;	// G=0x31942e35; S=0x31942e4d; converted property
@property(assign) BOOL locked;	// G=0x31942d8d; S=0x31942da5; converted property
@property(assign) BOOL nested;	// G=0x31942dfd; S=0x31942e15; converted property
@property(assign) BOOL privateResult;	// G=0x31942dc5; S=0x31942ddd; converted property
@property(assign) BOOL resultDirty;	// G=0x31942d1d; S=0x31942d35; converted property
@property(assign) BOOL resultEdited;	// G=0x31942d55; S=0x31942d6d; converted property
@property(assign) BOOL zombieEmbed;	// G=0x31942ced; S=0x31942d01; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x3174e2f1
- (void)clearProperties;	// 0x31942cb1
- (void)dealloc;	// 0x31771e55
// converted property getter: - (int)fieldMarkerType;	// 0x317619ed
// converted property getter: - (int)fieldPosition;	// 0x31942cdd
// converted property getter: - (unsigned char)fieldType;	// 0x31761b45
// converted property getter: - (BOOL)hasSeparator;	// 0x31942e35
// converted property getter: - (BOOL)locked;	// 0x31942d8d
// converted property getter: - (BOOL)nested;	// 0x31942dfd
// converted property getter: - (BOOL)privateResult;	// 0x31942dc5
- (id)properties;	// 0x3174e579
// converted property getter: - (BOOL)resultDirty;	// 0x31942d1d
// converted property getter: - (BOOL)resultEdited;	// 0x31942d55
- (int)runType;	// 0x317619e9
// converted property setter: - (void)setFieldMarkerType:(int)type;	// 0x3174e599
// converted property setter: - (void)setFieldPosition:(int)position;	// 0x3174e589
// converted property setter: - (void)setFieldType:(unsigned char)type;	// 0x3174e5ad
// converted property setter: - (void)setHasSeparator:(BOOL)separator;	// 0x31942e4d
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x31942da5
// converted property setter: - (void)setNested:(BOOL)nested;	// 0x31942e15
// converted property setter: - (void)setPrivateResult:(BOOL)result;	// 0x31942ddd
// converted property setter: - (void)setResultDirty:(BOOL)dirty;	// 0x31942d35
// converted property setter: - (void)setResultEdited:(BOOL)edited;	// 0x31942d6d
// converted property setter: - (void)setZombieEmbed:(BOOL)embed;	// 0x31942d01
// converted property getter: - (BOOL)zombieEmbed;	// 0x31942ced
@end
