/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface DAVXMLNSBag : NSObject {
	NSMutableDictionary *tagMapping;	// 4 = 0x4
	NSMutableDictionary *allNS;	// 8 = 0x8
	unsigned nsCounter;	// 12 = 0xc
	void *reserved1;	// 16 = 0x10
}
+ (id)_smartTagForTag:(id)tag;	// 0x3008ed39
+ (void)initialize;	// 0x3008e8e5
+ (id)namespaceForTag:(id)tag;	// 0x3008e859
+ (void)registerNSTags:(id)tags withNamespace:(id)aNamespace;	// 0x3008e731
- (id)init;	// 0x3008e691
- (id)allXMLNSAttributes;	// 0x3008e345
- (void)dealloc;	// 0x3008e635
- (id)tagForNSTag:(id)nstag;	// 0x3008e43d
@end

