/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface NSScanner : NSObject <NSCopying> {
}
@property(assign) BOOL caseSensitive;	// G=0x3209d791; S=0x3209d829; converted property
@property(retain) id charactersToBeSkipped;	// G=0x3209d749; S=0x3209d805; converted property
@property(retain) id locale;	// G=0x3209d795; S=0x3209d84d; converted property
@property(assign) unsigned scanLocation;	// G=0x3209d7e1; S=0x3209d7bd; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x32044a1d
+ (id)localizedScannerWithString:(id)string;	// 0x3209c9e5
+ (id)scannerWithString:(id)string;	// 0x320449d1
- (id)initWithString:(id)string;	// 0x32044b41
- (id)_invertedSkipSet;	// 0x3209cb4d
- (id)_remainingString;	// 0x3205fff9
- (BOOL)_scanDecimal:(unsigned)decimal into:(int *)into;	// 0x32054779
// converted property getter: - (BOOL)caseSensitive;	// 0x3209d791
// converted property getter: - (id)charactersToBeSkipped;	// 0x3209d749
- (id)copyWithZone:(NSZone *)zone;	// 0x3209ca61
- (BOOL)isAtEnd;	// 0x32044b6d
// converted property getter: - (id)locale;	// 0x3209d795
- (BOOL)scanCharactersFromSet:(id)set intoString:(id *)string;	// 0x320545ed
- (BOOL)scanDecimal:(XXStruct_9isexA *)decimal;	// 0x320b411d
- (BOOL)scanDouble:(double *)aDouble;	// 0x3204f275
- (BOOL)scanFloat:(float *)aFloat;	// 0x3209cecd
- (BOOL)scanHexDouble:(double *)aDouble;	// 0x3209cf7d
- (BOOL)scanHexFloat:(float *)aFloat;	// 0x3209d011
- (BOOL)scanHexInt:(unsigned *)int;	// 0x3209d5a1
- (BOOL)scanHexLongLong:(unsigned long long *)aLong;	// 0x3209d1a9
- (BOOL)scanInt:(int *)int;	// 0x3209d135
- (BOOL)scanInteger:(int *)integer;	// 0x3204f0e1
// converted property getter: - (unsigned)scanLocation;	// 0x3209d7e1
- (BOOL)scanLongLong:(long long *)aLong;	// 0x3209d0c1
- (BOOL)scanString:(id)string intoString:(id *)string2;	// 0x3204f135
- (BOOL)scanUpToCharactersFromSet:(id)set intoString:(id *)string;	// 0x32044d5d
- (BOOL)scanUpToString:(id)string intoString:(id *)string2;	// 0x3209d609
// converted property setter: - (void)setCaseSensitive:(BOOL)sensitive;	// 0x3209d829
// converted property setter: - (void)setCharactersToBeSkipped:(id)beSkipped;	// 0x3209d805
// converted property setter: - (void)setLocale:(id)locale;	// 0x3209d84d
// converted property setter: - (void)setScanLocation:(unsigned)location;	// 0x3209d7bd
- (id)string;	// 0x3209d799
@end
