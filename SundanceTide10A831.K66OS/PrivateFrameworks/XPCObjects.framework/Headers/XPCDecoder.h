/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import "XPCObjects-Structs.h"
#import <NSCoder.h> // Unknown library

@class NSObject, NSArray, NSString;
@protocol OS_xpc_object;

@interface XPCDecoder : NSCoder {
	NSObject<OS_xpc_object> *_encoding;	// 4 = 0x4
	NSObject<OS_xpc_object> *_currentObject;	// 8 = 0x8
	CFDictionaryRef _decodedObjects;	// 12 = 0xc
	CFSetRef _requestedDecodedObjects;	// 16 = 0x10
	NSArray *_allowedClasses;	// 20 = 0x14
	NSString *_errorDescription;	// 24 = 0x18
}
@property(copy, nonatomic) NSString *errorDescription;	// G=0x3071c491; S=0x3071c4a5; @synthesize=_errorDescription
+ (id)rootObjectForEncoding:(id)encoding;	// 0x3071ba65
+ (id)rootObjectForEncoding:(id)encoding allowedClasses:(id)classes;	// 0x3071ba79
+ (id)rootObjectForEncoding:(id)encoding allowedClasses:(id)classes errorDescription:(id)description;	// 0x3071ba9d
- (id)initWithEncoding:(id)encoding;	// 0x3071bb4d
- (BOOL)_classIsAllowed:(Class)allowed;	// 0x3071c431
- (void)_verifyCurrentObject;	// 0x3071bdbd
- (BOOL)allowsKeyedCoding;	// 0x3071bdb9
- (BOOL)containsValueForKey:(id)key;	// 0x3071be0d
- (void)dealloc;	// 0x3071bbd5
- (BOOL)decodeBoolForKey:(id)key;	// 0x3071c0dd
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x3071c21d
- (double)decodeDoubleForKey:(id)key;	// 0x3071c1d5
- (id)decodeEndpointForKey:(id)key;	// 0x3071c269
- (float)decodeFloatForKey:(id)key;	// 0x3071c1b1
- (int)decodeInt32ForKey:(id)key;	// 0x3071c151
- (long long)decodeInt64ForKey:(id)key;	// 0x3071c169
- (int)decodeIntForKey:(id)key;	// 0x3071c121
- (int)decodeIntegerForKey:(id)key;	// 0x3071c139
- (unsigned)decodeMachSendRightForKey:(id)key;	// 0x3071c331
- (id)decodeObject;	// 0x3071bc6d
- (id)decodeObjectForKey:(id)key;	// 0x3071be59
// declared property getter: - (id)errorDescription;	// 0x3071c491
// declared property setter: - (void)setErrorDescription:(id)description;	// 0x3071c4a5
- (int)versionForClassName:(id)className;	// 0x3071c409
@end

