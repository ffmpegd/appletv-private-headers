/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColorPalette.h"
#import "EDCollection.h"


__attribute__((visibility("hidden")))
@interface EDColorsCollection : EDCollection <OADColorPalette> {
@private
	unsigned mDefaultColorsCount;	// 8 = 0x8
}
+ (bool)isSystemColorId:(unsigned)anId;	// 0x34c5a049
+ (int)oadSchemeColorIdFromThemeIndex:(int)themeIndex;	// 0x34d20285
+ (int)systemColorIdFromIndex:(unsigned)index;	// 0x34c5a061
+ (unsigned)xlColorIndexFromCPSystemColorIDEnum:(int)cpsystemColorIDEnum;	// 0x34dcb1a5
- (id)initWithDefaultSetup:(bool)defaultSetup;	// 0x34c56a71
- (void)addColors:(const unsigned *)colors count:(unsigned long)count defaultColors:(const unsigned *)colors3 defaultCount:(unsigned)count4;	// 0x34c5f4f9
- (void)addDefaultPalette;	// 0x34dcb1d5
- (unsigned)addOrEquivalentColorExcludingDefaults:(id)defaults;	// 0x34ce5b91
- (void)addPalette:(const unsigned *)palette paletteSize:(unsigned long)size paletteX:(const unsigned *)x paletteXSize:(unsigned)size4;	// 0x34c5f3e1
- (id)colorWithIndex:(unsigned)index;	// 0x34c64a29
- (unsigned)defaultColorsCount;	// 0x34dcb195
- (const unsigned *)defaultPalette;	// 0x34c5f4ed
- (void)setupDefaults;	// 0x34c56acd
@end

