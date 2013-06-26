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
@property(readonly, assign) unsigned orthographyFlags;	// G=0x319a0a51; converted property
+ (void)initialize;	// 0x319a06f5
+ (id)orthographyWithFlags:(unsigned)flags;	// 0x319a0741
- (id)initWithCoder:(id)coder;	// 0x319a092d
- (id)initWithDominantScript:(id)dominantScript languageMap:(id)map;	// 0x319a0821
- (id)initWithFlags:(unsigned)flags;	// 0x319a0781
- (id)allLanguages;	// 0x319a0b49
- (id)allScripts;	// 0x319a0b2d
- (Class)classForCoder;	// 0x319a08a9
- (id)dominantLanguage;	// 0x319a0b0d
- (id)dominantLanguageForScript:(id)script;	// 0x319a0ac9
- (id)dominantScript;	// 0x319a0a15
- (void)encodeWithCoder:(id)coder;	// 0x319a08b9
- (id)languageMap;	// 0x319a0a35
- (id)languagesForScript:(id)script;	// 0x319a0a61
// converted property getter: - (unsigned)orthographyFlags;	// 0x319a0a51
@end
