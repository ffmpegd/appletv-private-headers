/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRMappingDictionary : XXUnknownSuperclass {
	NSMutableDictionary *_info;	// 4 = 0x4
}
- (id)init;	// 0x3b2a91
- (long)count;	// 0x3b2d8d
- (void)dealloc;	// 0x3b2af5
- (id)keyEnumerator;	// 0x3b2dad
- (id)objectEnumerator;	// 0x3b2e25
- (id)objectForKey:(id)key;	// 0x3b2d4d
- (void)setObject:(id)object forKey:(id)key;	// 0x3b2d2d
- (void)setValue:(id)value forKey:(id)key;	// 0x3b2d6d
- (void)setValueTransformer:(id)transformer forKey:(id)key;	// 0x3b2bb5
- (id)transformedValueForKey:(id)key forObject:(id)object;	// 0x3b2b41
- (id)valueForKey:(id)key;	// 0x3b2d7d
- (id)valueTransformerForKey:(id)key;	// 0x3b2cf5
@end

