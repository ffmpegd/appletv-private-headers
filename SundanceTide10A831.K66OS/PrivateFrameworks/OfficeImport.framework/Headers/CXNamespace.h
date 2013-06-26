/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface CXNamespace : NSObject {
	const char *mUri;	// 4 = 0x4
	xmlDoc *mDocument;	// 8 = 0x8
	xmlNs *mDocumentNamespace;	// 12 = 0xc
}
+ (void)clearRegisteredNamespaces;	// 0x36bc5f09
+ (BOOL)isNamespaceSupported:(const char *)supported;	// 0x36b5ea49
+ (BOOL)isPrefixSupportedFromNodeContext:(xmlNode *)nodeContext prefix:(const char *)prefix;	// 0x36b5e9e1
+ (BOOL)isPrefixSupportedFromStream:(xmlTextReader *)stream prefix:(const char *)prefix;	// 0x36bc5edd
+ (void)registerNamespace:(id)aNamespace;	// 0x369c59c9
- (id)initUnsupportedNsWithUri:(const char *)uri;	// 0x369c5989
- (id)initWithUri:(const char *)uri;	// 0x369c594d
- (BOOL)containsAttribute:(xmlAttr *)attribute;	// 0x36aa6cd5
- (BOOL)containsNode:(xmlNode *)node;	// 0x36aa3ff1
- (const char *)uri;	// 0x369c5b79
@end
