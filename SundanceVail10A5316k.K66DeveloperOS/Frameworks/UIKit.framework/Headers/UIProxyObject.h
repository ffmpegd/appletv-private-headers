/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "UIKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIProxyObject : NSObject <NSCoding> {
@private
	NSString *proxiedObjectIdentifier;	// 4 = 0x4
}
@property(retain) NSString *proxiedObjectIdentifier;	// G=0x302de089; S=0x302de045; converted property
+ (void)addMappingFromIdentifier:(id)identifier toObject:(id)object forCoder:(id)coder;	// 0x302ddd01
+ (void)addMappings:(id)mappings forCoder:(id)coder;	// 0x302ddd7d
+ (id)mappedObjectForCoder:(id)coder withIdentifier:(id)identifier;	// 0x302dde71
+ (CFDictionaryRef)proxyDecodingMap;	// 0x302ddcb5
+ (void)removeMappingsForCoder:(id)coder;	// 0x302ddeb1
- (id)initWithCoder:(id)coder;	// 0x302dded1
- (void)dealloc;	// 0x302ddff9
- (void)encodeWithCoder:(id)coder;	// 0x302ddfc9
// converted property getter: - (id)proxiedObjectIdentifier;	// 0x302de089
// converted property setter: - (void)setProxiedObjectIdentifier:(id)identifier;	// 0x302de045
@end
