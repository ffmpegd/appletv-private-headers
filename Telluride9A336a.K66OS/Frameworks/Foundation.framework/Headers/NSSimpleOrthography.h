/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOrthography.h"


@interface NSSimpleOrthography : NSOrthography {
	unsigned _orthographyFlags;	// 4 = 0x4
}
@property(readonly, assign) unsigned orthographyFlags;	// G=0x33730b6d; converted property
+ (void)initialize;	// 0x33730829
+ (id)orthographyWithFlags:(unsigned)flags;	// 0x33730875
- (id)initWithCoder:(id)coder;	// 0x33730a45
- (id)initWithDominantScript:(id)dominantScript languageMap:(id)map;	// 0x33730949
- (id)initWithFlags:(unsigned)flags;	// 0x337308b5
- (id)allLanguages;	// 0x33730c65
- (id)allScripts;	// 0x33730c49
- (Class)classForCoder;	// 0x337309c5
- (id)dominantLanguage;	// 0x33730c29
- (id)dominantLanguageForScript:(id)script;	// 0x33730be5
- (id)dominantScript;	// 0x33730b31
- (void)encodeWithCoder:(id)coder;	// 0x337309d5
- (id)languageMap;	// 0x33730b51
- (id)languagesForScript:(id)script;	// 0x33730b7d
// converted property getter: - (unsigned)orthographyFlags;	// 0x33730b6d
@end

