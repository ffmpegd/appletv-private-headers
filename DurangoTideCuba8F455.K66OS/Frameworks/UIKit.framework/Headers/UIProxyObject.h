/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIProxyObject : NSObject <NSCoding> {
@private
	NSString *proxiedObjectIdentifier;	// 4 = 0x4
}
@property(retain) NSString *proxiedObjectIdentifier;	// G=0x30280b59; S=0x30280b69; converted property
+ (void)addMappingFromIdentifier:(id)identifier toObject:(id)object forCoder:(id)coder;	// 0x30280d8d
+ (void)addMappings:(id)mappings forCoder:(id)coder;	// 0x30280dfd
+ (id)mappedObjectForCoder:(id)coder withIdentifier:(id)identifier;	// 0x30280d59
+ (CFDictionaryRef)proxyDecodingMap;	// 0x30280d01
+ (void)removeMappingsForCoder:(id)coder;	// 0x30280ee1
- (id)initWithCoder:(id)coder;	// 0x30280c19
- (void)dealloc;	// 0x30280ba5
- (void)encodeWithCoder:(id)coder;	// 0x30280bed
// converted property getter: - (id)proxiedObjectIdentifier;	// 0x30280b59
// converted property setter: - (void)setProxiedObjectIdentifier:(id)identifier;	// 0x30280b69
@end

