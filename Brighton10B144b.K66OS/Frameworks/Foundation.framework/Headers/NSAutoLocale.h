/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSLocale.h> // Unknown library
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSAutoLocale : NSLocale {
	NSLocale *loc;	// 4 = 0x4
}
+ (BOOL)supportsSecureCoding;	// 0x3193d17d
- (id)init;	// 0x3193cf61
- (id)initWithCoder:(id)coder;	// 0x3193d1d5
- (id)initWithLocaleIdentifier:(id)localeIdentifier;	// 0x3193cff5
- (id)_prefs;	// 0x3193d0c1
- (void)_update:(id)update;	// 0x3193cf0d
- (Class)classForCoder;	// 0x3193d26d
- (id)copyWithZone:(NSZone *)zone;	// 0x3193d149
- (void)dealloc;	// 0x3193d005
- (id)description;	// 0x3193d0e1
- (id)displayNameForKey:(id)key value:(id)value;	// 0x3193d0a1
- (void)encodeWithCoder:(id)coder;	// 0x3193d181
- (id)objectForKey:(id)key;	// 0x3193d081
@end

