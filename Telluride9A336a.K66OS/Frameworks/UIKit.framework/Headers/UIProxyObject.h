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
@property(retain) NSString *proxiedObjectIdentifier;	// G=0x35329b8d; S=0x35329b49; converted property
+ (void)addMappingFromIdentifier:(id)identifier toObject:(id)object forCoder:(id)coder;	// 0x35329821
+ (void)addMappings:(id)mappings forCoder:(id)coder;	// 0x35329899
+ (id)mappedObjectForCoder:(id)coder withIdentifier:(id)identifier;	// 0x35329971
+ (CFDictionaryRef)proxyDecodingMap;	// 0x353297c5
+ (void)removeMappingsForCoder:(id)coder;	// 0x353299b5
- (id)initWithCoder:(id)coder;	// 0x353299d5
- (void)dealloc;	// 0x35329afd
- (void)encodeWithCoder:(id)coder;	// 0x35329acd
// converted property getter: - (id)proxiedObjectIdentifier;	// 0x35329b8d
// converted property setter: - (void)setProxiedObjectIdentifier:(id)identifier;	// 0x35329b49
@end

