/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBShape.h"
#import "UIKBCacheKey.h"
#import "NSCoding.h"

@class NSArray, NSString, NSMutableArray, NSDictionary, NSMutableDictionary;

@interface UIKBKeyboard : UIKBShape <NSCoding, UIKBCacheKey> {
	NSString *m_name;	// 60 = 0x3c
	NSString *m_visualStyle;	// 64 = 0x40
	NSString *m_layout;	// 68 = 0x44
	NSMutableArray *m_keyplanes;	// 72 = 0x48
	NSMutableDictionary *m_keyCache;	// 76 = 0x4c
	NSMutableDictionary *m_keysetCache;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x353bc0b5; 
@property(retain, nonatomic) NSDictionary *keyCache;	// G=0x353bc335; S=0x353bc345; @synthesize=m_keyCache
@property(retain, nonatomic) NSArray *keyplanes;	// G=0x353bc301; S=0x353bc311; @synthesize=m_keyplanes
@property(retain, nonatomic) NSMutableDictionary *keysetCache;	// G=0x353bc369; S=0x353bc379; @synthesize=m_keysetCache
@property(readonly, assign, nonatomic) NSString *layoutName;	// G=0x353bb3b5; 
@property(retain, nonatomic) NSString *name;	// G=0x353bc299; S=0x353bc2a9; @synthesize=m_name
@property(retain, nonatomic) NSString *visualStyle;	// G=0x353bc2cd; S=0x353bc2dd; @synthesize=m_visualStyle
+ (id)keyboard;	// 0x353bb211
- (id)init;	// 0x353bb259
- (id)initWithCoder:(id)coder;	// 0x353bb6b9
- (void)addKeyplane:(id)keyplane;	// 0x353bbe45
// declared property getter: - (id)cacheKey;	// 0x353bc0b5
- (void)cacheKey:(id)key onKeyplane:(id)keyplane;	// 0x353bb3fd
- (id)cachedKeysByKeyName:(id)name onKeyplane:(id)keyplane;	// 0x353bb5a5
- (id)currentKeyplanes;	// 0x353bc115
- (void)dealloc;	// 0x353bb301
- (id)description;	// 0x353bbe65
- (void)encodeWithCoder:(id)coder;	// 0x353bbb39
- (BOOL)isEqual:(id)equal;	// 0x353bbbd5
// declared property getter: - (id)keyCache;	// 0x353bc335
- (id)keyplaneForKey:(id)key;	// 0x353bc125
- (id)keyplaneWithName:(id)name;	// 0x353bbd7d
// declared property getter: - (id)keyplanes;	// 0x353bc301
// declared property getter: - (id)keysetCache;	// 0x353bc369
- (void)layout;	// 0x353bbf11
// declared property getter: - (id)layoutName;	// 0x353bb3b5
- (void)makeLikeOther:(id)other;	// 0x353bbc81
// declared property getter: - (id)name;	// 0x353bc299
// declared property setter: - (void)setKeyCache:(id)cache;	// 0x353bc345
// declared property setter: - (void)setKeyplanes:(id)keyplanes;	// 0x353bc311
// declared property setter: - (void)setKeysetCache:(id)cache;	// 0x353bc379
// declared property setter: - (void)setName:(id)name;	// 0x353bc2a9
// declared property setter: - (void)setVisualStyle:(id)style;	// 0x353bc2dd
// declared property getter: - (id)visualStyle;	// 0x353bc2cd
@end

