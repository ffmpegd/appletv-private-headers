/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import <NSCoder.h> // Unknown library
#import "XPCObjects-Structs.h"

@class NSArray, NSString;

@interface XPCDecoder : NSCoder {
	void *_encoding;	// 4 = 0x4
	void *_currentObject;	// 8 = 0x8
	CFDictionaryRef _decodedObjects;	// 12 = 0xc
	CFSetRef _requestedDecodedObjects;	// 16 = 0x10
	NSArray *_allowedClasses;	// 20 = 0x14
	NSString *_errorDescription;	// 24 = 0x18
}
@property(retain, nonatomic) NSArray *allowedClasses;	// G=0x3302d619; S=0x3302deb1; @synthesize=_allowedClasses
@property(copy, nonatomic) NSString *errorDescription;	// G=0x3302d609; S=0x3302ded9; @synthesize=_errorDescription
+ (id)rootObjectForEncoding:(void *)encoding;	// 0x3302de9d
+ (id)rootObjectForEncoding:(void *)encoding allowedClasses:(id)classes;	// 0x3302de79
+ (id)rootObjectForEncoding:(void *)encoding allowedClasses:(id)classes errorDescription:(id)description;	// 0x3302ddd9
- (id)initWithEncoding:(void *)encoding;	// 0x3302e6b1
- (BOOL)_classIsAllowed:(Class)allowed;	// 0x3302defd
- (void)_verifyCurrentObject;	// 0x3302e511
// declared property getter: - (id)allowedClasses;	// 0x3302d619
- (BOOL)allowsKeyedCoding;	// 0x3302d605
- (BOOL)containsValueForKey:(id)key;	// 0x3302e4c5
- (void)dealloc;	// 0x3302dd41
- (BOOL)decodeBoolForKey:(id)key;	// 0x3302e0c5
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x3302df89
- (double)decodeDoubleForKey:(id)key;	// 0x3302dfd1
- (float)decodeFloatForKey:(id)key;	// 0x3302e015
- (int)decodeInt32ForKey:(id)key;	// 0x3302e07d
- (long long)decodeInt64ForKey:(id)key;	// 0x3302e039
- (int)decodeIntForKey:(id)key;	// 0x3302e0ad
- (int)decodeIntegerForKey:(id)key;	// 0x3302e095
- (id)decodeObject;	// 0x3302e565
- (id)decodeObjectForKey:(id)key;	// 0x3302e109
// declared property getter: - (id)errorDescription;	// 0x3302d609
// declared property setter: - (void)setAllowedClasses:(id)classes;	// 0x3302deb1
// declared property setter: - (void)setErrorDescription:(id)description;	// 0x3302ded9
- (int)versionForClassName:(id)className;	// 0x3302df61
@end

